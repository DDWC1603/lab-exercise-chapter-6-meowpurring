//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
int main()
{
	char strPassword[80];
	cout<<"Enter password: ";
	gets(strPassword);
	
	if(strcmp(strPassword, "Password"))
	{
		cout<<"Invalid password.\n";
	}
	else
	cout<<"Logged on.\n";
	return 0;
}
