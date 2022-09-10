#Card Games

"""Functions for tracking poker hands and assorted card tasks.
Python list documentation: https://docs.python.org/3/tutorial/datastructures.html
"""


def get_rounds(number):
    """Create a list containing the current and next two round numbers.
    :param number: int - current round number.
    :return: list - current round and the two that follow.
    """

    list = [number]
    list.append(number + 1)
    list.append(number + 2)
    return list


def concatenate_rounds(rounds_1, rounds_2):
    """Concatenate two lists of round numbers.
    :param rounds_1: list - first rounds played.
    :param rounds_2: list - second set of rounds played.
    :return: list - all rounds played.
    """

    list = rounds_1 + rounds_2
    return list


def list_contains_round(rounds, number):
    """Check if the list of rounds contains the specified number.
    :param rounds: list - rounds played.
    :param number: int - round number.
    :return: bool - was the round played?
    """

    if(number in rounds):
        return True
    else:
        return False


def card_average(hand):
    """Calculate and returns the average card value from the list.
    :param hand: list - cards in hand.
    :return: float - average value of the cards in the hand.
    """

    hand_sum = sum(hand)
    average = hand_sum / len(hand)
    return average


def approx_average_is_average(hand):
    """Return if an average is using (first + last index values ) OR ('middle' card) == calculated average.
    :param hand: list - cards in hand.
    :return: bool - does one of the approximate averages equal the `true average`?
    """

    first_average = card_average([hand[0], hand[-1]])
    second_average = hand[int(len(hand) / 2)]
    real_average = card_average(hand)
    if((first_average == real_average) or (second_average == real_average)):
        return True
    else:
        return False


def average_even_is_average_odd(hand):
    """Return if the (average of even indexed card values) == (average of odd indexed card values).
    :param hand: list - cards in hand.
    :return: bool - are even and odd averages equal?
    """

    list_even = hand[::2]
    sum_even = sum(list_even)
    list_odd = hand[1::2]
    sum_odd = sum(list_odd)
    average_even = sum_even / len(list_even)
    average_odd = sum_odd / len(list_odd)
    if(average_even == average_odd):
        return True
    else:
        return False


def maybe_double_last(hand):
    """Multiply a Jack card value in the last index position by 2.
    :param hand: list - cards in hand.
    :return: list - hand with Jacks (if present) value doubled.
    """

    if(hand[-1] == 11):
        hand[-1] = 22
    return hand