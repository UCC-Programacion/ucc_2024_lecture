
#include <iostream>
#include <string>
#include <vector>

class Item {
private:
  std::string m_data;

public:
  Item(std::string data)
    : m_data { data }
  {
  }

  std::string get_data()
  {
    return m_data;
  }

  void set_data(std::string data)
  {
    m_data = data;
  }
};

class Controller {
private:
  std::vector<Item> m_items;

public:
  void add_item(Item item)
  {
    m_items.push_back(item);
  }

  Item get_item(size_t index)
  {
    return m_items.at(index);
  }

  std::vector<Item> get_items()
  {
    return m_items;
  }
};

int main()
{

  // Como actualizo el item 1?

  // intento #1
  {
    std::cout << "Intento #1\n";
    Controller controller;
    controller.add_item(Item { "item 1" });
    Item item = controller.get_item(0);
    item.set_data("item 1 actualizado");

    auto items = controller.get_items();
    for (size_t i = 0; i < items.size(); i++) {
      std::cout << i << " -> " << items.at(i).get_data() << "\n";
    }
  }

  // Intento #2
  // {
  //   std::cout << "Intento #2\n";
  //   Controller controller;
  //   controller.add_item(Item { "item 1" });
  //   controller.update_item_data(0, "item 1 actualizado");

  //   auto items = controller.get_items();
  //   for (size_t i = 0; i < items.size(); i++) {
  //     std::cout << i << " -> " << items.at(i).get_data() << "\n";
  //   }
  // }

  // // Intento #3
  // {
  //   std::cout << "Intento #3\n";
  //   Controller controller;
  //   controller.add_item(Item { "item 1" });
  //   controller.update_item_data_v2(0, "item 1 actualizado");

  //   auto items = controller.get_items();
  //   for (size_t i = 0; i < items.size(); i++) {
  //     std::cout << i << " -> " << items.at(i).get_data() << "\n";
  //   }
  // }

  // // Intento #4
  // {
  //   std::cout << "Intento #4\n";
  //   Controller controller;
  //   controller.add_item(Item { "item 1" });
  //   controller.update_item_data_v3(0, "item 1 actualizado");

  //   auto items = controller.get_items();
  //   for (size_t i = 0; i < items.size(); i++) {
  //     std::cout << i << " -> " << items.at(i).get_data() << "\n";
  //   }
  // }

  return 0;
}

// void update_item_data(size_t index, std::string data)
// {
//   Item item = m_items.at(index);
//   item.set_data(data);
// }

// void update_item_data_v2(size_t index, std::string data)
// {
//   m_items.at(index).set_data(data);
// }

// void update_item_data_v3(size_t index, std::string data)
// {
//   Item& item = m_items.at(index);
//   item.set_data(data);
// }