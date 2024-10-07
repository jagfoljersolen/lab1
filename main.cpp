#include <iostream>
#include "Person.h"
#include "Student.h"
#include "Teacher.h"
using namespace std;
int main()
{
    cout << endl
         << "Obiekty klasy Person" << endl;
    Person o1("Grazyna", "Nowak", 45);
    o1.showInfoPerson();
    cout << "Czy pelnoletnia?: " << o1.is_18() << endl;
    o1.setAge(16);
    cout << endl
         << "Obiekty klasy Teacher" << endl;
    Teacher n1("Barbara", "Kowalska", 56, 30, "Phd");
    n1.showInfoTeacher();
    cout << "Czy ma Phd?: " << n1.is_Phd() << endl;
    n1.setAge(34);

    Person p1[3];
    Person* p2;
    Person* p3[3];
    Person** p4;

    for(int i = 0; i < 3; i++)
    {
        p1[i].init("Anna","Nowak",20+i);
        p1[i].showInfoPerson();
    }
    p2=new Person[3];
    for(int i = 0; i < 3; i++) {
        p2[i].init("Ola","Adamek",20+i);
        p2[i].showInfoPerson();
    }

    for(int i = 0; i < 3; i++) {
        p3[i]=new Person("Kasia","Kowalska",20+i);
        p3[i]->showInfoPerson();
    }
    p4=new Person*[3];
    for(int i = 0; i < 3; i++) {
        p4[i] = new Person("Pawel","Wojcik",20+i);
        p4[i]->showInfoPerson();
    }

    for(int i = 0; i < 3; i++) {
        delete p3[i];
    }
    for(int i = 0; i < 3; i++) {
        delete p4[i];
    }
    delete [] p4;

    cout << endl << endl
         << "Obiekty klasy Student" << endl;
    Student m1("Magdalena", "Malinowska", 22, "78654");
    m1.showInfoStudent();
    cout << endl;

    Student s1[3];
    Student* s2;
    Student* s3[3];
    Student** s4;

    for(int i = 0; i < 3; i++) {
        s1[i].init("Anna","Abacka",20+i);
        s1[i].setIndex("99876");
        s1[i].showInfoStudent();
    }
    cout << endl;

    s2=new Student[3];
    for(int i = 0; i < 3; i++) {
        s2[i].init("Bartosz","Brodowski",20+i);
        s2[i].setIndex("99845");
        s2[i].showInfoStudent();
    }
    cout << endl;

    for(int i = 0; i < 3; i++) {
        s3[i]=new Student("Czarek", "Pieczarek", 20+i, "77865");
        s3[i]->showInfoStudent();
    }
    cout << endl;

    s4=new Student*[3];
    for(int i = 0; i < 3; i++) {
        s4[i]=new Student("Damian", "Dom", 20+i, "77856");
        s4[i]->showInfoStudent();
    }

    for(int i = 0; i < 3; i++) {
        delete s3[i];
    }
    for(int i = 0; i < 3; i++) {
        delete s4[i];
    }
    delete [] s4;

    return 0;
}