#include <iostream>
//7

int main()
{
	int a;
	std::cout << "a = " << std::endl;
	std::cin >> a;
	int d;
	d = a / 10;
	int e;
	e = a % 10;
	std::cout << d + e << std::endl;
	std::cout << d * e << std::endl;

	system("pause");
	return 0;
}