#include <iostream>
//23

int main()
{
	int N;
	std::cout << "N = " << std::endl;
	std::cin >> N;
	int mh;
	mh = (N % 3600) / 60;
	std::cout << mh << std::endl;
	system("pause");
	return 0;
}