#include<iostream>

using namespace std;

/*void swap(int array[],int tam)
{
	int aux=0;
	for(int i=0;i<tam/2;i++) //es entre dos porque si recorremos hasta el ultimo volveriamos a lo mismo
	{
		aux=array[i];
		array[i]=array[tam-i-1];
		array[tam-i-1]=aux;

	}
	
	for(int j=0;j<tam;j++)
		cout<<array[j]<<" ";
}

int main()
{
	int array[]={1,2,3,4,5,6,7,8,9,10};
	swap(array,10);
	
	return 0;	
}*/

int swap(int array[],int inicio, int final)
{
	int aux=0;
	if(inicio<final)
	{
		aux=array[inicio];
		array[inicio]=array[final];
		array[final]=aux;
		return swap(array,inicio+1,final-1);	
	}
}

int main()
{
	int array[]={1,2,3,4,5,6,7,8,9,10};
	int tam=10;
	
	swap(array,0,tam-1);
	for(int i=0;i<tam;i++)
		cout<<array[i]<<" ";
	
	return 0;
}
