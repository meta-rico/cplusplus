/* C++, class, leetcode, problem, easy, 1. Two Sum */

#include <iostream>
#include <vector>

class Solution
{
	public:
	
	std::vector<int> vec;
	
};

void vector()
{
	Solution solu;
	
	solu.vec = {2, 7, 11, 15};
	
	std::cout << " " << solu.vec[0] + solu.vec[1] << '\n';
	
	std::cout << " " << solu.vec[2] - solu.vec[0] << '\n';
	
	for(std::vector<int>::iterator it = solu.vec.begin(); it != solu.vec.end(); ++it)
	{
		std::cout << " " << *it;
	}
}

int main()
{
	vector();
	
	system("pause > nul");
	
	return 0;
}