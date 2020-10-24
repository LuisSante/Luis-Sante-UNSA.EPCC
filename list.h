#ifndef LIST_H
#define LIST_H

#include<iostream>
#include "Node.h"

using namespace std;

template<class T>
class List{
	private:
		T size;
		Node<T>* head;
		Node<T>* cola;
	public:	
		void insert(T new_element);
		void remove(T new_element);
		void print();
		List(T size, Node<T>* head, Node<T>* cola){
			this -> size=size;
			this -> head = head;
			this -> cola = cola;
		}
		
		List(){
			size=0;
			head=nullptr;
			cola = nullptr;
		}
		
		List(List &o){
			this -> size = o.size;
			this -> head = o.head;
			this -> cola = o.cola;
		}
		
		~List(){
			Node<T> *eliminate = head; 
			while(head->getNext() != NULL){ 
				eliminate = head->getNext();
				delete head;
				head = eliminate; 
			} 
		}
};



template<class T>
void List<T> :: remove(T new_element){
	Node<T>* temp1 = head;
	Node<T>* temp2 = head -> getNext();
	
	int cont=0;
	
	if(cont == 0){
		cout<<"lista vacia";
	} 
	
	if(head -> getElement() == new_element){
		head = temp1->getNext();
		delete head;
	}else{
		while(temp2){
			if(temp2 -> getElement() == new_element){
				Node<T>* aux_node = temp2;
				temp1 -> setNext(temp2 -> getNext()); 
				delete head;
				cont++;
				size--;
			}
			temp1 = temp1 -> getNext();
			temp2 = temp2 -> getNext();
		}
	}
}

template<class T>
void List<T> :: print(){
	Node<T> *aux = head;
	if(!head){ 
		cout<<"lista vacia";
	}	
	else{
		while(aux){ //Mientras exista algo en la lista, voy avanzado el puntero para que apunte al siguiente
			aux -> print();
			if(!aux -> getNext())cout<< "NULL";{
				aux = aux -> getNext();			
			}
		}
	}
}

#endif
