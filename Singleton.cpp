#include<iostream>

using namespace std;

class Settings{		
	private:
		static Settings* instance;
		//int widht
		//int height
		//int brightness
	public:
		static Settings* getInstance();
};
Settings* Settings :: instance = NULL;

Settings* Settings :: getInstance(){
	if(instance == NULL){          
		instance = new Settings();
	}
	return instance;
}

int main(){	
	Settings *settings = Settings :: getInstance(); 
	Settings *settings2 = Settings :: getInstance();
	Settings *settings3 = Settings :: getInstance();
	Settings *settings4 = Settings :: getInstance();
	Settings *settings5 = Settings :: getInstance();
	
	return 0;
}
