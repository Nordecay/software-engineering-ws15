#include "helper.hpp"


// create split array of input string 
//from: http://stackoverflow.com/questions/236129/how-to-split-a-string-in-c/236180#236180
std::vector<std::string> split(const std::string& s, const std::string& delim, const bool keep_empty)
{
	std::vector<std::string> result;
	if (delim.empty())
	{
		result.push_back(s);
		return result;
	}
	std::string::const_iterator substart = s.begin(), subend;
	while (true)
	{
		subend = std::search(substart, s.end(), delim.begin(), delim.end());
		std::string temp(substart, subend);
		if (keep_empty || !temp.empty())
		{
			result.push_back(temp);
		}
		if (subend == s.end())
		{
			break;
		}
		substart = subend + delim.size();
	}
	return result;
}