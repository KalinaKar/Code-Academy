from collections import defaultdict

'''
Created on May 15, 2021

@author: kalina
'''


class InvalidItemType(Exception):
    pass


class OutOfStock(Exception):
    pass


class ItemUnlocked(Exception):
    pass


class Inventory:
    ITEM_AMOUNT = 0
    ITEM_LOCK_STATE = 1
    ITEM_INVALID = 0

    def default_val():
        return 0

    def __init__(self):
        self.__inventory = defaultdict(Inventory.default_val)

    def __change_item_state(self, item_type, state):
        if self.__inventory[item_type] == Inventory.ITEM_INVALID:
            raise InvalidItemType("Item not in inventory")
        else:
            self.__inventory[item_type][Inventory.ITEM_LOCK_STATE] = state

    def lock(self, item_type):
        self.__change_item_state(item_type, True)

    def unlock(self, item_type):
        self.__change_item_state(item_type, False)

    def purchase(self, item_type):
        if self.__inventory[item_type] == Inventory.ITEM_INVALID:
            raise InvalidItemType("Item does not exist")
        elif self.__inventory[item_type][Inventory.ITEM_LOCK_STATE] == False:
            raise ItemUnlocked("Item unlocked")
        elif self.__inventory[item_type][Inventory.ITEM_AMOUNT] < 1:
            raise OutOfStock("Item currently out of stock")
        else:
            self.__inventory[item_type][Inventory.ITEM_AMOUNT] = self.__inventory[item_type][Inventory.ITEM_AMOUNT] - 1
        return self.count_items_left(item_type)

    def add_stock(self, item_type, item_num=1):
        if self.__inventory[item_type] == Inventory.ITEM_INVALID:
            self.__inventory[item_type] = [item_num, False]
        else:
            new_num = item_num + \
                self.__inventory[item_type][Inventory.ITEM_AMOUNT]
            isLocked = self.__inventory[item_type][Inventory.ITEM_LOCK_STATE]
            self.__inventory[item_type] = [new_num, isLocked]

    def count_items_left(self, item_type):
        if self.__inventory[item_type] == Inventory.ITEM_INVALID:
            return 0
        else:
            return self.__inventory[item_type][Inventory.ITEM_AMOUNT]


if __name__ == "__main__":
    item_type = "phone"
    inv = Inventory()
    inv.add_stock(item_type, 2)
    inv.lock(item_type)
    try:
        num_left = inv.purchase(item_type)

    except InvalidItemType:
        print("Sorry, we dont sell {}".format(item_type))
    except OutOfStock:
        print("Sorry, that item is currently out of stock")
    else:
        print("Purchase complete. There are ""{} {}s left".format(inv.count_items_left(item_type), item_type))
    finally:
        inv.unlock(item_type)
