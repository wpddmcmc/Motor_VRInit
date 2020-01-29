#include <stdlib.h>
#include "phidget22.h"
#include <iostream>

int main() {
	PhidgetVoltageRatioInputHandle voltageRatioInput1;
	PhidgetVoltageRatioInputHandle voltageRatioInput2;
	PhidgetVoltageRatioInputHandle voltageRatioInput3;
	PhidgetReturnCode ret;
	PhidgetReturnCode errorCode;
	const char * errorString;
	char errorDetail[100];
	size_t errorDetailLen = 100;
	double voltageRatio1,voltageRatio2,voltageRatio3;

	PhidgetVoltageRatioInput_create(&voltageRatioInput1);
	PhidgetVoltageRatioInput_create(&voltageRatioInput2);
	PhidgetVoltageRatioInput_create(&voltageRatioInput3);

	ret = Phidget_setHubPort((PhidgetHandle)voltageRatioInput1, 1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setDeviceSerialNumber((PhidgetHandle)voltageRatioInput1, 560817);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setChannel((PhidgetHandle)voltageRatioInput1, 1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setHubPort((PhidgetHandle)voltageRatioInput2, 1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setDeviceSerialNumber((PhidgetHandle)voltageRatioInput2, 560817);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setChannel((PhidgetHandle)voltageRatioInput2, 2);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setHubPort((PhidgetHandle)voltageRatioInput3, 1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setDeviceSerialNumber((PhidgetHandle)voltageRatioInput3, 560817);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_setChannel((PhidgetHandle)voltageRatioInput3, 3);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}


	ret = Phidget_openWaitForAttachment((PhidgetHandle)voltageRatioInput1, 5000);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_openWaitForAttachment((PhidgetHandle)voltageRatioInput2, 5000);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_openWaitForAttachment((PhidgetHandle)voltageRatioInput3, 5000);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}

	ret = PhidgetVoltageRatioInput_getVoltageRatio(voltageRatioInput1, &voltageRatio1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	else
	{
		std::cout<<"Motor1:"<<voltageRatio1<<std::endl;
	}
	
	ret = PhidgetVoltageRatioInput_getVoltageRatio(voltageRatioInput2, &voltageRatio2);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	else
	{
		std::cout<<"Motor2:"<<voltageRatio2<<std::endl;
	}

	ret = PhidgetVoltageRatioInput_getVoltageRatio(voltageRatioInput3, &voltageRatio3);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	else
	{
		std::cout<<"Motor3:"<<voltageRatio3<<std::endl;
	}

	ret = Phidget_close((PhidgetHandle)voltageRatioInput1);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_close((PhidgetHandle)voltageRatioInput2);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}
	ret = Phidget_close((PhidgetHandle)voltageRatioInput3);
	if (ret != EPHIDGET_OK) {
		Phidget_getLastError(&errorCode, &errorString, errorDetail, &errorDetailLen);
		printf("Error (%d): %s", errorCode, errorString);
		exit(1);
	}

	PhidgetVoltageRatioInput_delete(&voltageRatioInput1);
	PhidgetVoltageRatioInput_delete(&voltageRatioInput2);
	PhidgetVoltageRatioInput_delete(&voltageRatioInput3);
}