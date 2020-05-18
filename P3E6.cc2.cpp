#include<iostream>

using namespace std;

void copiar(char *cad , char *cad2)
{
	while(*cad != '\0')
	{
		*cad2++ = *cad++;
	}
}

void print(char *cad , char *cad2)
{
	for(int i=0 ; *cad2 != '\0' ; i++)
	{
		cout<<*cad2++;
	}
}

int main()
{
	char cad[]="world";
	char cad2[]="hello";
	copiar(cad,cad2);
	print(cad,cad2);
	
	return 0;
}
