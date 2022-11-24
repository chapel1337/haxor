#include <iostream>
#include <random>

int getRandom(int minimum, int maximum)
{
	std::mt19937 mt{ std::random_device{}() };
	std::uniform_int_distribution<> random{ minimum, maximum };

	return random(mt);
}

int main()
{
	std::system("color 02");

	while (true)
	{
		std::cout << getRandom(0, 1);
	}
}