#include <stdio.h>
#include "ch6_1.h"

int main(int argc, char** argv) {

	car_t car;

	car_construct(&car, "HyunDai");

	car_refuel(&car, 100.00);
	printf("car is refueled, %f\n", car.fuel);
	
	while(car. fuel > 0) {
		if(car.speed < 80) {
			car_accelerate(&car);
		} else {
			car_brake(&car);
		}
	}
	while (car.speed > 0) {
		car_brake(&car);
	}
	car_destruct(&car);

	return 0;
}

