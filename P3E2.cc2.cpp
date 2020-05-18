#include<iostream>

using namespace std;

void swap(int *a , int* b)
{
	int temp = *a;
		*a = *b;
		*b = temp;		
}

void intercambiar(int *arr, int tam)
{
	int* ptr=arr +tam-1;
	while(arr< ptr)
	{
		swap(arr++,ptr-- );
	}
	
}
void print(int *arr, int tam)
{
	for(int i=0; i<tam ; i++)
	{
		cout<<*arr++<<" ";
	}
}

int main()
{
	int arr[]={10,9,8,7,6,5,4,3,2,1};
	int tam=sizeof(arr)/sizeof(arr[0]);
	
	intercambiar(arr,tam);
	print(arr,tam);
	
	return 0;
}



