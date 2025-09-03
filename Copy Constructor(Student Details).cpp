//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
class student{
    int age;
    string name;
public:
    student(string n,int a){
        name=n;
        age=a;
    }
    student(const student &s){
        name=s.name;
        age=s.age;
        cout<<"copy constructor called!!"<<endl;
    }
void display(){
    cout<<"Name: "<<name<< " \nAge: "<<age<<endl;
}
};
int main() {
    student s("Ninad", 19);
    s.display();  
    return 0;
}
