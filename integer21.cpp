#include <iostream>
//22

int main()
{
	int N;
	std::cout << "N = " << std::endl;
	std::cin >> N;
	int sh;
	sh = N % 3600;
	std::cout << sh << std::endl;
	system("pause");
	return 0;
}