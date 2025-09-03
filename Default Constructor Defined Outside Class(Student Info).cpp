//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
class student {
public:
    string name;
    int rollNumber;
    char grade;
    student();
    void display();
};
student::student() {
    cout<<"Enter Name: ";
    cin>>name;
    cout<<"Enter Roll Number: ";
    cin>>rollNumber;
    cout<<"Enter Grade: ";
    cin>>grade;
}
void student::display() {
    cout<<"Student Info"<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Roll Number:"<<rollNumber<<endl;
    cout<<"Grade:"<<grade<<endl;
}
int main() {
    student s1;
    s1.display();  
    return 0;
}
