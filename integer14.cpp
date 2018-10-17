#include <iostream>
//15

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
	int dse;
	dse = d * 100 + s * 10 + e;
	std::cout << dse << std::endl;
	system("pause");
	return 0;
}