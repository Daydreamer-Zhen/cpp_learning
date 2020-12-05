#include <iostream>
#include <vector>

void some_function()
{
  double d = 2.2;
  int i = 7;
  d = d + i;
  i = d * i;
  std::cout << "i=" << i << "\n";
  std::cout << "d=" << d << "\n";
}

void init_num()
{
  double d1 = 2.3;
  double d2{2.3};
  std::vector<int> v{1, 2, 3, 4, 5, 6};
  for (const int &word : v)
    std::cout << word;
}

void init_num_using_list()
{
  //note
  // int i1 = 7.2;
  // int i2{7.2};
  // int i3 = {7.2};
  //
  // std::cout << "i1=" << i1;
  // std::cout << "i2=" << i2;
  // std::cout << "i3=" << i3;
}

void var_def()
{
  auto b = true;
  auto ch = 'x';
  auto i = 123;
  auto d = 1.2;
  std::cout << b << ch << i << d << "\n";
  // auto z = sqrt(y);
}

int main()
{
  // some_function();
  // init_num();
  // init_num_using_list();
  var_def();
}