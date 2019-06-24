#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char s[50];
	int i, n;

	setlocale(LC_CTYPE, "rus");
	printf(" ? ¬веди текст: "); 
	gets(s);
    
    for ( i = 0 ; i < strlen (s) ; ++i )
	{
	   if( s[i]=='A') s[i] = tolower(s[i]);
	   if( s[i]=='E') s[i] = tolower(s[i]);
	   if( s[i]=='I') s[i] = tolower(s[i]);
	   if( s[i]=='O') s[i] = tolower(s[i]);
	   if( s[i]=='U') s[i] = tolower(s[i]);
	}
    
	printf (" x –езультат: %s \n\n", s);
    system("pause");

    return 0;
}