#include <new>
#include <iostream>
#include <vector>

using std::vector;

vector<int> *make_ptr(void)
{
	return new vector<int>;
}

void read(vector<int> *p)
{
	int num;
	while(std::cin >> num)
		p->push_back(num);
}

void print(vector<int> *p)
{
	for(auto c : *p)
		std::cout << c << " ";
	std::cout << std::endl;
	delete p;
}

int main()
{
	auto p = make_ptr();
	read(p);
	print(p);

	return 0;
}