#include<iostream>

using namespace std;

class Node{
	private:
		
		int element;
		Node* next;
	public:
		
		void setElement(int element );
		void setNext( Node* next );
		void print();
		int getElement();
		Node* getNext();
		
		Node(){
			element = 0;
			next = NULL;	
		}
		
		Node(int element , Node* next){
			this -> element = element;
			this -> next = next;
		}
};

int Node :: getElement(){
	return this -> element;
}

Node* Node :: getNext(){
	return this -> next;
}

void Node :: print(){
	cout<<getElement()<<" -> ";
}

void Node :: setElement( int new_element){
	this -> element = new_element;
}

void Node :: setNext ( Node* new_next){
	this -> next = new_next;	
}

class LinkedList{
	private:
		int size;
		Node* head;		
	public:
		LinkedList(int size, Node* head);  // contructor por parametro
		LinkedList(); //constructor por defecto
		void insert(int new_element);
		void remove(int new_element);
		void print();
		~LinkedList(); // destructor
};

LinkedList :: LinkedList( int size, Node* head){
	this -> size = size ;
	this -> head = head;		
}

LinkedList :: LinkedList(){
	size = 0;
	head = NULL;
}

LinkedList :: ~LinkedList(){
	
}

void LinkedList :: insert(int new_element){
	Node* new_node = new Node(new_element,NULL);
	Node* aux = head;
	
	if(!head){  //para verificar si esta vacio
		head = new_node; 
	}
	
	else{  //en todo caso que no este vacia
		if(head -> getElement() > new_element){ // puntero para new element
			new_node -> setNext(head);
			head = new_node;
		}
		
		else{
			while((aux -> getNext() != NULL) && (aux -> getNext() -> getElement() < new_element)){
				aux = aux -> getNext();
			}
			new_node -> setNext(aux -> getNext());
            aux -> setNext(new_node);
		}
	}
	size++;
	
}

void LinkedList :: remove(int new_element){
	Node* aux1 = head;
	Node* aux2 = head -> getNext();
	
	int cont = 0;
	
	if(cont == 0){ 
		cout<< "no existe el dato";
	}
	
	if(head -> getElement() == new_element){
		head = aux1 -> getNext();
	}
	
	else{
		while(aux2){
			if(aux2 -> getElement() == new_element){
				Node* temp = aux2;
				aux1 -> setNext(aux2 -> getNext()) ;
				delete temp;
				
				cont ++;
				size--;
			}
			aux1 -> getNext();
			aux2 -> getNext();
		}
	}	
}

void LinkedList :: print(){
	Node *aux = head;
	if(!head){  //verificar si esta vacia
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

int main(){
	int option;
	int item;

	LinkedList List1;
	
	do{
	cout<<"                      MENU                           "<<endl;
	cout<<"(1) usar la funcion insertar dato en la lista enlazada"<<endl;
	cout<<"(2) usar la funcion remover dato de la lista enlazada"<<endl;
	cout<<"(3) mostrar la lista enlazada"<<endl;
	cout<<"(4) salir "<<endl;
	cout<<"intruduzca opcion: "; 
	cin>>option;
	switch(option){
		case 1 :
			cout<<"ingrese un dato a la lista enlazada"<<endl;
			cin>>item;	
			List1.insert(item);
			break;
		case 2 :
			cout<<"retire un dato de la lista enlazada"<<endl;
			cin>>item;
			List1.remove(item);
			break;
		case 3 :
			cout<<"mostrando la lista enlazada"<<endl;
			List1.print();
			break;
		case 4 :		
			cout<<"menu cerrado";
			break;	
		}
	}while(option != 4);
	return 0;
}
