class Admin : public Employee {
    Admin(int id, string name, string password, double salary = 5000) : Employee(id, name, password, salary) {

    }
    void display() {
        Employee::display();
    }
};
