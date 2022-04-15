/* C++, calculator with basic operations(+, -, *, /) */

#include <iostream>

void calculator()
{
	char ch;
	
	double x, y, z;
	
	std::cout << " << CALCULATOR >> " << std::endl;
	
	std::cout << "Choose your arithmetic operation \n (+) Addition, \n (-) Difference, \n (*) Multiplication, \n (/) Division \n Enter: ";
	
	std::cin >> ch;

	    switch(ch)
	    {
		    case ('+'):   // z = x + y
		
		    std::cout << " ADDITION " << std::endl;
		
		    std::cout << "Enter the first number: ";

            std::cin >> x;

            std::cout << "Enter the second number: ";

            std::cin >> y;
		
		    z = x + y;

            std::cout << "The result of addition from " << x << " + " << y << " is " << z;		
		
		    break;
		
		    case ('-'):   // z = x - y
		
		    std::cout << " SUBTRACTION " << std::endl;
		
		    std::cout << "Enter the first number: ";

            std::cin >> x;

            std::cout << "Enter the second number: ";

            std::cin >> y;
		
		    z = x - y;

            std::cout << "The result of addition from " << x << " - " << y << " is " << z;
		
		    break;
		
		    case ('*'):   // z = x * y
		
		    std::cout << " MULTPLICATION " << std::endl;
		
		    std::cout << "Enter the first number: ";

            std::cin >> x;

            std::cout << "Enter the second number: ";

            std::cin >> y;
		
		    z = x * y;

            std::cout << "The result of addition from " << x << " * " << y << " is " << z;
		
		    break;
		
		    case ('/'):
		
		    std::cout << " DIVISION " << std::endl;
		
		    std::cout << "Enter the first number: ";

            std::cin >> x;

            std::cout << "Enter the second number: ";

            std::cin >> y;
		
		    if(y != 0)
		    {
		        z = x / y;

                std::cout << "The result of addition from " << x << " / " << y << " is " << z;
		    }
		    else
		    {
			    std::cout << "The denominator can't be zero(0) !" << std::endl;
			
			    calculator();
		    }
		
		    break;
		
		    default:
		
		    std::cout << "You have entered the wrong character." << std::endl;
		
		    calculator();
		
		    break;
	    }
}

int main()
{
	calculator();
	
	system("pause > nul");
	
	return 0;
}