#include <iostream>
//11

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	std::cout << (a % 10) + ((a % 100) / 10) + (a / 100) << std::endl;
	std::cout << (a % 10) * ((a % 100) / 10) * (a / 100) << std::endl;
	system("pause");
	return 0;
}