#ifndef COLAS_H
#define COLAS_H
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

template<class GenericClass>
class NodeQ{
    public:

    NodeQ* next;
    GenericClass element;
        NodeQ(){
            next = nullptr;
            element = 0;
        }
        NodeQ(GenericClass element){
            this -> element = element;
            this -> next = nullptr;
        }
};

template<class GenericClass>
class Queue{
    public:
    
    NodeQ<GenericClass>* top;
    int size;
        Queue(){
            top = nullptr;
            size = 0;
        }

        bool isEmpty(){
            NodeQ<GenericClass>* aux = top;
            if(!top){
                return true; 
            }
            else{
                return false;
            }
        }    
        void enqueue(GenericClass item){
            NodeQ<GenericClass>* new_node = new NodeQ(item);
            NodeQ<GenericClass>* aux = top;

            if(top == nullptr){
                top  = new_node;
                size++;
            }else{
                while(aux -> next != nullptr){

                    aux = aux -> next;
                }
                aux -> next = new_node;
                size++;
            }
        }

        void enqueue_sort(GenericClass item){
            NodeQ<GenericClass>* new_node = new NodeQ(item);
            NodeQ<GenericClass>* aux = top;

            if(top == nullptr){
                top = new_node;
                size++;
            }else{
                if(top -> element > item){
                    new_node -> next = top;
                    top = new_node;
                    size++;
                }else{
                    while((aux -> next != nullptr) && (aux -> next -> element < item)){
                        aux = aux -> next;
                    }
                    new_node -> next = aux ->next;
                    aux -> next  = new_node;
                    size++;
                }
                
            }
        }

        void dequeue(){
            NodeQ<GenericClass>* aux = top ;
            if(top == nullptr){
                cout<<"cola vacia"<<endl;
            }else{
        	    top = aux -> next;
                cout<<"el primer elemento para ser atendido es "<<aux->element<<endl;
                delete aux;
                size--;
                aux = aux -> next;
            }
        }

        GenericClass front(){
            return top->element;
        }

        void Round_Robin_priority(int dato[]){
            Queue<int> rafaga;
            int number=3;
            int quantum = 20;//0
            
            for(int i=0 ; i<number ; i++){
                rafaga.enqueue_sort(dato[i]);
            }
            cout<<"Quantum: "<<quantum<<endl;
            rafaga.print();

            int time = 0;
            int iterator = 0;
            while(!rafaga.isEmpty()){ 
                int aux = rafaga.front();
                if(aux > quantum){
                    aux = aux - quantum;
                    rafaga.dequeue();
                    time = time + quantum;
                    rafaga.enqueue_sort(aux);
                    rafaga.print();
                    cout<<"El tiempo es "<< time << endl;
                }else{
                    if(aux == quantum){
                        rafaga.dequeue();
                        time = time + quantum;
                        rafaga.print();
                        cout<<"El tiempo es "<< time << endl;
                    }
                    else if(aux < quantum){
                        time = time + rafaga.front();
                        rafaga.dequeue();
                        rafaga.print();
                        cout<<"El tiempo es "<< time << endl;
                    }
                }
            }
            cout<<"---------------ESTADISTICAS GENERADAS-----------------"<<endl;
            cout<<"Total tiempo de ejecucion de todos los procesos: "<<time<<"ms"<<endl;      
        }

        //template<class U> friend ostream& operator<<(ostream& output, const Queue<U> &p);

        void print(){
            NodeQ<GenericClass>* aux = top;
            while (aux){
                cout<<aux->element<<" ";
                aux = aux -> next;
            } 
            cout<<endl;
        }   
};

/*template<class U>
ostream& operator<<(ostream& o, const Queue<U> &p){
  NodeQ<U>* aux = p.top;
  while(aux != nullptr){
    o<<aux-> data<<" ";
    aux = aux -> next;
  }    
  return o;
}*/

#endif