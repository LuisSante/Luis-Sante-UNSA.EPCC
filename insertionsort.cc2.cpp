#include <iostream>
using namespace std; 

void insertionSort(int arr[], int tam)  
{  
    int llamado_a_comparar=0 , j=0;  
    for (int i = 1; i < tam; i++) 
    {  
        int llamado_a_comparar = arr[i];  
        j = i - 1;  
  
        while (j >= 0 && arr[j] > llamado_a_comparar) 
        {  
            arr[j + 1] = arr[j];  
            j = j - 1;  
        }  
        arr[j + 1] = llamado_a_comparar;  
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
    int arr[] = { 45, 33, 1, 38, 20 };  
    int tam = 5;  
  
    insertionSort(arr, tam);  
    printArray(arr, tam);  
  
    return 0;  
} 
