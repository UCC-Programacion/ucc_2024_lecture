#pragma once

#include <cassert>
#include <iostream>
#include <memory>

namespace cookbook {

class SmartDynamicIntArray {
private:
  std::size_t m_size { 0 };
  std::unique_ptr<int[]> m_data { nullptr };

public:
  SmartDynamicIntArray() = default;

  explicit SmartDynamicIntArray(size_t size)
    : m_size { size }
    , m_data { size > 0 ? std::make_unique<int[]>(size) : nullptr } {};

  SmartDynamicIntArray(const SmartDynamicIntArray& other)
    : SmartDynamicIntArray { other.m_size }
  {
    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, m_data.get());
  }

  SmartDynamicIntArray& operator=(SmartDynamicIntArray other)
  {
    swap(*this, other);
    return *this;
  }

  //  SmartDynamicIntArray& operator=(const SmartDynamicIntArray& other)
  //  {
  //    if (this == &other) {
  //      return *this;
  //    }
  //    m_data = other.m_size > 0 ? std::make_unique<int[]>(other.m_size) : nullptr;
  //    std::copy(other.m_data.get(), other.m_data.get() + other.m_size, m_data.get());
  //    m_size = other.m_size;
  //    return *this;
  //  }

  int& operator[](std::size_t index)
  {
    assert(index < m_size);
    return m_data[index];
  }

  int operator[](std::size_t index) const
  {
    assert(index < m_size);
    return m_data[index];
  }

  std::size_t size() const
  {
    return m_size;
  }

  friend void swap(SmartDynamicIntArray& lhs, SmartDynamicIntArray& rhs)
  {
    using std::swap; // Allows for argument-dependent lookup (ADL) and
                     // therefore makes swapping more efficient.
    swap(lhs.m_size, rhs.m_size);
    swap(lhs.m_data, rhs.m_data);
  }
};

std::ostream& operator<<(std::ostream& os, const SmartDynamicIntArray& smart_dynamic_int_array)
{
  std::cout << "[";
  for (int i = 0; i < smart_dynamic_int_array.size(); ++i) {
    std::cout << " " << smart_dynamic_int_array[i];
  }
  std::cout << " ]";
  return os;
}

}