#include<iostream>

using namespace std;

/*int size_array(int array[], int tam)
{
	int c=0;
	while(c<tam)
	{
		c=c+1;
	}
		return c;
	
}

int main()
{
	int array[] = {1,2,3,4,5,6,7,8,9,10};
	cout<<"la suma es : "<<size_array(array,10);	
	return 0;
}*/

int size_recursiva(int array[],int tam)
{
	if(tam==1)
		return 1;
	else
		return 1+size_recursiva(array,tam-1);
}

int main()
{
	int array[]={7,8,9,4,8,5,55,1,2,5};
	cout<<"el tamanio del array es : "<<size_recursiva(array,10);
	return 0;
}
