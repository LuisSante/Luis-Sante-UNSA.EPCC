#include<iostream>
#include<string.h>

using namespace std;

class Course{		
	private:
		string name;
		string code;
		int nbrStudents;
	
	public:
		string getName()const;  
		string getCode()const;  
		int getNbrStudents()const;  
		void setName(const string name); 
		void setCode(const string code); 
		void setNbrStudents(const int nbrStudens);  
		Course(){
			name =" "; 
			code = " ";
			nbrStudents=0;
		}
		Course(string name, string code, int nbrStudents){
			this -> name = name;
			this ->code = code;
			this -> nbrStudents = nbrStudents;
		}
			
};

string Course::getName() const {
	return this -> name;
}

string Course::getCode() const{
	return this -> code;
}

int Course::getNbrStudents() const{
	return this -> nbrStudents;
}

void Course::setName(const string new_name){
	this->name = new_name;
}

void Course::setCode(const string new_code){
	this->code = new_code;
}

void Course::setNbrStudents(const int new_nbrStudents){
	this->nbrStudents = new_nbrStudents;
}

class ArrayOfCourse{
	private:
		Course *courses;
		int size;
		void resize(int n);
		
	public:
		ArrayOfCourse(const Course courses[ ], const int size);
		ArrayOfCourse(const ArrayOfCourse &o);
		~ArrayOfCourse();
		void pushback(const Course &p);
		void insert(const int posicion, const Course &p);
		void remove(const int pos);
		const int getSize() const;
		void clear();
		
};


ArrayOfCourse::ArrayOfCourse(const Course courses[ ], const int size){
	this -> courses = new Course[size];
	this -> size = size; 
}

void ArrayOfCourse::resize(int n){
	Course *temp = new Course[n];
	for(int i=0;i<n;i++){
		temp[i] = courses[i];
	}
	courses = temp;
	size=n;
}

ArrayOfCourse::ArrayOfCourse(const ArrayOfCourse &o){
	courses = new Course[o.size];
 	size = o.size;
 	for (int i = 0; i < size; ++i)
 	courses[i] = o.courses[i];
}

ArrayOfCourse::~ArrayOfCourse(){
	delete[] courses;
}

void ArrayOfCourse::pushback(const Course &p){
	resize(size-1);
	for(int h=0;h<size;h++)
	{
		courses[size-1]=p;
	}
}

void ArrayOfCourse::insert( const int posicion, const Course &p){
	resize(size-1);
	for(int i=0;i<size;i++){
		courses[posicion]=p;	
	}
}

void ArrayOfCourse::remove(const int pos){
	resize(size-1);
	for(int j=0;j<size;j++){
		courses[pos]=courses[pos+1];
	}
}

const int ArrayOfCourse ::getSize() const{
	int c=0;
	for(int k=0; k<size; k++)
	{
		c+=1;
	}
	return c;
}


int main(){
	
	Course C("Biologia","20193258",2);
   	Course C2("Calculo" ,"20193259",3);
   	Course C3("Ciencias" , "20193260,",4);
   	Course C4("Arquitectura", "20193261",5);
   	Course C5("Discretas","20193262",6);

	Course arr[]={C,C2,C3,C4,C5};
	
	ArrayOfCourse A(arr,5);
   
	A.pushback(C5);
    A.remove(2);
    A.insert(3,C5);
    A.getSize();

	return 0;
}
