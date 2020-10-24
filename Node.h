#ifndef NODE_H
#define NODE_H

#include<iostream>

using namespace std;

template<class T>
class Node{
	
	private:
		T element;
		Node<T>* next;
	public:
		void setElement(T element );
		void setNext(Node<T>* next );
		void print();
		T getElement();
		Node<T>* getNext();
		
		Node(){
			element = 0;
			next = nullptr;	
		}
		
		Node(int element , Node<T>* next){
			this -> element = element;
			this -> next = next;
		}
};

template<class T>
T Node<T> :: getElement(){
	return this -> element;
}

template<class T>
Node<T>* Node<T> :: getNext(){
	return this -> next;
}

template<class T>
void Node<T> :: print(){
	cout<<getElement()<<" -> ";
}

template<class T>
void Node<T> :: setElement( T new_element){
	this -> element = new_element;
}

template<class T>
void Node<T> :: setNext (Node<T>* new_next){
	this -> next = new_next;	
}

#endif
