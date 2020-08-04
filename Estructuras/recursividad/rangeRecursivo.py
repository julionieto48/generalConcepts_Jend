def rangeRecursivo(start, stop, step):

    if stop == start :
        return []
    else :
        return rangeRecursivo(start, stop - step , step ) + [stop - step]


def recursiveRange( num ):
    if num == 0:
        return []
    else :
        return recursiveRange(num - 1 ) + [num - 1]


def main():
    a = recursiveRange(5) ; print(a)
    b = rangeRecursivo(0, 5, 1) ; print(b)



if __name__ == '__main__':
    main()
