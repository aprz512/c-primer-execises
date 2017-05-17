
#ifndef CP5_ex7_15_h
#define CP5_ex7_15_h

#include <string>
#include <iostream>

// 因为struct里面用到了自己，所以需要提前声明，wtf？？？
struct Person;
std::istream& read(std::istream&, Person&);

struct Person {
    Person() = default;
    Person(const std::string sname, const std::string saddr)
        : name(sname), address(saddr)
    {
    }
    Person(std::istream& is) { read(is, *this); }

    std::string getName() const { return name; }
    std::string getAddress() const { return address; }

    std::string name;
    std::string address;
};

std::istream& read(std::istream& is, Person& person)
{
    is >> person.name >> person.address;
    return is;
}

std::ostream& print(std::ostream& os, const Person& person)
{
    os << person.name << " " << person.address;
    return os;
}

#endif

