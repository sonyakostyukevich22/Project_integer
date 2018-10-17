#include <iostream>
//14

int main()
{
	int abc;
	std::cout << "abc = " << std::endl;
	std::cin >> abc;
	int a;
	int b;
	int c;
	a = abc / 100;
	b = (abc % 100) / 10;
	c = abc % 10;
	int cab;
	cab = c * 100 + a * 10 + b;
	std::cout << cab << std::endl;
	system("pause");
	return 0;
}