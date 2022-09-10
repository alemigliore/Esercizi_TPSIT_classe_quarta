#Currency Exchange

'''Currency exchange'''
def exchange_money(budget, exchange_rate):
    '''
    :param budget: float - amount of money you are planning to exchange.
    :param exchange_rate: float - unit value of the foreign currency.
    :return: float - estimated value after exchange
    '''
    return budget / exchange_rate
def get_change(budget, exchanging_value):
    '''
    :param budget: float - amount of money you own.
    :param exchanging_value: int - amount of your money you want to exchange now.
    :return: float - currency left after exchange
    '''
    return budget - exchanging_value
def get_value_of_bills(denomination, number_of_bills):
    '''
    :param denomination: int - the value of a bill.
    :param number_of_bills: int - amount of bills you received.
    :return: int - value of bills
    '''
    return denomination * number_of_bills
def get_number_of_bills(budget, denomination):
    '''
    :param budget: float - the amount of money you are planning to exchange.
    :param denomination: int - the value of a single bill.
    :return: int - number of bills after exchanging all of budget
    '''
    return int(budget // denomination)
def exchangeable_value(budget, exchange_rate, spread, denomination):
    '''
    :param budget: float - the amount of your money you are planning to exchange.
    :param exchange_rate: float - the unit value of the foreign currency.
    :param spread: int - percentage that is taken as an exchange fee.
    :param denomination: int - the value of a single bill.
    :return: float - maximum value you can get from exchange
    '''
    actual_rate = exchange_rate * (1 + spread / 100)
    total_value = exchange_money(budget, actual_rate)
    bill_count = get_number_of_bills(total_value, denomination)
    return get_value_of_bills(denomination, bill_count)
def non_exchangeable_value(budget, exchange_rate, spread, denomination):
    '''
    :param budget: float - the amount of your money you are planning to exchange.
    :param exchange_rate: float - the unit value of the foreign currency.
    :param spread: int - percentage that is taken as an exchange fee.
    :param denomination: int - the value of a single bill.
    :return: int - unexchangeable value
    '''
    actual_rate = exchange_rate * (1 + spread / 100)
    total_value = exchange_money(budget, actual_rate)
    exchangeable = exchangeable_value(budget, exchange_rate, spread, denomination)
    return int(total_value) - exchangeable