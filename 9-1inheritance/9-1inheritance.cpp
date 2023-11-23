#include<iostream>
using namespace std;

class Person {
private:
    int personData;
public:
    Person(int x) : personData(x) {
        cout << "Person::Person(int ) called with data: " << personData << endl;
    }

    Person() : personData(0) {
        cout << "Person::Person() called with data: " << personData << endl;
    }
};

class Faculty : virtual public Person {
private:
    int xxx;
public:
    Faculty(int x, int y) : Person(x), xxx(y) {
        cout << "Faculty::Faculty(int ) called with data: " << xxx << endl;
    }
};

class Student : virtual public Person {
private:
    int yyy;
public:
    Student(int x, int y) : Person(x), yyy(y) {
        cout << "Student::Student(int ) called with data: " << yyy << endl;
    }
};

class TA : public Faculty, public Student {
private:
    int zzz;
public:
    TA(int x, int y, int z) : Person(x), Student(x, y), Faculty(x, z), zzz(0) {
        cout << "TA::TA(int ) called with data: " << zzz << endl;
    }
};

int main() {
    TA ta1(30, 40, 50);
    return 0;
}
