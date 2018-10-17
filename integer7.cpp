#include <iostream>
//8

int main()
{
	int ab;
	std::cout << "ab = " << std::endl;
	std::cin >> ab;
	int a;
	int b;
	a = ab / 10;
	b = ab % 10;
	int ba;
	ba = b * 10 + a;
	std::cout << ba << std::endl;

	system("pause");
	return 0;
}