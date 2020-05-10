#include<iostream>
#include<iostream>

using namespace std;

void copiar( string A[], string B[],int tam)
{
	for(int i=0;i<tam;i++)
	{
		B[i]=A[i];
		cout<< B[i];
	}

}

int main()
{
	string A[]="Hello";
	string B[]="World";
	
	copiar(A,B,1);
	return 0;
}
