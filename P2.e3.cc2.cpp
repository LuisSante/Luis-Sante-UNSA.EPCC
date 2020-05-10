#include<iostream>

using namespace std;

void bubble_sort(int array[],int tam)
{
	int swap=0;
	for(int i=0;i<tam;i++)
	{
		for(int j=0;j<i+1;j++)
		{
			if(array[i]<array[j])
			{
				swap=array[i];
				array[i]=array[j];
				array[j]=swap;
			}
		}
	}
	
	for(int k=0;k<tam;k++)
		cout<<array[k]<<" ";
}
int main()
{
	int array[] = {3,7,8,2,1,4,6,5,10,9};
	bubble_sort(array,10);
	return 0;
}
