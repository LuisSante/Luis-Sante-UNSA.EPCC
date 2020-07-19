#include<iostream>
#include<string>

class Classifier{
	
	public:
		static std::string Whatis(int &value){
			return "lvalue ref";
		}
		
		static std::string Whatis(int &&value){
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
	//int &&iiRefRef = ii; //error
	int &&iiRefRefRef = std::move(ii);
	std::cout<<Classifier::Whatis(std::move(3))<<std::endl;
	std::cout<<Classifier::Whatis(std::move(ii))<<std::endl;
	std::cout<<Classifier::Whatis(std::move(*iiPtr))<<std::endl;
	std::cout<<Classifier::Whatis(std::move(iiRefRef))<<std::endl; // puedo saber su direccion de memoria
	std::cout<<Classifier::Whatis(iiRefRefRef)<<std::endl;//lvalue 
	std::cout<<Classifier::Whatis(std::move(iiRefRefRef))<<std::endl; //si queremos que salga un rvalue
	std::cout<<Classifier::Whatis(trivial(3))<<std::endl;
	
	return 0;
}
