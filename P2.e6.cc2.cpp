#include<iostream>

using namespace std;

void copiar( char A[], char B[],int tam)
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
	char A[]={'h','e','l','l','o'};
	char B[]={'w','o','r','l','d'};
	
	copiar(A,B,5);
	return 0;
}
