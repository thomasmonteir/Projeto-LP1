#include <stdio.h>
#include <time.h>
#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    time_t t;
    size_t tam;
    clock_t c;
    struct tm * infoTempo;
    int a;
    
    char buffer[3];
    
    time(&t);
    infoTempo = localtime(&t);
    
   	strftime(buffer,3,"%m",infoTempo);
   	
   	cout << infoTempo->tm_mday << "/" << infoTempo->tm_mon<< "/" << infoTempo->tm_year;
   	
	
    //cout << buffer;
    
    return 0;
}
