#pragma once
#include <iostream>
#include <string>
using namespace std;
class Employee
{
protected:
        int id;
        string name;
        string password;
        double salary;
    public:5
        Employee() {
            id = 0;
            name = "";
            password = "";
            salary = 0.0;
        }
        Employee(int id, string name, string password, double salary) {
            this->id = id;
            this->name = name;
            this->password = password;
            this->salary = salary;
        }
        void setName(string name) {
            if (Validation::isValidName(name)) {
                this->name = name;
            }

        }
        void setPassword(string password) {
            if (Validation::isValidPassword(password)) {
                this->password = password;
            }
        }
        void setSalary(double salary) {
            if (Validation::isValidSalary(salary)) {
                this->salary = salary;
            }
        }
        int getId() {
            return id;
        }
        string getName() {
            return name;
        }
        string getPassword() {
            return password;
        }
        double getSalary() {
            return salary;
        }
        void display() {
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Salary: " << salary << endl;
        }


};

