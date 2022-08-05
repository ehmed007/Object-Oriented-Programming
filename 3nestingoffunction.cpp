#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

class binary {
    private:
        char s[50];
        char n[50];
        void checkbinary();//nesting of a function
    public:
        binary() {
            cout << "ahmed ";
        }
        void getdata();
        void onescompliment();
        void display();
};

void binary :: getdata() {
    cout <<"enter any number to check binary and take 1's compliment : "<<endl;
    cin >>s;
    for (int i=0; i<strlen(s); i++) {
        n[i] = s[i];
    }
}

void binary :: checkbinary() {
    for (int i=0 ; i<strlen(s); i++) {
        if (s[i] != '0' && s[i] != '1') {
            cout <<"number is not a binary"<<endl;
            exit(0);
        }
    } 
    cout <<"number is binary"<<endl;
}

void binary :: onescompliment() {
    checkbinary();//function is nested
    for (int i=0; i<strlen(s); i++) {
        if (s[i] == '0') {
            s[i] = '1';
        } else {
            s[i] = '0';
        }
    }
}

void binary :: display() {
    cout <<"ones complement of ";
    for (int i=0; i<strlen(n); i++) {
        cout <<n[i];
    }
    cout <<" is "<<s<<endl;
}

// driver program
int main() {
    binary num;
    num.getdata();
    // num.checkbinary();
    num.onescompliment();
    num.display();
    return EXIT_SUCCESS;
}