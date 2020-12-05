#include <iostream>

void copy_fct()
{
  int v1[10]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  int v2[10];

  for (auto i = 0; i != 10; i++)
  {
    std::cout << "v1=" << v1[i] << "\n";
    std::cout << "v2=" << v2[i] << "\n";
    std::cout << "\n";
  }

  for (auto i = 0; i != 10; i++)
  {
    v2[i] = v1[i];
    std::cout << "new v2=" << v2[i] << "\n";
  }
}
// simple for range
void print()
{
  int v[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

  for (auto x : v) // 遍历V当中的每个X
    std::cout << x << "\n";

  for (auto x : {10, 21, 32, 43, 54, 65})
    std::cout << x << "\n";
}

void increment()
{
  int v[]{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  for (auto &x : v)
  {
    std::cout << &x << "\n";
    ++x;
  }
}

int main()
{
  // copy_fct();
  // print();
  increment();
}