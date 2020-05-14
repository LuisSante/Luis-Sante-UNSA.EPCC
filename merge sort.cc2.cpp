#include<iostream>

using namespace std;

void merge(int arr[], int s, int m, int e) //s=start e=end m=medio
{  
    int n1 = m - s + 1; 
    int n2 =  e - m; 
    int L[n1], R[n2]; 
  
    for (int i = 0; i < n1; i++) 
        L[i] = arr[s + i]; 
    for (int j = 0; j < n2; j++) 
        R[j] = arr[m + 1+ j]; 
 
    int i=0 ,j=0,k = s;
    while ( i < n1 && j < n2) 
    { 
        if (L[i] <= R[j]) 
        { 
            arr[k] = L[i]; 
            i++; 
        } 
        else
        { 
            arr[k] = R[j]; 
            j++; 
        } 
        k++; 
    } 
    while (i < n1) 
    { 
        arr[k] = L[i]; 
        i++; 
        k++; 
    } 

    while (j < n2) 
    { 
        arr[k] = R[j]; 
        j++; 
        k++; 
    } 
} 

void mergeSort(int arr[], int s, int e) 
{ 
    if (s < e) 
    { 
		int m = s+(e-s)/2; 
		mergeSort(arr, s, m); 
        mergeSort(arr, m+1, e); 
  
        merge(arr, s, m, e); 
    } 
} 

void printArray(int A[], int tam) 
{ 
    for (int i=0; i < tam; i++) 
        cout<<A[i] ; 
} 

int main() 
{ 
    int arr[] = {12, 11, 13, 5, 6, 7};  
  	int tam=6;
  
    mergeSort(arr, 0, tam - 1); 
    printArray(arr, tam);

    return 0; 
}
