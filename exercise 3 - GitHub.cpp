//Student name: Anis Syazwani binti Md. Aini
//MAtrix id: A17DW0731
#include<iostream>
using namespace std;
int main()
{
	int array[10], sum, x;
	cout<<"Enter the 10 numbers: "<<endl;
	for(x=0;x<10;x++)
	{
		cin>>array[x];
		sum=sum+array[x];
	}
	cout<<"The sum of the 10 numbers: "<<sum<<endl;
	cin.get();
	return 0;
}
