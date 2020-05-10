#include<iostream>

using namespace std;

/*int suma(int array[],int tamanio)
{
	int s=0;
	for(int i=0;i<tamanio;s+=array[i++]);
	return s;	
}

int main()
{
	int array[] ={1,2,3,4,5,6,7,8,9,10}, s=0;
	cout<<"la suma es:"<<suma(array,10); 
	return 0;
}*/

int suma_recursiva(int array[],int tamanio)
{
	if(tamanio==1)
		return array[tamanio-1];
	else
		return array[tamanio-1]+suma_recursiva(array,tamanio-1);
}

int main()
{
	int array[] ={14,45,10,4,51,16,7,8,19,10};
		cout<<"la suma es:"<<suma_recursiva(array,10);
	return 0;
}


