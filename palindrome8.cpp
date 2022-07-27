/* C++, cplusplus, tutorials, C++ language, classes, classes(I) */

#include <iostream>

class Palindrome
{
	public:
	
	    std::string test;
		
	void set_values(std::string);
		
	bool is_palindrome(std::string text)
	{
		for(int i = 0; i < text.length() / 2; i++)
			
		    if(text[i] != text[text.length() - i - 1])
				
			return false;
			
		return true;
	}
};

void Palindrome::set_values(std::string a)
{
	test = a;
	
	if(is_palindrome(test))
		
	    std::cout << test << " -> is a palindrome" << std::endl;
		
	else
		
	    std::cout << test << " -> is NOT a palindrome" << std::endl;
}

int main()
{
	Palindrome palin;
	
	palin.set_values("abccba");
	
	palin.set_values("race star");
	
	palin.set_values("abcdcba");
	
	system("pause > nul");
	
	return 0;
}