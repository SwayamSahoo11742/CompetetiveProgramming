import os

def count_files_with_extensions(directory, extensions):
    count = 0

    for root, _, files in os.walk(directory):
        for file in files:
            if file.endswith(tuple(extensions)):
                count += 1

    return count

# Directory to search in
directory_path = "C:/Users/user/Desktop/Dodo/CP"

# Extensions to count
extensions = (".txt", ".cpp", ".py")

# Count the files
file_count = count_files_with_extensions(directory_path, extensions)
print(f"Number of files with extensions {extensions}: {file_count}")
