#pragma once
#include <array>
#include <string>
#include <algorithm>
#include <ctime>
#include <iostream>


class AlphabetChanger
{
public:
	std::array<std::array<char, 5>, 5> ShuffleAlpabet(std::array<char, 26> inAlphabet);
	void PrintPolybious(std::array<std::array<char, 5>, 5> inSquare);
	std::string EncryptMessage(std::string inString, std::array<std::array<char, 5>, 5> inSquare);
};

