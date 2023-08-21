import numpy as np
import matplotlib.pyplot as plt

def sigmoid(n, steep=1.0 ):
    return (1 + np.exp(-steep * n))

def feature_scaling(x, min_val, max_val):
    return (x - min_val) / (max_val - min_val)

def sigmoid_normalization(x, min_value, max_value, steepness=1.0):
    normalized_x = feature_scaling(x, min_value, max_value)
    scaled_output = 100 / sigmoid(normalized_x, steepness)
    return scaled_output 

# Define min and max values
MIN = 15
MAX = 15272
STEEPNESS = 4.5
sig_val = sigmoid_normalization(4555,MIN, MAX, STEEPNESS)

print(feature_scaling(sig_val, 50, 100)*100)


# UNCOMMENT TO PLOT GRAPH

# Generate a range of x values
# x_values = range(MIN, MAX)
# y_values = []
# for i in x_values:
#     y_values.append(feature_scaling(sigmoid_normalization(i, MIN, MAX, STEEPNESS), 50, 100)*100)

# # Create the plot
# plt.figure(figsize=(10, 6))
# plt.plot(x_values, y_values, label='potentia normalization function')
# plt.xlabel('x')
# plt.ylabel('Scaled Output')
# plt.title('potential normalization Function')
# plt.legend()
# plt.grid(True)
# plt.show()
