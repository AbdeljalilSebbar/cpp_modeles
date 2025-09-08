#include "Contact.hpp"

void Contact::setFirstName(std::string name)
{
    first_name = name;
}

void Contact::setLastName(std::string name)
{
    last_name = name;
}

void Contact::setNickName(std::string name)
{
    nick_name = name;
}

void Contact::setDarkest(std::string name)
{
    darkest = name;
}

void Contact::setPhoneNumber(std::string value)
{
    phone_number = value;
}

std::string Contact::getFirstName()
{
    return first_name;
}

std::string Contact::getLastName()
{
    return last_name;
}

std::string Contact::getNickName()
{
    return nick_name;
}

std::string Contact::getPhoneNumber()
{
    return phone_number;
}

std::string Contact::getDarkest()
{
    return darkest;
}
