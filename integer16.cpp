#include <iostream>
//17

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	int b;
	b = (a % 1000) / 100;
	std::cout << b << std::endl;
	system("pause");
	return 0;
}