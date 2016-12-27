#include <iostream>

int main(int argc, char const *argv[])
{
  int *a = new int(2);
  std::cout << *a << std::endl;

  int *b = a;
  delete b;

  std::cout << *a << std::endl;

  return 0;
}