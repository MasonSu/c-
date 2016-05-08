#include <iostream>

int fact(int val)
{
	int ret = 1;

	while(val > 1)
		ret *= val--;
	
	return ret;
}

int main()
{
	int num;

	std::cout << "Please enter a number: ";
	std::cin >> num;

	std::cout << num << "!" << " is " << fact(num) << std::endl;

	return 0;
}