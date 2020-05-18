#include<iostream>

using namespace std;

int swap(int *a, int *b)
{
	int aux=*a;
	*a=*b;
	*b=aux;
}
int ordenar(int *arr , int tam)
{
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<=i;j++)
		{
			if(arr[i]<arr[j])
			{
				swap(&arr[i], &arr[j]);		
			}
		}
	}
	
	for(int k=0;k<tam ; k++)
	{
		cout<<*arr++<<" ";
	}
}

int main()
{
	int arr[]={2,8,9,6,7,8,5,1};
	int tam=sizeof(arr) / sizeof(arr[0]);
	
	ordenar(arr,tam);
	
	return 0;
}
