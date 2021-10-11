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