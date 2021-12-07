#pragma once
#include <array>

class AlphabetChanger
{
public:
	std::array<std::array<char, 5>, 5> ShuffleAlpabet(std::array<char, 26> inAlphabet);
};

