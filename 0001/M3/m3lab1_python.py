from dataclasses import dataclass

@dataclass
class InventoryItem:
    """Class for keeping track of an item in inventory."""
    name: str
    unit_price: float
    quantity_on_hand: int = 0

    def total_cost(self) -> float:
        return self.unit_price * self.quantity_on_hand

    def __str__(self) -> str:
        return self.name + "/" + str(self.unit_price) + "/" + str(self.quantity_on_hand)

def main():
    bread = InventoryItem("bread", 2.99, 1)
    print(bread)
    print("$",bread.total_cost())

    store_bag = []
    for item in ["bread", "sword", "backpack"]:
        my_item = InventoryItem(item, 1.99, 1)
        store_bag.append(my_item)

    #print(store_bag)
    for thing in store_bag:
        print("You have:", thing)


main()