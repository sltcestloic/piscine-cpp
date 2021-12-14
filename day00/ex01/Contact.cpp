#include "Contact.hpp"

string Contact::getFirstName() {
	return this->first_name;
}

string Contact::getLastName() {
	return this->last_name;
}

string Contact::getNickname() {
	return this->nickname;
}

string Contact::getPhoneNumber() {
	return this->phone_number;
}

string Contact::getDarkestSecret() {
	return this->darkest_secret;
}

string Contact::getIndex() {
	return index;
}

void Contact::setFirstName(string name) {
	this->first_name = name;
}

void Contact::setLastName(string name) {
	this->last_name = name;
}

void Contact::setNickname(string name) {
	this->nickname = name;
}

void Contact::setPhoneNumber(string number) {
	this->phone_number = number;
}

void Contact::setDarkestSecret(string secret) {
	this->darkest_secret = secret;
}

void Contact::setIndex(int index) {
	this->index = std::to_string(index);
}

void Contact::printDetails() {
	cout << "         " + this->index + "|";
	printParam(getFirstName(), true);
	printParam(getLastName(), true);
	printParam(getNickname(), false);
	cout << endl;
}

void Contact::printParam(string param, bool sep) {
	string content;
	int len = param.length();

	if (len < 10) {
		for (int i = 0; i < 10 - len; i++)
			content.push_back(' ');
		content.append(param);
	}
	else if (len == 10)
		content.append(param);
	else
	{
		content = param.substr(0, 9);
		content.push_back('.');
	}
	cout << content;
	if (sep)
		cout << "|";
}

void Contact::printCard() {
	cout << "============= Contact #" << getIndex() << "=============" << endl;
	cout << "First name     : " << getFirstName() << endl;
	cout << "Last name      : " << getLastName() << endl;
	cout << "Nickname       : " << getNickname() << endl;
	cout << "Phone number   : " << getPhoneNumber() << endl;
	cout << "Darkest secret : " << getDarkestSecret() << endl;
	cout << "=====================================" << endl;
}