#include "Contact.hpp"

Contact::Contact() : firstName(""), lastName(""), nickname(""), phoneNumber(""), darkestSecret("") {}

void Contact::setContactInfo(const std::string &first, const std::string &last, const std::string &nick,
						const std::string &phone, const std::string &secret)
{
	firstName=first;
	lastName= last;
	nickname= nick;
	phoneNumber = phone;
	darkestSecret =secret;
}

void Contact::displayContact() const
{
	std::cout << "First Name: " <<firstName << "\n" 
				<<"Last Name: " << lastName << "\n" 
				<< "Nickname: " << nickname << "\n" 
				<< "Phone Number : " << phoneNumber << "\n" 
				<< "Darkest Secret :" << darkestSecret << std::endl;
}

std::string Contact::getTruncated(const std::string& str) const {
        return str.length() > 10 ? str.substr(0, 9) + "." : str;
    }

std::string Contact::getAdjust(const std::string& str) const {
	if (str.length() < 10)
	{
		return(std::string(10-str.length(),' ')+ str);
	}
	return (str);
}

void Contact::displaySummary(int index) const {
        std::cout << "|    " << index << "     |"
                  << getAdjust(getTruncated(firstName)) << "|"
                  << getAdjust(getTruncated(lastName)) << "|"
                  << getAdjust(getTruncated(nickname)) << "|" << std::endl;
}