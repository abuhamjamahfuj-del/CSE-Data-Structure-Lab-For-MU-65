#include <iostream>
#include <string>
using namespace std;

struct Address {

    string city;
    int zipcode;

};
struct Student {
    string name;
    int id;
    Address studentAddress;
};

int main() {
    Student s1;
    s1.id=056
    s1.name="Karim";
    s1.studentAddress.city="Sylhet";
    s1.studentAddress.zipcode=3100;

    cout<<s1.name <<"lives in"<<s1.studentAddress.city<<endl;
return 0;
}