#include <iostream>
#include <stdlib.h>

using namespace std;

class num {
    public:
        num() {
            cout <<"constructor run"<<endl;
        }
        ~num() {// destructor used to free memory or other works
            cout <<"destructor run"<<endl;
        }
};
// destructor tab run hota ha compiler ko pata ho
// iska scope abh end ho raha.
// jese nichy ik block se andaza hoga apko
int main() {
    num a;
    // block for checking the contructor by its scope  
    {
        num b;
    }
    cout <<"\ncontructor and destructor run for b "<<endl;
    cout <<"\nlast one is for a "<<endl;
    return 0;
}