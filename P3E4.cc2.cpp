#include<iostream>

using namespace std;

/*int size(char *arr)
{
	int c=0;
	while(*arr++ != '\0')
	{
		c+=1;
	}
	return c;
}

int main()
{
	char arr[]={'1','2','3','4','5','6','\0'};
	cout<<size(arr)<<" ";
	
	return 0;
}*/

int size(char *arr)
{
	if(*arr == '\0')
		return 1;
		
	else
		return 1 + size(++arr);	
}

int main()
{
	char arr[]={'1','2','3','4','5','6','a'};
	cout<<size(arr)-1;
	
	return 0;
}
