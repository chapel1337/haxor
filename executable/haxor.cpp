#include <iostream>
#include <random>

// written by chapel1337
// made on 11/23/2022
// terrible program, please look at some of my other projects before coming to conclusions

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
