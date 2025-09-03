//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
int count = 0;
class date{
public:
    int d = 27;
    int m = 8;
    int y = 2025;
    ~date() {
        count++;
        cout << "Destructor Called!! Count = " << count << endl;
    }
};
int main(){
    date d1, d2, d3, d4;
    int i;
    for(i=0; i<4; i++) {
        date temp;  
    }
    return 0;
}
