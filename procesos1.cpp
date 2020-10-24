#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;

int main(){
    string text,time;
	int number;
	cout<<"Ingrese el numero de procesos que desea ingresar: "<<endl;
	cin>>number;
	cin.ignore();
	ofstream archive;
	archive.open("procesos1.txt",ios::app);
	for(int i=0 ; i<number ; i++)
	{  
        cout<<"Ingrese tiempo requerido en ms"<<endl;
	    getline(cin,text);
	    archive<<text<<endl;
	 }
	system("pause");
    return 0;
}