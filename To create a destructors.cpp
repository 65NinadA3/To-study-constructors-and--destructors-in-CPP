//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int count = 0;
class destruct {
public:
    destruct() {
        count++;
        cout << "Number of objects created: " << count << endl;
    }
    ~destruct() {
        count--;
        cout << "Number of objects destroyed: " << count << endl;
    }
};
int main() {
    destruct d1, d2, d3;
    {
        destruct d4;
    }
    return 0;
}
