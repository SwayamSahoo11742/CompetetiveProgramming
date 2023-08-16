import numpy as np

def sigmoid(n):
    return 1 / (1 + np.exp(-n))
def custom_sigmoid(x, min_value, max_value):
    scaled_x = (x - min_value) / (max_value - min_value)
    sigmoid_like_output = sigmoid(scaled_x)
    sigmoid_min = sigmoid(0)
    sigmoid_max = sigmoid(1)
    scaled_output = (sigmoid_like_output-sigmoid_min)/(sigmoid_max-sigmoid_min)
    return scaled_output * 100

val = custom_sigmoid(789, 15, 15272)
print(val)
