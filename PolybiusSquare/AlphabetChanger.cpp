#include "AlphabetChanger.h"

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

void AlphabetChanger::PrintPolybious(std::array<std::array<char, 5>, 5> inSquare)
{
	for (int j = 0; j < 6; j++)
	{
		if (j == 0)
		{
			std::cout << " | X | ";
		}
		else
		{
			std::cout << " | " << j << " | ";
		}
		for (int z = 0; z < 6; z++)
		{
			if (j == 0 && z != 5)
			{
				std::cout << " | " << z + 1 << " | ";
			}
			if (j > 0 && z > 0)
			{
				std::cout << " | " << inSquare[j - 1][z - 1] << " | ";
			}
		}
		std::cout << std::endl << std::endl;
	}
}

std::string AlphabetChanger::EncryptMessage(std::string inString, std::array<std::array<char, 5>, 5> inSquare)
{
	std::string Holder;
	for (auto Letter : inString)
	{
		for (int j = 0; j < 5; j++)
		{
			for (int z = 0; z < 5; z++)
			{
				if (inSquare[j][z] == Letter)
				{
					Holder.append(std::to_string(j + 1)).append(std::to_string(z + 1)).append(" ");
				}
			}
		}
	}
	return Holder;
}
