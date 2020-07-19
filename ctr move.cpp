#include<iostream>

using namespace std;

class A{
	private:
		int p; 
	
	public:
		A(){
			p = 0;
			cout<<"ctr por defecto"<<endl;
		}
		
		A(A& ref){
			p = ref.p;
			cout<<"ctr copy"<<endl;
		}
		
		A(A&& refref):p(refref.p){
			cout<<"ctr move"<<endl;
		}

};

int main(){
	A a;
	//A b(a);
	A b(move(a));
	return 0;
}
