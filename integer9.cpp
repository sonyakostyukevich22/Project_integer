#include <iostream>
//10

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	std::cout << a % 10 << std::endl;
	std::cout << (a % 100) / 10 << std::endl;
	system("pause");
	return 0;
}