"""
Edit this file! This is the file you will submit.
"""
import random
import math

# Implement me!
# 2 example strategies to use in your tournament.
def gambler(wallet, history):
    return random.randint(0, wallet)

def villain(wallet, history):
    return max(wallet - 1, 0)

def get_strategies():
    """
    Returns a list of strategy functions to use in a tournament.

    In the local tester, all of the strategies will be used as separate bidders in the tournament.
    Note that strategies are tracked by their function name for readability in the results, so 
    adding the same function multiple times will not simulate multiple bidders using the same strategy.

    In the official grader, only the first element of the list will be used as your strategy. 
    """
    strategies = [strat, gambler, villain]

    return strategies

def strat(wallet: int, history: list):
    opp_wallet = 100
    # take the hit on the first one
    if not history:
        return 0    

    # Keep track of what values the opponent lost with 
    losses = {}

    for round in history:
        bid = round[0]
        opp_wallet -= bid
        result = round[1]

        if bid not in losses:
            losses[bid] = 0
        
        # Update the values
        if not result:
            losses[bid] += 1
        else:
            losses[bid] -= 1

    # Sort the values so the best one is at the top    
    max_losses = sorted([k for k, v in losses.items() if k < wallet], key=lambda k: losses[k])

    # If we have money for none return 30%
    bid = None
    if not max_losses:
            bid =  opp_wallet * 0.75
    # Else return the best one
    else:
        if opp_wallet < max_losses[0] :
            if wallet > opp_wallet:
                bid =  opp_wallet + 1
            else:
                bid =  int(wallet * 0.3)
        else:
            if wallet > max_losses[0]:
                bid =  max_losses[0] + 1
            else:
                bid =  int(0.4 * wallet)

    if bid > wallet:
        return random.randint(0, wallet)
    else:
        return int(bid)

def strat2(wallet, history):
    if not history:
        return 0
    
    opp_wallet = 100
    for bid, result in history:
        opp_wallet -= result

    filtered_list = list(filter(lambda x: x[1] == False, history))
    # count the occurrences of each first element in the filtered list
    occurrences = {}
    for tup in filtered_list:
        if tup[0] not in occurrences:
            occurrences[tup[0]] = 0
        occurrences[tup[0]] += 1

    # sort the dictionary by the number of occurrences in descending order
    sorted_occurrences = sorted(occurrences.items(), key=lambda x: x[1], reverse=True)

    # create a list of just the first elements of the sorted tuples

    bid = None
    sorted_faliures = [tup[0] for tup in sorted_occurrences]

    for fail in sorted_faliures:
        if fail < 0.5 * wallet:
            if opp_wallet < fail:
                bid = opp_wallet
                break
            bid = fail
            break
    
    if not bid:
        if opp_wallet * 0.2 > wallet * 0.2:
            bid =  wallet * 0.2
        else:
            bid = opp_wallet * 0.2

    # if bid > wallet:
    #     print('YGTUYGTFVBNKKIUYGV BM<KIUYHGV BN<VMGHCJHJH')
    
    return round(bid)

myh = []
def strat4(wallet, history):
    opp_wallet = 100
    for opp_bid, res in history:
        opp_wallet -= opp_bid
    # set base bid amount as half of wallet value
    base_bid = wallet * 0.4
    
    # determine frequency and amplitude of sin wave based on number of previous bids
    num_bids = len(history)
    freq = math.pi / (num_bids + 1)
    amp = (wallet - base_bid) / 2
    
    # calculate bid using sin wave formula
    bid = int(base_bid + amp * math.sin(num_bids * freq))

    # if bid > opp_wallet:
    #     bid = opp_wallet * 0.9

    if bid < 0 or bid > wallet:
        bid = wallet * 0.25
    
    myh.append(bid)
    print(myh)
    return int(bid)
