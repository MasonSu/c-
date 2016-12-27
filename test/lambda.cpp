#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[])
{
  int arr[] = {1, 2, 3, 4, 5};
  int mul = 5;
  int length = sizeof(arr) / sizeof(int);

  std::for_each(arr, arr + length, [&](int x) {
    std::cout << x << " ";
    /* Can modify the mul inside this lambda function because
     * all outer scope elements has write access here.
     */
    mul = 3;
  });
  std::cout << std::endl;

  std::for_each(arr, arr + length, [ = ](int &x) {
    x *= mul;
    /* Can not modify the mul inside this lambda function because
     * all outer scope elements has read only access here
     */
    // mul = 9;
  });

  std::for_each(arr, arr + length, [](int x) {
    std::cout << x << " ";
    /* No access to mul inside this lambda function because
     * all outer scope elements are not visible here
     */
    //std::cout << mul << " ";
  });
  std::cout << std::endl;

  return 0;
}