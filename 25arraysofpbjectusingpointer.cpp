#include <iostream>
#include <stdlib.h>

using namespace std;

class shop {
    private:
        int id;
        float price;
    public:
        void set_data() {
            cout << "enter code of Item   : ";
            cin >> id;
            cout << "enter price for Item : ";
            cin >>price;
        }
        void get_data(void) {
            cout << "Code of the Item  : "<<id<<endl;
            cout << "Price of the Item : "<<price<<endl;
        }
};

int main() {
    // shop *ptr = (shop *)malloc(sizeof(shop));
    shop *ptr = new shop[5];
    // taking data
    shop *ptr1 = ptr;
    for (int i=0; i<5; i++) {
        ptr->set_data();
        ptr++;
    }
    cout <<endl;
    for (int i=0; i<5; i++) {
        ptr1->get_data();
        ptr1++;
    }
    return 0;
}