#include <iostream>
#include <string>

template<typename T>
void print_mydata(T output)
{
  std::cout << "Output value: " << output << std::endl;
}

int main(int argc, char const *argv[])
{
  int i = 5;
  std::string s("Hello World");

  print_mydata(i);
  print_mydata<double>(2.1);
  print_mydata(s);
  print_mydata<bool>(true);

  return 0;
}