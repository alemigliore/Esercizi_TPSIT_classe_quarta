#Ghost Gobble Arcade Game

def eat_ghost(power_pellet_active, touching_ghost):
    '''
 
    :param power_pellet_active: bool - does the player have an active power pellet?
    :param touching_ghost:  bool - is the player touching a ghost?
    :return: bool
    '''
    if power_pellet_active and touching_ghost:
        return True
    else:
        return False
def score(touching_power_pellet, touching_dot):
    '''
 
    :param touching_power_pellet: bool - does the player have an active power pellet?
    :param touching_dot:  bool - is the player touching a dot?
    :return: bool
    '''
    if touching_power_pellet or touching_dot:
        return True
    else:
        return False
def lose(power_pellet_active, touching_ghost):
    '''
 
    :param power_pellet_active: bool - does the player have an active power pellet?
    :param touching_ghost: bool - is the player touching a ghost?
    :return: bool
    '''
    if (not power_pellet_active) and touching_ghost:
        return True
    else:
        return False
def win(has_eaten_all_dots, power_pellet_active, touching_ghost):
    '''
 
    :param has_eaten_all_dots: bool - has the player "eaten" all the dots?
    :param power_pellet_active: bool - does the player have an active power pellet?
    :param touching_ghost:  bool - is the player touching a ghost?
    :return: bool
    '''
    if has_eaten_all_dots and not lose(power_pellet_active, touching_ghost):
        return True
    else:
        return False
if __name__ == '__main__':
    print(score(False, False))
    print(score(False, True))
    print(score(True, False))
    print(score(True, True))