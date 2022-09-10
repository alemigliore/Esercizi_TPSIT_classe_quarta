#Sublist

SUBLIST = 1   # denotes that 1st list is a sublist of 2nd
SUPERLIST = 2   # denotes that 1st list is a superlist of 2nd
EQUAL = 3
UNEQUAL = 4
def sublist(lst1, lst2):
    if lst1 == lst2: return EQUAL
    # if same length and not identical, then neither is a subset of other
    L1 = len(lst1)
    L2 = len(lst2)
    if L1 == L2: return UNEQUAL
    if L1 < L2:
        # check whether lst1 is a sublist of lst2
        for i in range(1 + L2 - L1):
            if lst1 == lst2[i: i+L1]: return SUBLIST
    else:
        # check whether lst2 is a sublist of lst1
        for i in range(1 + L1 - L2):
            if lst2 == lst1[i: i+L2]: return SUPERLIST
    return UNEQUAL
