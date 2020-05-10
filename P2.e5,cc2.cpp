#include<iostream>

using namespace std;

void concatenar(char A[],char B[10], int tam)
{
	for(int i=5;i<tam;i++)
	{
		B[i]= A[i-5];
	}
	
	for(int j=0;j<10;j++)
	{
		cout<<B[j]<<" ";
	}
}

int main()
{
	char A[]={'6','7','8','9','0'};
	//int A[]={6,7,8,9,10,11,12,13,14,15};  
	char B[]={'1','2','3','4','5'};
	concatenar(A,B,10);
	//en la respuesta sale 1 2 3 4 5 6 7 8 9 10 
	//no toma el valor 11 -> 15 aunque este A[] 
	//y estoy haciendo cuenta que B solo admite 10 elementos de tipo entero
	return 0;
}
