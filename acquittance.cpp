/* C++, A list of purchased meat. */

#include <iostream>
#include <string>

void printAcquittance();

struct meat
{
	// Meatsort
	
	std::string name;
	
	// Meatprice
	
	double price;
	
	// Meatweight
	
	double weight;
	
};

int main()
{
	printAcquittance();
	
	system("pause > nul");
	
	return 0;
}

void printAcquittance()
{
	// 1. beef, 2. chicken, 3. pork, 4. lamb, 5. calf, 6. turkey
	
	// Meatsort
	
	meat myMeat1, myMeat2, myMeat3, myMeat4, myMeat5, myMeat6;
	
	// Meatprice
	
	meat myPrice1, myPrice2, myPrice3, myPrice4, myPrice5, myPrice6;
	
	// Meatweight in kgs
	
	meat myWeight1, myWeight2, myWeight3, myWeight4, myWeight5, myWeight6;
	
	// beef
	
	myMeat1.name = "beef";
	
	myPrice1.price = 12.99;
	
	myWeight1.weight = .324;
	
	// chicken
	
	myMeat2.name = "chicken";
	
	myPrice2.price = 4.99;
	
	myWeight2.weight = 1.00;
	
	// pork
	
	myMeat3.name = "pork";
	
	myPrice3.price = 9.99;
	
	myWeight3.weight = 1.00;
	
	// lamb
	
	myMeat4.name = "lamb";
	
	myPrice4.price = 13.99;
	
	myWeight4.weight = .518;
	
	// calf
	
	myMeat5.name = "calf";
	
	myPrice5.price = 4.49;
	
	myWeight5.weight = .240;
	
	// turkey
	
	myMeat6.name = "turkey";
	
	myPrice6.price = 3.49;
	
	myWeight6.weight = .500;
	
	std::cout << "Your purchased meat: " << std::endl << std::endl;
	
	std::cout << "  sort" << "\t\tprice" << "\t\tweight" << std::endl << std::endl;
	
	// beef
	
	std::cout << "- " << myMeat1.name << " \t\t" << myPrice1.price << " Euro" << " \t " << myWeight1.weight << " kgs" << std::endl;
	
	// chicken
	
	std::cout << "- " << myMeat2.name << " \t " << myPrice2.price << " Euro" << " \t " << myWeight2.weight << "     kgs" << std::endl;
	
	// pork
	
	std::cout << "- " << myMeat3.name << " \t\t " << myPrice3.price << " Euro" << " \t " << myWeight3.weight << "     kgs" << std::endl;
	
	// lamb
	
	std::cout << "- " << myMeat4.name << " \t\t" << myPrice4.price << " Euro" << " \t " << myWeight4.weight << " kgs" << std::endl;
	
	// calf
	
	std::cout << "- " << myMeat5.name << " \t\t " << myPrice5.price << " Euro" << " \t " << myWeight5.weight << "0 kgs" << std::endl;
	
	// turkey
	
	std::cout << "- " << myMeat6.name << " \t " << myPrice6.price << " Euro" << " \t " << myWeight6.weight << "00 kgs" << std::endl;
}