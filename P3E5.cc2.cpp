#include<iostream>

using namespace std;

int size(char *arr)
{
	int c=0;
	while(*arr++ != '\0')
	{
		c+=1;
	}
	return c;
}

void concatenar(char *cad , char *cad2)
{
	char *ptr=cad2+size(cad2);
	while(*cad != '\0')
	{
		*ptr++ = *cad++;
	}
}

void print(char *cad ,char *cad2)
{
	for(int i=0; *cad2 != '\0' ; i++)
	{
		cout<<*cad2++ ;
	}
}

int main()
{
	char cad[]="world";
	char cad2[]="hello ";
	
	concatenar(cad,cad2);
	print(cad,cad2);
	return 0;
}
