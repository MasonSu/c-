#include <stdexcept>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	int a, b;

	while(std::cin >> a >> b){
		try{
			if(b == 0)
				throw std::runtime_error("Divisor can't be zero!");
			cout << a / b << endl;
		}catch(std::runtime_error err){
			cout << err.what();
			cout << "\nTry again? Enter y or n" << endl;
			char c;
			std::cin >> c;
			if(!std::cin || c == 'n')
				break;
		}
	}
	
	return 0;
}