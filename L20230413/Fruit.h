#pragma once
#include <string>
class FFruit
{
public:
	FFruit();
	FFruit(std::string NewName);
	virtual ~FFruit();

	std::string GetName() { return Name; }

private:
	std::string Name;
};

