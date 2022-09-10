#Grains

def square(square):
    if not 64 >= square > 0:
        raise ValueError("square must be between 1 and 64")
    else:
        return 2 ** (square - 1)
def total(square=64):
    if not 64 >= square > 0:
        raise ValueError
    else:
        return sum((2 ** (i - 1) for i in range(1, square + 1)))