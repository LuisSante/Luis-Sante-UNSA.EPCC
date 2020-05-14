#include<iostream> 
using namespace std; 
  
int getMax(int arr[], int tam) 
{ 
    int mx = arr[0]; 
    for (int i = 1; i < tam; i++) 
        if (arr[i] > mx) 
            mx = arr[i]; 
    return mx; 
} 
  
void contar(int arr[], int tam, int exp) 
{ 
    int salida[tam];
    int count[10] = {0}; 
  
    for (int i = 0; i < tam; i++) 
    {
        count[ (arr[i]/exp)%10 ]++; 
  	}
    
	for (int i = 1; i < 10; i++) 
	{
	    count[i] += count[i - 1]; 
  	}
  	
    for (int i = tam - 1; i >= 0; i--) 
    { 
        salida[count[ (arr[i]/exp)%10 ] - 1] = arr[i]; 
        count[ (arr[i]/exp)%10 ]--; 
    } 

    for (int i = 0; i < tam; i++) 
	{
       arr[i] = salida[i]; 
	}
} 
 
void radixsort(int arr[], int tam) 
{  
    int m = getMax(arr, tam); 

    for ( int exp = 1; m/exp > 0; exp *= 10) 
        contar(arr, tam, exp); 
} 

void print(int arr[], int tam) 
{ 
    for (int i = 0; i < tam; i++) 
        cout << arr[i] << " "; 
} 

int main() 
{ 
    int arr[] = {170, 75, 802, 24, 2}; 
    int tam = 5; 
    radixsort(arr, tam); 
    print(arr, tam); 
    return 0; 
}
