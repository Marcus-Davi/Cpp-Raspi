#include <iostream>
#include <wiringPi.h>


int main(){
	wiringPiSetup();
	pinMode(8,OUTPUT);
	for(;;){
		digitalWrite(8,HIGH); delay(500);std::cout << "ON" << std::endl;
		digitalWrite(8,LOW); delay(500);std::cout << "OFF" << std::endl;

	}	

return 0;
}
