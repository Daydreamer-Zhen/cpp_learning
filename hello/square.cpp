#include <iostream>

using namespace std;

double square(double x)
{
  return x * x;
}

void print_square(double x)
{
  cout << "the square of " << x << " is " << square(x) << "\n";
  // cout << "the square of "
}

int main()
{
  print_square(123);
}