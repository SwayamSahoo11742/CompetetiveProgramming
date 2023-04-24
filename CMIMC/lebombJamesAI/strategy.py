"""
Edit this file! This is the file you will submit.
"""
import random
import math
import time
from statistics import mean

history = []
placed_data = [[], [], [], [], []]
# Implement me!
def strategy(pid, board):
    return [(0, 0), (0, 0), (0, 0)]

# A random strategy to use in your game.
def random_strategy(pid, board):
    return [
        (random.randint(0, 9), random.randint(0, 9)), 
        (random.randint(0, 9), random.randint(0, 9)), 
        (random.randint(0, 9), random.randint(0, 9)), 
        ]

# Edit me!
def get_strategies():
    """
    Returns a list of strategy functions to use in a game.

    In the local tester, all of the strategies will be used as separate players in the game.
    Results will be printed out in the order of the list.

    In the official grader, only the first element of the list will be used as your strategy. 
    """
    strategies = [strat1, random_strategy, random_strategy, random_strategy, random_strategy]

    return strategies

def strat1(pid, board):
    # If no rounds yet we select random coords
    if not history:
        random_coords = []
        for i in range(3):
            x = random.randint(0, 9)
            y = random.randint(0, 9)
            random_coords.append((x,y))
        history.append(board)
        return random_coords

    
    history.append(board)
    # add to history
    prediction = set()

    # Update placed data to collect the coords of the placed settlement for all ids (other than ours)
    for x in range(10):
        for y in range(10):
            for id in range(5):
                if history[-1][x][y][id] > 0:
                    placed_data[id].append((x, y))
    
    differences = []
    # Creating a list of average distance between the settlement placements
    for lst in placed_data:
        difference = [(lst[i+1][0]-lst[i][0], lst[i+1][1]-lst[i][1]) for i in range(len(lst)-1)]
        magnitudes = [math.sqrt(diff[0]**2 + diff[1]**2) for diff in difference]
        differences.append(round(sum(magnitudes) / len(magnitudes) if len(magnitudes) > 0 else 0))
    
    # Adding 3 random possible coordinates for each id based on the average difference (other than ours)
    for i in range(5):
        try:
            x, y = placed_data[i][-1]
        except:
            pass
        diff = differences[i]
        options = [(x+diff, y), (x-diff, y), (x, y+diff), (x, y-diff)]
        valid_options = [(a,b) for a,b in options if 0<=a<10 and 0<=b<10]
        if len(valid_options) >= 3 and id != pid:
            prediction.update(valid_options)
        else:
            if id == pid:
                continue
            prediction.update([(x, y) * 3])
    
    choices = []
    # Choices list contains (x, y, score) where score is determined by how many settlements its surrounded by and has
    for x in range(10):
        for y in range(10):
            score = 0
            if (x,y) in prediction:
                score += 1
            
            # Current settlee
            for settlement in board[x][y]:
                score += settlement
            
            # Surroundings
            if x != 9:
                for settlement in board[x+1][y]:
                    score += settlement
            if x != 0:
                for settlement in board[x-1][y]:
                    score += settlement
            if y != 9:
                for settlement in board[x][y+1]:
                    score += settlement
            if y != 0:
                for settlement in board[x][y - 1]:
                    score += settlement
            
            choices.append((x, y, score))
    
    sorted_coords = sorted(choices, key=lambda x: x[2])
    top_three = [(x, y) for x, y, _ in sorted_coords[:3]]
    return top_three

def strat2(pid, board):
    added_coords = []
    choices = []
    for x in range(10):
        for y in range(10):
            if board[x][y][pid] > 0:
                added_coords.append((x,y))
            population = 0
            for id in board[x][y]:
                population += id
            if x != 9:
                for id in board[x+1][y]:
                    population += id
            if x != 0:
                for id in board[x-1][y]:
                    population += id
            if y != 9:
                for id in board[x][y+1]:
                    population += id
            if y != 0:
                for id in board[x][y - 1]:
                    population += id
            
            choices.append((x,y, population))
    

    sorted_choices = sorted(choices, key=lambda t: t[2])

    # Initialize list of selected coordinates
    selected_coords = []

    # Iterate over sorted tuples
    for t in sorted_choices:
        # Check if tuple's coordinates are edge adjacent to any previously selected coordinates
        adjacent = False
        for c in selected_coords:
            if abs(c[0] - t[0]) <= 1 and abs(c[1] - t[1]) <= 1:
                adjacent = True
                break

        # If coordinates are not edge adjacent, add them to selected coordinates list
        if not adjacent and (t[0], t[1]) not in added_coords:
            selected_coords.append((t[0], t[1]))

        # Stop iterating once we have selected three coordinates
        if len(selected_coords) == 3:
            break

    # Return selected coordinates
    return selected_coords

def strat3(pid, board):
    # If no rounds yet we select random coords
    if not history:
        random_coords = []
        for i in range(3):
            x = random.randint(0, 9)
            y = random.randint(0, 9)
            random_coords.append((x,y))
        history.append(board)
        return random_coords    
    history.append(board)

    choices = []
    # Choices list contains (x, y, score) where score is determined by how many settlements its surrounded by and has
    for x in range(10):
        for y in range(10):
            score = 0
            # Current settlee
            for settlement in board[x][y]:
                score += settlement
            
            # Surroundings
            if x != 9:
                for settlement in board[x+1][y]:
                    score += settlement
            if x != 0:
                for settlement in board[x-1][y]:
                    score += settlement
            if y != 9:
                for settlement in board[x][y+1]:
                    score += settlement
            if y != 0:
                for settlement in board[x][y - 1]:
                    score += settlement
            
            choices.append((x, y, score))


    sorted_tuples = sorted(choices, key=lambda x: x[2])

    # Loop through the sorted points and select the first three that meet the criteria
    p1 = (sorted_tuples[0][0], sorted_tuples[0][1])
    p2 = ()
    p3 = ()
    for point in sorted_tuples:
        if not p2:
            distance = ((p1[0] - point[0])**2 + (p1[1] - point[1])**2)**0.5
            if distance >= 2:
                p2 = (point[0], point[1])

        if p2 and not p3:
            distance = ((p2[0] - point[0])**2 + (p2[1] - point[1])**2)**0.5
            if distance >= 2:
                p3 = (point[0], point[1])
    
    return [p1, p2, p3]

        
    

    

    




                    



