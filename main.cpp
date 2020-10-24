#include<iostream>
#include "cola.h"
#include<fstream>

using namespace std;

int main(){

    Queue<int> queue;

    ifstream archivo_entrada("procesos1.txt");
    ofstream archivo_salida("procesos2.txt");
    string linea;
    string pal;
    int num[3];

    int i=0;
    while(getline(archivo_entrada, linea)) {
        pal=linea;
        num[i]=atoi(pal.c_str()); 
        i++;
    }
    //archivo_salida << queue.Round_Robin_priority(num);
    return 0;
}