#include<iostream>

using namespace std;

void copiar(int A[], int B[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		B[i]=A[i];
	}
	
	for(int j=0;j<tam;j++)
	{
		cout<<B[j];
	}
}

int main()
{
	int A[]={1,2,3,4,5,6};
	int B[]={7,8,9,10,11,12};
	
	copiar(A,B,6);
	return 0;
}
