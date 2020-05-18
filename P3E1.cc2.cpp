#include<iostream>

using namespace std;

/*int suma(int *arr , int tam)
{
	if(tam==0)
		return *arr;
	else
		return *arr + suma(++arr,--tam );	
}

int main()
{
	int arr[]={10,2,33,4,5,56,7,8,19,10};
	int tam = sizeof(arr) / sizeof(arr[0]);
	
	cout<<suma(arr,tam)-1;
	return 0;
}*/

int suma(int *arr , int tam)
{
	int i=0 , c=0;
	for(; i<tam ; i++)
	{
		c+= *arr++;
	}
	return c;
}

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10};
	int tam = sizeof(arr) / sizeof(arr[0]);
	
	cout<<suma(arr,tam);
	return 0;
}
