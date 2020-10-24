#include<iostream>
#include "List.h"

using namespace std;

int main(){
	int option;
	int item;
	
	List<int> list1;
	
	do{
	cout<<"                      MENU                           "<<endl;
	cout<<"(1) usar la funcion insertar al principio de la lista enlazada"<<endl;
	cout<<"(2) usar la funcion insertar al final de la lista enlazada"<<endl;
	cout<<"(3) usar la funcion insertar en cualquier sitio de la lista enlazada"<<endl;
	cout<<"(4) usar la funcion remover dato al principio de la lista enlazada"<<endl;
	cout<<"(5) usar la funcion remover dato al final de la lista enlazada"<<endl;
	cout<<"(6) usar la funcion remover dato de cualquier parte de la lista enlazada"<<endl;
	cout<<"(7) mostrar la lista enlazada"<<endl;
	cout<<"(8) salir "<<endl;
	cout<<"intruduzca opcion: "; 
	cin>>option;
	switch(option){
		case 1 :
			cout<<"ingrese un dato a la lista enlazada"<<endl;
			cin>>item;	
			list1.insert_start(item);
			break;
		case 2 :
			cout<<"ingrese un dato a la lista enlazada"<<endl;
			cin>>item;	
			list1.insert_end(item);
			break;
		case 3 :
			cout<<"ingrese un dato a la lista enlazada"<<endl;
			cin>>item;	
			//list1.insert(item);
			break;		
		case 4 :
			cout<<"retire un dato de la lista enlazada"<<endl;
			cin>>item;
			list1.remove_start(item);
			break;
		case 5 :
			cout<<"retire un dato de la lista enlazada"<<endl;
			cin>>item;
			list1.remove_end(item);
			break;
		case 6 :
			cout<<"retire un dato de la lista enlazada"<<endl;
			cin>>item;
			list1.remove(item);
			break;		
		case 7 :
			cout<<"mostrando la lista enlazada"<<endl;
			list1.print();
			break;
		case 8 :		
			cout<<"menu cerrado";
			break;	
		}
	}while(option != 8);
	return 0;
}
