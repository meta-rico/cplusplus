/* C++, portfolio courses, fibonacci */

// Output the fibonacci seqeunce.

#include <iostream>

void fibonacci()
{
	std::cout << "Fibonacci sequence: ";
	
	int a, b, c;
	
	a = 0;
	
	std::cout << a << ", ";
	
	b = 1;
	
	std::cout << b << ", ";
	
	c = a + b;   // 1 = 0 + 1
	
	std::cout << c << ", ";
	
	a = c;   // 0 = 1
	
	c = a + b;   // 2 = 1 + 1
	
	std::cout << c;
	
	if(c >= 2)
	{
	    for(int i = 3; i < 11; i++)
	    {
	        a = b;   // 1 = 1
	
	        b = c;   // 1 = 2
	
	        c = a + b;   // 3 = 1 + 2
			
			if(i != 11) std::cout << ", ";
	
	        std::cout << c;
	    }
	}
}

int main()
{
	fibonacci();
	
	system("pause > nul");
	
	return 0;
}