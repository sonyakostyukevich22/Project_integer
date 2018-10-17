#include <iostream>
//16

int main()
{
	int sde;
	std::cout << "sde = " << std::endl;
	std::cin >> sde;
	int s;
	int d;
	int e;
	s = sde / 100;
	d = (sde % 100) / 10;
	e = sde % 10;
	int sed;
	sed = s * 100 + e * 10 + d;
	std::cout << sed << std::endl;
	system("pause");
	return 0;
}