// PolybiusSquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

#include "AlphabetChanger.h"

int main()
{
    AlphabetChanger Test;

    std::array<char, 26> Alphabet = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};

    std::array<std::array<char, 5>, 5> PolybiusSquare = Test.ShuffleAlpabet(Alphabet);
	for (int j = 0; j < 6; j++)
	{
		if(j == 0)
		{
			std::cout << " |   | ";
		}
		else
		{
			std::cout << " | " << j << " | ";
		}
		for (int z = 0; z < 6; z++)
		{
			if(j == 0 && z != 5)
			{
				std::cout << " | " << z + 1 << " | ";
			}
			if(j > 0 && z > 0)
			{
				std::cout << " | " << PolybiusSquare[j - 1][z - 1] << " | ";
			}
		}
		std::cout << std::endl << std::endl;
	}
	std::string toEncrypt;
	std::cout << "Podaj tekst do zaszyfrowania: ";
	std::cin >>toEncrypt;
	std::string Encrypted;
    for (auto Letter : toEncrypt)
    {
		for (int j = 0; j < 5; j++)
		{
			for (int z = 0; z < 5; z++)
			{
				if(PolybiusSquare[j][z] == Letter)
				{
					Encrypted.append(std::to_string(j + 1 )).append(std::to_string(z + 1)).append(" ");
				}
			}
		}
    }
	std::cout << Encrypted;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
