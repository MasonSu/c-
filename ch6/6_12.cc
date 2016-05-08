#include <iostream>

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

int main()
{
	int m, n;

	std::cout << "Please enter two numbers: ";
	std::cin >> m >> n;
	std::cout << "m=" << m << " n=" << n << std::endl;

	swap(m, n);
	std::cout<< "After swap " << "m=" << m << " n=" << n << std::endl;

	return 0;
}