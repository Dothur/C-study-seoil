#include <string.h>
#include "ch6_1.h"

void car_construct(car_t* car, const char* name) {
	strcpy(car -> name, name);
	car -> speed = 0.0;
	car -> fuel = 0.0;
}
void car_destruct(car_t* car) {
	//Nothing to do here!
}
void car_accelerate(car_t* car) {
	car -> speed += 0.5;
	car -> fuel -= 0.5;
	if (car -> fuel < 0.0) {
		car -> fuel =0.0;
	}
}
void car_brake(car_t* car) {
	car -> speed -= 0.1;
	if(car -> speed < 0.0) {
		car -> speed = 0.0;
	}
	car -> fuel -= 2.0;
	if(car -> fuel <0.0) {
		car -> fuel =0.0;
	}
}
void car_refuel(car_t* car, double amount) {
	car -> fuel = amount;
}

