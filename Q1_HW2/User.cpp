
#include "User.h"
#include "DeviceList.h"
void User::init(unsigned int id, std::string username, unsigned int age)
{
    _id = id;
    _username = username;
    _age = age;
    _devices.init();
}
void User::clear()
{
    _id = 0;
    _username.clear();
    _age = 0;
    _devices.clear();  
    
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
DevicesList& User::getDevices() 
{
    return _devices;
}
void User::addDevice(Device newDevice)
{
    _devices.add(newDevice);
}
bool User::checkIfDevicesAreOn() const
{
    DeviceNode* cur = _devices.get_first();
    while (cur != nullptr)
    {
        if (!cur->get_data().isActive())
        {
            return false;
        }
    }
    cur = cur->get_next();
    return true;
}
