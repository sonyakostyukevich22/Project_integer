#include <iostream>
//12

int main()
{
	int abc;//123
	std::cout << "abc = " << std::endl;
	std::cin >> abc;
	int a;//1
	int b;//2
	int c;//3
	int cba;//321
	a = abc / 100;
	b = (abc % 100) / 10;
	c = abc % 10;
	cba = c * 100 + b * 10 + a;
	std::cout << cba << std::endl;

	system("pause");
	return 0;
}