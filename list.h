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
		void insert_start(T new_element);
		void insert_end(T new_element);
		void insert(T new_element);
		void remove_start(T new_element);
		void remove_end(T new_element);
		void remove(T new_element);
		Node<T>* begin();
		Node<T>* end();
		void print();
		List(T size, Node<T>* head, Node<T>* cola){
			this -> size=size;
			this -> head = head;
			this -> cola = cola;
		}
		
		List(){
			size=0;
			head=NULL;
			cola = NULL;
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
void List<T> :: insert_start(T new_element){
	Node<T> *new_node = new Node<T>(new_element , NULL);
	Node<T> *temp = head;
	
	if(!head){ //si la lista esta vacia
		head = new_node;
	}
	
	else{
		new_node -> setNext(head);
		head = new_node;
		
		while(temp){ //Mientras exista algo en la lista, voy avanzado el puntero para que apunte al siguiente
			temp = temp->getNext();
		}
	}
	size++;
}

template<class T>
void List<T> :: insert_end(T new_element){
	Node<T>* new_node = new Node<T>(new_element, NULL);
	Node<T>* temp = head;
	
	if(!head){ // si la lista esta vacia
		head = new_node;
	}
	
	else{
		while(temp -> getNext() != NULL){
			temp = temp -> getNext();
		}
		temp -> setNext(new_node);
	}
	size++;
}

template<class T>
void List<T> :: remove_start(T new_element){
	Node<T>* temp = head;
	while(head->getNext() != NULL){ 
		temp = head->getNext();
		delete head;
		head = temp; 
	}
	size--;
}

template<class T>
void List<T> :: remove_end(T new_element){
	Node<T>* temp = head;
	while(temp -> getNext() != NULL){
		if(head -> getNext() == NULL){
			delete head;
		}
	}
	size--;
}

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
Node<T>* List<T> :: begin(){

	return head.getNext();
}

template<class T>
Node<T>* List<T> :: end(){
	
	return &cola;
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

template<class T>
class Iterator{
	private:
		Node<T>* nodo;
		
	public:
		void operator = (Node<T>* Nodo);
		void operator ++();  
		void operator --();	
		T operator *();
		bool operator !=(Node<T>* Nodo);
		bool operator ==(Node<T>* Nodo);
};

template<class T>
void Iterator<T> :: operator =(Node<T>* Nodo){
	nodo = Nodo;
}

template<class T>
void Iterator<T> :: operator ++(){
	nodo = nodo -> getNext();  
} 

template<class T>
void Iterator<T> :: operator --(){
	nodo = nodo -> getNext();
}

template<class T>
T Iterator<T> :: operator *(){
	return nodo -> getElement();
}

template<class T>
bool Iterator<T> :: operator !=(Node<T>* Nodo){
	return nodo == Nodo;
}

template<class T>
bool Iterator<T> :: operator ==(Node<T>* Nodo){
	return nodo != Nodo;
} 
#endif
