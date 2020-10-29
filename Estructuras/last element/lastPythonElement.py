arr1 = [3, 5, 2, 5, 2]

print len(arr1) , arr1[len(arr1) - 1 ] , arr1[-1]

arr1[-1] = 1 # Set the last element
arr1[-2] = 3 # Set the second to last element

# +---+---+---+---+---+---+
# | P | y | t | h | o | n |
# +---+---+---+---+---+---+
# -6  - 5 - 4  - 3 - 2 - 1
#  0   1    2   3   4   5        list[len(list)-1]

print len(arr1) , arr1[len(arr1) - 1 ] , arr1[0:-2]

arr1 = arr1 + arr1
print arr1

# https://www.geeksforgeeks.org/python-how-to-get-the-last-element-of-list/
# https://www.geeksforgeeks.org/python-get-last-n-elements-from-given-list/

