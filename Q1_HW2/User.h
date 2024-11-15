#pragma once

#include "DeviceList.h"
#include <string.h>

class User
{
public:
	void init(unsigned int id, std::string username, unsigned int age);
	void clear();
	unsigned int getID() const;
	std::string getUserName() const;
	unsigned int getAge() const;
	DevicesList& getDevices() const;
	void addDevice(Device newDevice);
	bool checkIfDevicesAreOn() const;
private:
	unsigned int _id;
	std::string _username;
	unsigned int _age;
	Device _newDevice;

};


