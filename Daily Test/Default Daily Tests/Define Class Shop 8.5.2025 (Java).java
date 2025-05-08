import java.util.*;

class Shop {
    private Map<String, Integer> inventory;

    public Shop() {
        inventory = new HashMap<>();
    }

    public void addItem(String item, int quantity) {
        inventory.put(item, inventory.getOrDefault(item, 0) + quantity);
    }

    public boolean orderItem(String item, int quantity) {
        if (inventory.containsKey(item) && inventory.get(item) >= quantity) {
            inventory.put(item, inventory.get(item) - quantity);
            if (inventory.get(item) == 0) {
                inventory.remove(item);
            }
            return true;
        }
        return false;
    }
}