#include<iostream>
#include<string>
using namespace std;


class Person {
	//attribut:
protected:
	int id;
	string name;
	string password;
public:
	//constructor:

	Person() {
		this->id = 0;

	}
	Person(int id, string name, string password) {
		this->id = id;
		this->name = name;
		this->password = password;


	}
	//setter
	void setId(int id) {
		this->id = id;
	}
	void setName(string name) {
		if (Validation::validateName(name)) {
			this->name = name;
		}
	}
	void setId(string password) {
		if (Validation::validatePassword(password)) {
			this->password = password;
		}
	}
	//getter
	int getId() {
		return this->id;

	}
	string getName() {
		return this->name;
	}
	string getPassword() {

		return this->password;
	}
	//method
	virtual void display() {
		cout << "name=" << name << endl;
		cout << "id=" << id << endl;
	}

};