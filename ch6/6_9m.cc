#include <iostream>
#include "6_9.h"

int main()
{
	int num;

	std::cout << "Please enter a num: ";
	std::cin >> num;

	std::cout << num << "!" << " is " << fact(num) << std::endl;

	return 0;
}