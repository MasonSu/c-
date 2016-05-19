#include <initializer_list>
#include <iostream>

int sum(std::initializer_list<int> li)
{
	int sum = 0;
	for(auto beg = li.begin(); beg != li.end(); ++beg)
		sum += *beg;
	return sum;
}
int main()
{
	std::initializer_list<int> li{1, 2, 3, 4, 5, 6};
	std::cout << "Sum is " << sum(li) << std::endl;

	return 0;
}