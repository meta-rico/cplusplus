#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include <thread>
#include <chrono>

void gotoxy(short a, short b); //simple here we init declare the gotoxy function
   
main()
{
	while(1)
	{
	system("cls");
	
        gotoxy(0, 0);                      //now where we want to simple call c++ gotoxy function 
 
        printf("My First Example Gotoxy in Dev c++");
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
		gotoxy(124, 41);
		
		printf("My First Example Gotoxy in Dev c++");
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
		gotoxy(124, 0);
		
		printf("My First Example Gotoxy in Dev c++");
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
		gotoxy(0, 41);
		
		printf("My First Example Gotoxy in Dev c++");
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
		gotoxy(62, 20);
		
		printf("My First Example Gotoxy in Dev c++");
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
		
		system("cls");
		
		
		
		std::this_thread::sleep_for(std::chrono::seconds(1));
	}
	
   
   system("pause > nul");
 
   return 0;
 
}

void gotoxy(short a, short b)           //Introduction of gotoxy function//                                               
{
   COORD pos ={a,b};
 
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}