#include<iostream>
#include<string>

using namespace std;

class Classifier{
	
	public:
		static string Whatis(int &value){
			return "lvalue ref";
		}
		
		static string Whatis(int &&value){
			return "rvalue ref";
		}
};

int trivial(int value){
	return value+1;
}

int main(){
	int ii=0;
	int *iiPtr = &ii;
	int &&iiRefRef = 3; //este es un valor derecho 
	
	cout<<Classifier::Whatis(3)<<endl;
	cout<<Classifier::Whatis(ii)<<endl;
	cout<<Classifier::Whatis(*iiPtr)<<endl;
	cout<<Classifier::Whatis(iiRefRef)<<endl; // puedo saber su direccion de memoria
	cout<<Classifier::Whatis(trivial(3))<<endl;
	
	return 0;
}
