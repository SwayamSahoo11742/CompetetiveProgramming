# Function to perform a left circular shift by n positions
def lcirc(n, x):
    return (x << n) | (x >> (5 - n))

# Function to perform a right circular shift by n positions
def rcirc(n, x):
    return (x >> n) | (x << (5 - n)) & 0b11111

# Function to solve the equation and find possible values of x
def find_possible_values():
    possible_values = []
    for x in range(32):
        result = rcirc(2, (0b10101 & rcirc(2, lcirc(3, x))))
        if result == 0b01001:
            possible_values.append(x)
    return possible_values

# Find possible values of x
values = find_possible_values()

# Sort the values and take the four smallest possibilities
sorted_values = sorted(values)[:4]

# Multiply the four smallest values together
result = 1
for value in sorted_values:
    result *= value

# Print the result in decimal
print(result)
