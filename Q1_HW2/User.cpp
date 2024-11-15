
#include "User.h"

void User::init(unsigned int id, std::string username, unsigned int age)
{
    _id = id;
    _username = username;
    _age = age;
    _newDevice.init();
}

void User::clear()
{            
    delete &(_newDevice);
    _id = 0;
    _username = "";
     _age = 0;
        
}

unsigned int User::getID() const
{
    return _id;
}

std::string User::getUserName() const
{
    return _username;
}
unsigned int User::getAge() const
{
    return _age;
}
DevicesList& getDevices() const;
void addDevice(Device newDevice);
bool checkIfDevicesAreOn() const;
