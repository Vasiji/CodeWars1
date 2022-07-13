#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
#include <vector>

using namespace std;
class DirReduction
{
public:
	static std::vector<std::string> dirReduc(std::vector<std::string>& arr) {
		vector<std::string> res = arr;
		map<string, int> ways;

		for (int i = 0; i < res.size() - 1; )
		{

			if (res[i] == "EAST" && res[i + 1] == "WEST" || res[i + 1] == "EAST" && res[i] == "WEST" || res[i + 1] == "NORTH" && res[i] == "SOUTH" || res[i + 1] == "SOUTH" && res[i] == "NORTH")
			{
				res.erase(res.begin() + i);
				res.erase(res.begin() + i);
				i = 0;
			}
			else
			{
				i++;
			}

		}

		return res;
	};


};

int main() {
	std::vector<std::string> d1 = { "NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH","NORTH","SOUTH","SOUTH","EAST","WEST","NORTH", "NORTH" };
	d1 = DirReduction::dirReduc(d1);
	for_each(d1.begin(), d1.end(), [](string a) {cout << a << " "; });


}