//Student name: Anis Syazwani binti Md. Aini
//Matrix id: A17DW0731
#include<iostream>
using namespace std;
int main()
{
	int array[10][10], dim1, dim2, dim3, i, j, k;
	cout<<"Enter the three dimensions size: "<<endl;
	cin>>dim1>>dim2>>dim3;
	cout<<"Enter elements of array: "<<endl;
	for(i=0;i<dim1;i++)
	for(j=0;j<dim2;j++)
	for(k=0;k<dim3;k++)
	{
		cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]= ";
		cin>>i>>j>>k;
	}
	cout<<"Displaying elements of array: "<<endl;
	for(i=0;i<dim1;i++)
	for(j=0;j<dim2;j++)
	for(k=0;k<dim3;k++)
		cout<<"array["<<i<<"]["<<j<<"]["<<k<<"]= "<<i<<j<<k<<endl;	
	return 0;
}
