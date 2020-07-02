#include<iostream>

using namespace std;

class Settings{		
	private:
		static Settings* instance;
		int widht;
		int height;
		int brightness;
		Settings() : widht(758) , height(845) , brightness(70){}
	public:
		void setWidht(int widht){this -> widht = widht;}
		void setHeight(int height){this -> height = height;}
		void setBrightness(int brightness){this -> brightness =brightness;}
		int getWidht(){return widht;}
		int getHeight(){return height;}
		int getBrightness(){return brightness;}
		static Settings* getInstance();
		void display();
};
Settings* Settings :: instance = NULL;

Settings* Settings :: getInstance(){
	if(instance == NULL){          
		instance = new Settings();
	}
	return instance;
}

void Settings :: display(){
	cout<<widht<<endl<<height<<endl<<brightness;
}
int main(){	
	Settings *settings = Settings :: getInstance();
	settings -> display();
	Settings *settings2 = Settings :: getInstance();
	Settings *settings3 = Settings :: getInstance();
	Settings *settings4 = Settings :: getInstance();
	Settings *settings5 = Settings :: getInstance();
	
	return 0;
}
