//
// Created by bluth on 22/04/2022.
//

#include <iostream>
#include "../headers/Admin.h"

Admin::Admin(const std::string &username, const std::string &email, const std::string &bDay,
             const std::string &cnp, const std::string &name, const std::string &phone, const int &age,
             const Reprezentanta &rep) : User(username, email, bDay, cnp, name, phone, age), rep(rep) {}

Admin::Admin(const Admin& other): User(other), rep(other.rep){}

//Admin& Admin::operator=(const Admin& other) {
//    auto copy{other};
//    swap(copy, *this);
//    return *this;
//}
//
//void swap(Admin& u1, Admin& u2) {
//    using std::swap;
//    swap(u1.username, u2.username);
//    swap(u1.name, u2.name);
//    swap(u1.email, u2.email);
//    swap(u1.b_day, u2.b_day);
//    swap(u1.cnp, u2.cnp);
//    swap(u1.phone, u2.phone);
//    swap(u1.age, u2.age);
//    swap(u1.rep, u2.rep);
//}

std::ostream& operator<<(std::ostream& os, const Admin& user) {
    user.afis(os);
    return os;
}

void Admin::say_something() const {
    std::cout << "Sunt un Admin\n";
}

void Admin::afis(std::ostream &os) const {
    os  << "========== Admin ==========\n"
        << "\tUsername: " << username << '\n'
        << "\tEmail: " << email << '\n'
        << "\tData nasterii: " << b_day << '\n'
        << "\tCNP: " << cnp << '\n'
        << "\tNume: " << name << '\n'
        << "\tNumar de telefon: " << phone << '\n'
        << "\tVarsta: " << age << '\n'
        << "\tAdmin-ul raspunde de Reprezentanta #" << rep.get_id() << '\n'
        << "================== End Admin ==================\n";
}