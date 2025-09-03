//Name : Ninad Phatak
//PRN : 24070123065
//Batch : ENTC A3
#include <iostream>
using namespace std;
class Book {
    string Book_name;
    string Author_name;
    int Price;
public:
    Book(string b, string a, int p) {
        Book_name = b;
        Author_name = a;
        Price = p;
    }
    Book(const Book &s) {
        Book_name = s.Book_name;
        Author_name = s.Author_name;
        Price = s.Price;
        cout << "constructor called !!" << endl;
    }
    void display() {
        cout << "Book Name: " << Book_name << "\nAuthor Name: " << Author_name << "\nPrice: " << Price << endl;
    }
};
int main() {
    Book s("Harry Potter ", "JK Rowling", 700); 
    s.display();
    Book copyS(s);   
    copyS.display();
    return 0;
}
