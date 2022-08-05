#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 89;
    cout <<"value : "<<ptr[0]<<endl;

    int *ptr1 = new int[5];
    for (int i=0; i<5; i++) {
        cin >>*(ptr1+i);
    }
    for (int i=0; i<5; i++) {
        cout <<*(ptr1+i)<<endl;
    }
    delete[] ptr1;
    for (int i=0; i<5; i++) {
        cout <<*(ptr1+i)<<endl;
    }
    return 0;
    char *ptr3 = new char('c');
    cout <<"vlue : "<<*ptr3<<endl;
    string *ptr4 = new string("ahmed");
    cout <<"name : "<<*ptr4<<endl;
    delete ptr;
    delete ptr3;
    delete ptr4;
    *ptr3 = 't';
    cout <<"vlue : "<<*ptr3<<endl;
    cout <<"name : "<<*ptr4<<endl<<endl;
    
    return 0;
}