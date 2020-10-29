
def areEqual(arr1, arr2):
    n = len(arr1)
    m = len(arr2)
    # If lengths of array are not
    # equal means array are not equal
    if (n != m):
        return False

    # Sort both arrays
    arr1.sort()
    arr2.sort()

    # Linearly compare elements
    for i in range(0, n - 1):
        if (arr1[i] != arr2[i]):
            return False

    # If all elements were same.
    return True


arr1 = [3, 5, 2, 5, 2];
arr2 = [2, 3, 5, 5, 2];


if areEqual(arr1, arr2):
    print('Yes')
else:
    print('No')


# https://www.geeksforgeeks.org/check-if-two-arrays-are-equal-or-not/