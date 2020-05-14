#include<iostream>

using namespace std;  
  
void swap(int* a, int* b)  
{  
    int temp = *a;  
    *a = *b;  
    *b = temp;  
}  

int particion(int arr[], int inicio, int final)  
{  
    int pivot = arr[final]; 
    int i = (inicio- 1);   
  
    for (int j = inicio; j <= final - 1; j++)  
    {   
        if (arr[j] < pivot)  
        {  
            i++;
            swap(&arr[i], &arr[j]);  
        }  
    }  
    swap(&arr[i + 1], &arr[final]);  
    return (i + 1);  
}
void quickSort(int arr[], int inicio, int final)  
{  
    if (inicio< final)  
    {  
        int pi = particion(arr, inicio, final);   
        quickSort(arr, inicio, pi - 1);  
        quickSort(arr, pi + 1, final);  
    }  
}  
  
void printArray(int arr[], int tam)  
{  
    int i;  
    for (i = 0; i < tam; i++)  
        cout << arr[i] << " ";  
    cout << endl;  
}  
  
int main()  
{  
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int tam=6;
    quickSort(arr, 0, tam - 1);  
    printArray(arr, tam);  
    return 0;  
}  
