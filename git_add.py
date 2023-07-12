import subprocess
import re
from collections import defaultdict
from datetime import date
from termcolor import colored
current_date = "07/11/23"
files = defaultdict()

def git_add(step):
    command = ['git', 'add', '*']
    try:
        subprocess.run(command, check=True)
        print(colored(f"Successfully added to the Git repository. ({step})","light_cyan"))
    except subprocess.CalledProcessError as e:
        print(colored(f"Error adding to the Git repository: {e}", 'red'))


def git_status():
    command = ['git', 'status']

    try:
        result = subprocess.run(command, check=True, capture_output=True, text=True)
        output = result.stdout
        pattern = r'(new file|modified):\s(.+)' 
        matches = re.findall(pattern, output)
        mod = 0
        add = 0
        for match in matches:
            change_type, file_name = match
            files[file_name] = change_type
            if change_type == "new file":
                add+=1
            else:
                mod += 1
        
        print(colored(f"Collected additions and modifications ({mod} modifications and {add} additions)","cyan" ))

    except subprocess.CalledProcessError as e:
        print(colored(f"Error running 'git status': {e}", "red"))



def add_changes():
    contents = str()

    with open('changes.md', 'r') as f:
        contents = f.readlines()

    contents.insert(1,'\n')
    contents.insert(2, f"### {current_date}\n")
    i = 3
    for file_name, change_type in files.items():
        contents.insert(i, f"- {change_type}: {file_name}\n")
        i+=1
    
    with open("changes.md", "w") as f:
        contents = "".join(contents)
        f.write(contents)

    print(colored("Stored problem records successfully", "light_magenta"))

def git_commit():
    command = ['git', 'commit', '-m', f'"{current_date}"']
    try:
        subprocess.run(command, check=True)
        print(colored(f"Commited with message: \"{current_date}\"","green"))
    except subprocess.CalledProcessError as e:
        print(colored(f"Error commiting: {e}", 'red'))
    
def git_push():
    command = ['git', 'push', 'origin', 'main']
    try:
        subprocess.run(command, check=True)
        print(colored(f"Pushed upstream to main!","green"))
    except subprocess.CalledProcessError as e:
        print(colored(f"Error pushing: {e}", 'red'))

git_add(1)
git_status()
add_changes()
git_add(2)
git_commit()
git_push()