/* C++, time */

#include <iostream>
#include <ctime>
#include <stdio.h>
#include <thread>
#include <chrono>
#include <Windows.h>

struct Time
{
	time_t rawtime;
	
	struct tm *timeinfo;
	
	char buffer[80];
	
	void _time()
	{
	    time(&rawtime);
	
	    timeinfo = localtime(&rawtime);
	
	    strftime(buffer, 80, "Now it's %I:%M:%S %p.", timeinfo);
	
	    puts(buffer);
	}
	
	void clearScreen()
	{
		COORD topLeft  = { 0, 0 };
		
        HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
		
        CONSOLE_SCREEN_BUFFER_INFO screen;
		
        DWORD written;

        GetConsoleScreenBufferInfo(console, &screen);
		
        FillConsoleOutputCharacterA(console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
		
        FillConsoleOutputAttribute(console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,screen.dwSize.X * screen.dwSize.Y, topLeft, &written);
		
        SetConsoleCursorPosition(console, topLeft);
	}
};

int main()
{
	Time tm;
	
	while(true)
	{
	    tm._time();
	
	    std::this_thread::sleep_for(std::chrono::milliseconds(100));
		
		tm.clearScreen();
	}
	system("pause > nul");
	
	return 0;
}