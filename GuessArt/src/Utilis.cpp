#include "Utilis.h"

const std::vector<std::string> Utils::loadlines(const std::string& Path)
{
	std::ifstream file("assets/question.txt");
	if (!file.is_open())
	{
		std::cout << "ERROR" << std::endl;
	}

	std::vector<std::string> lines;
	std::string line;

	while (std::getline(file, line))
	{
		lines.push_back(line);
	}

	file.close();

	return lines;
}