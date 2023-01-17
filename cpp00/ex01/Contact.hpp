#include <iostream>

#define print std::cout
#define str std::string

class Contact {
	private:
	str firstName;
	str lastName;
	str nickName;
	str phoneNumber;
	str darkestSecret;

	public:
		Contact(); // Default constuctor
		Contact(str firsName, str lastName, str nickName, str phoneNumber, str darkestSecret);

};
