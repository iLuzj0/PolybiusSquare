#include "AlphabetChanger.h"

#include <algorithm>
#include <ctime>
#include <iostream>
struct RNG {
	int operator() (int n) {
		return std::rand() / (1.0 + RAND_MAX) * n;
	}
};
std::array<std::array<char, 5>, 5> AlphabetChanger::ShuffleAlpabet(std::array<char, 26> inAlphabet)
{
	int i = 97;
	for (auto& Letter : inAlphabet)
	{
		Letter = i;
		i ++;
	}
	srand(time(NULL));
	std::random_shuffle(inAlphabet.begin(), inAlphabet.end());

	std::array<std::array<char, 5>, 5> asd = {{{0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0},{0, 0, 0, 0, 0},{0, 0, 0, 0, 0}}};

	for(int j = 0; j < 5; j++)
	{
		for (int z = 0; z < 5; z++)
		{
			asd[j][z] = inAlphabet[z + (j * 5)];
		}
	}

	return asd;
}
