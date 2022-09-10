#Inventory Management

from collections import Counter
def create_inventory(items: list[str]) -> dict[str, int]:
    '''
 
    :param items: list - list of items to create an inventory from.
    :return:  dict - the inventory dictionary.
    '''
    return Counter(items)
def add_items(inventory: dict[str, int], items: list[str]) -> dict[str, int]:
    '''
 
    :param inventory: dict - dictionary of existing inventory.
    :param items: list - list of items to update the inventory with.
    :return:  dict - the inventory dictionary update with the new items.
    '''
    return Counter(items) + Counter(inventory)
def decrement_items(inventory: dict[str, int], items: list[str]) -> dict[str, int]:
    '''
 
    :param inventory: dict - inventory dictionary.
    :param items: list - list of items to remove from the inventory.
    :return:  dict - updated inventory dictionary with items decremented.
    '''
    
    return {k: 0 if (n := v - items.count(k)) < 0 else n for k, v in inventory.items()}
def remove_item(inventory: dict[str, int], item: str) -> dict[str, int]:
    '''
    
    :param inventory: dict - inventory dictionary.
    :param items: list - list of items to remove from the inventory.
    :return:  dict - updated inventory dictionary with items removed.
    '''
    if item in inventory:
        del inventory[item]
    return inventory
    
def list_inventory(inventory: dict[str, int]) -> tuple[str, int]:
    '''
 
    :param inventory: dict - an inventory dictionary.
    :return: list of tuples - list of key, value pairs from the inventory dictionary.
    '''
    return [(k, v) for k, v in inventory.items() if v > 0]
