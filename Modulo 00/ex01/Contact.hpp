
#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string> // std::string
#include <iostream> // Para std::cout


class Contact
{
private:
    std::string firstName;
    std::string lastName;
    std::string nickname;
    std::string phoneNumber;
    std::string darkestSecret;

    std::string getTruncated(const std::string& str) const;
    std::string getAdjust(const std::string& str) const;



public:
    Contact();
    void setContactInfo(const std::string &first, const std::string &last, const std::string &nick,
                        const std::string &phone, const std::string &secret);
    void displayContact() const;
    void displaySummary(int index) const;

};

#endif
