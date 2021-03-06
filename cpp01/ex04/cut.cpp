#include <iostream>

std::string    cut(std::string to_compare, std::string to_replace, std::string replacement)
{
    int len = to_replace.length();

    for (size_t pos = 0; pos < to_compare.length(); pos++)
	{
		if (to_compare.compare(pos, len, to_replace) == 0)
		{
            to_compare.erase(pos, len);
            to_compare.insert(pos, replacement);
            pos += len + 1;
        }

    }
    return (to_compare);

}
