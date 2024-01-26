/*
	Bai 4 kiem tra Khoa C/C++
*/
#include <stdio.h>
#include <string.h>

typedef struct {
	char light;
	char fan;
	char motor;
}smartHome_t;

const char* data = "HTTP1.1 200 OK{"\
	"\"light\": \"on\","\
	"\"fan\" : \"off\","\
	"\"motor\" : \"off\"}";

smartHome_t pair_data(const char* data) {
	printf("%s\r\n", data);
	char dataLight[10] = { 0 };
	char dataFan[10] = { 0 };
	char dataMotor[10] = { 0 };

	smartHome_t sn = { 0 };
	const char* keyLight = "\"light\": \"";
	const char* keyFan = "\"fan\" : \"";
	const char* keyMotor = "\"motor\" : \"";

	char* slightData = strstr(data, keyLight);
	slightData += strlen(keyLight);

	char* sfanData = strstr(data, keyFan);
	sfanData += strlen(keyFan);

	char* smotordata = strstr(data, keyMotor);
	smotordata += strlen(keyMotor);

	int i = 0;
	while (*(slightData + i) != '"')
	{
		dataLight[i] = *(slightData + i);
		i++;
	}

	i = 0;
	while (*(sfanData + i) != '"')
	{
		dataFan[i] = *(sfanData + i);
		i++;
	}

	i = 0;
	while (*(smotordata + i) != '"')
	{
		dataMotor[i] = *(smotordata + i);
		i++;
	}

	if (dataLight[1] == 'n') {
		sn.light = 1;
	}

	if (dataFan[1] == 'n') {
		sn.fan = 1;
	}

	if (dataMotor[1] == 'n') {
		sn.motor = 1;
	}

	printf("data light : %s, data fan : %s, data motor: %s\r\n", dataLight, dataFan, dataMotor);

	return sn;
}

int main()
{
	smartHome_t x = pair_data(data);
	printf("light: %d, fan: %d, motor: %d\r\n", x.light, x.fan, x.motor);
	return 0;
}

//to do: hoān thānh hām pair_data
