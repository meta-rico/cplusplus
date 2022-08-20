/* C++, leetcode, TwoSum */

#include <iostream>
#include <vector>

class Solution
{
	public:
	
	    std::vector<int> vec = {3, 2, 4};
		
	int Vector()
	{
		for(int i = 0; i < 4; i++)
		{
			std::cout << vec[i] << " ";
		}
		
		std::cout << "\n";
		
		return 0;
	}
	
	int Vector1()
	{
		for(auto it = vec.begin(); it != vec.end(); it++)
		{
			std::cout << *it << " ";
		}
		
		std::cout << "\n";
		
		return 0;
	}
	
	int Vector2()
	{
		int num, target = 6, a, b;
		
		int size = vec.size();
		
		for(int a = 0; a < vec.size() -1; a++)
		{
			for(int b = a + 1; b < vec.size(); b++)
			{
		        if(vec[a] + vec[b] == target)
		        {
			        std::cout << "6" << "\n";
		        }
				else
				{
					std::cout << "not 6" << "\n";
				}
			}
		}
		
		return 0;
	}
};


int main()
{
	Solution solu;
	
	solu.Vector();
	
	solu.Vector1();
	
	solu.Vector2();
	
	system("pause> nul");
	
	return 0;
}