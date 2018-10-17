#include <iostream>
//18

int main()
{
	int ab;
	std::cout << "ab = " << std::endl;
	std::cin >> ab;
	int b;
	b = (ab % 10000) / 1000;
	std::cout << b << std::endl;
	system("pause");
	return 0;
}