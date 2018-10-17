#include <iostream>
//13

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
	int bca;
	bca = b * 100 + c * 10 + a;
	std::cout << bca << std::endl;
	system("pause");
	return 0;
}