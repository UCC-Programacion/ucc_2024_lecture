#include <iostream>
#include <memory>

class Dummy {
public:
  Dummy() { std::cout << "Dummy constructor" << std::endl; }
  ~Dummy() { std::cout << "Dummy destructor" << std::endl; }

  void method() { std::cout << "Dummy::method()" << std::endl; }
};

int main()
{

  std::cout << "start unique_ptr" << std::endl;
  {
    std::unique_ptr<Dummy> u_ptr = std::make_unique<Dummy>();
    // auto d_ptr = std::make_unique<Dummy>();
    u_ptr->method();

    // The following line will cause a compile error, since unique_ptr
    // cannot be copied or assigned.
    // std::unique_ptr<Dummy> u_ptr2 = u_ptr;
  }
  std::cout << "end unique_ptr" << std::endl;

  std::cout << "start shared_ptr" << std::endl;
  {
    // shared_ptr can be copied and assigned, and will automatically
    // deallocate the object when all copies are destroyed.
    std::shared_ptr<Dummy> s_ptr1 = std::make_shared<Dummy>();
    std::shared_ptr<Dummy> s_ptr2 = s_ptr1;
    s_ptr1->method();
    s_ptr2->method();
  }
  std::cout << "end shared_ptr" << std::endl;

  return 0;
}