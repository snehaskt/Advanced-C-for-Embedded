#include <stdio.h>
#include <string.h>


struct sensor_reading
{
    float value;
    int status;
};

struct sensor_system
{
    struct sensor_reading temp[3];
    struct sensor_reading current[3];
    struct sensor_reading voltage[3];
};

int main()
{
	struct sensor_system system;
	system.temp[0].value = 27.8;
	system.current[0].value = 10;
	system.voltage[0].value = 240;


	printf("Temperature:%.2f\n", system.temp[0].value);
	printf("Current-%.2f\n", system.current[0].value);
	printf("Voltage-%.2f\n", system.voltage[0].value);


	return 0;

}
