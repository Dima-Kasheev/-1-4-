#include "stdafx.h"
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()
{
	char str[50];
	int i, n;
	int aChar=0,eChar=0,
		iChar=0,oChar=0,
		uChar=0;

	setlocale(LC_CTYPE, "rus");
	printf("����� �����: "); 
	gets(str);
    n = strlen(str);

	Sort(str,aChar,eChar,iChar,oChar,uChar,i,n);

	cout << "[+] ��������� ��������: " << endl;
	cout << " | �������� a = " << aChar <<endl;
	cout << " | �������� e = " << eChar <<endl;
	cout << " | �������� i = " << iChar <<endl;
	cout << " | �������� o = " << oChar <<endl;
	cout << " | �������� u = " << uChar <<endl;
    system("pause");

    return 0;
}

void Sort(char str[], int aChar, int eChar, int iChar, int oChar, int uChar,int i,int n)
{
	for( i=0; i<=n; i++ )
	{
		if( str[i]=='a') aChar++;
		if( str[i]=='e') eChar++;
		if( str[i]=='i') iChar++;
		if( str[i]=='o') oChar++;
		if( str[i]=='u') uChar++;
	}
}