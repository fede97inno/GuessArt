#pragma once
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

class Utils
{
public:
	static const std::vector<std::string> loadlines(const std::string& Path);
};
