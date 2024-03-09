#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

// https://hackingcpp.com/cpp/std/sequence_containers.html
// https://hackingcpp.com/cpp/std/associative_containers.html

class Dummy {
private:
  int m_id;

public:
  Dummy(int id = 0)
    : m_id { id }
  {
  }

  friend std::ostream& operator<<(std::ostream& os, const Dummy& dummy)
  {
    os << "Dummy{" << dummy.m_id << "}";
    return os;
  }
};

int main()
{
  using std::cout;

  Dummy d1 { 1 };
  Dummy d2 { 2 };
  Dummy d3 { 3 };

  std::array<Dummy, 3> array = { d1, d2, d3 };
  cout << "iterate std::array\n";
  for (int i = 0; i < array.size(); ++i) {
    cout << array[i] << "\n";
  }

  std::vector<Dummy> vector;
  vector.push_back(d1);
  vector.push_back(d2);
  vector.push_back(d3);

  cout << "iterate std::vector\n";
  for (int i = 0; i < vector.size(); ++i) {
    cout << vector[i] << "\n";
  }

  std::unordered_map<std::string, Dummy> map;
  map.insert({ "d1", d1 });
  map.insert({ "d2", d2 });
  map.insert({ "d3", d3 });

  cout << "use std::unordered_map\n";
  cout << map["d1"] << "\n";
  cout << map["d2"] << "\n";
  cout << map["d3"] << "\n";

  cout << "iterate std::unordered_map\n";
  for (auto& [key, value] : map) {
    // Do stuff
    cout << "key: " << key << " value: " << value << "\n";
  }

  return 0;
}