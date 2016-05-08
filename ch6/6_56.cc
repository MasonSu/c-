#include <iostream>
#include <vector>

typedef int (*pf)(int, int);

inline int add_func(int a, int b) {return a + b;}
inline int sub_func(int a, int b) {return a - b;}
inline int mul_func(int a, int b) {return a * b;}
inline int div_func(int a, int b) {return a / b;}

int main()
{
	
	std::vector<pf> v1 = {add_func, sub_func, mul_func, div_func};
	int m, n;

	std::cout << "Please enter two numbers: ";
	std::cin >> m >> n;

	for(auto c : v1)
		std::cout << c(m, n) << std::endl;

	return 0;
}