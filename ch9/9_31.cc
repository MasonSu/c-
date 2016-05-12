#include <iostream>
#include <list>

int main()
{
	std::list<int> v1{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	auto iter = v1.begin();
	while(iter != v1.end()){
		if(*iter % 2){
			iter = v1.insert(iter, *iter);
			++(++iter);
			//iter += 2;
		}else
			iter = v1.erase(iter);
	}

	for(auto c : v1)
		std::cout << c << " ";
	std::cout << std::endl;

	return 0;
}