#include <iostream>
#include <string>

template<class T>
class Stack{
public:
  Stack();
  void push(T i);
  T pop();
private:
  int top;
  T st[100];
};

template <class T>
Stack<T>::Stack()
{
  top = -1;
}

template <class T>
void Stack<T>::push(T i)
{
  st[++top] = i;
}

template <class T>
T Stack<T>::pop()
{
  return st[top--];
}

int main(int argc, char const *argv[])
{
  Stack<int> int_stack;
  Stack<std::string> str_stack;
  int_stack.push(5);
  str_stack.push("Hello");
  str_stack.push("World");

  std::cout << int_stack.pop() << std::endl;
  std::cout << str_stack.pop() << std::endl;
  std::cout << str_stack.pop() << std::endl;

  return 0;
}