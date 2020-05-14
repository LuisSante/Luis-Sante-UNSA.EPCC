#include <bits/stdc++.h> 
using namespace std; 
  
void swap(int *xp, int *yp)  
{  
    int temp = *xp;  
    *xp = *yp;  
    *yp = temp;  
}  
  
void selectionSort(int arr[], int tam)  
{   
    for (int i = 0; i < tam; i++)  
    {  
        int llamado_comparar = i;  
        for (int j = i+1; j < tam; j++)  
        {
        	if (arr[j] < arr[llamado_comparar])  
            	llamado_comparar = j;  
     	}
        swap(&arr[llamado_comparar], &arr[i]);  
    }  
}  

void printArray(int arr[], int tam)  
{    
    for (int i=0; i < tam; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
 
int main()  
{  
    int arr[] = {34, 25, 4, 56, 1};  
	int tam=5;
    selectionSort(arr, tam);  
    printArray(arr, tam);  
    return 0;  
}  
