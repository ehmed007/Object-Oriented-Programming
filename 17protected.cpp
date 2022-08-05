/*
// >>>>>>>>>>>>>>>>>>>>>For public derivation
#include <iostream>
#include <stdlib.h>

using namespace std;

                   Public Derivation  Private Derivation  Protected Derivation

Private members    Not Inherited    Not Inherited   Not Inherited              
Protected members  Protected        Private   	    Protected                    
Public members     Public	        Private         Protected                    


class base {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void setdata(int x) {
            a = x;
        }
        int getdata() {
            return a;
        }
};

class derived : public base {
    public:
        // another way for B
        void setvaluefor_B(int y) {
            b = y;
        }
        void diplay() {
            b = 20;// protected b can be accesssed in derived 
            // class as public variables
            cout <<getdata()<<" "<<b<<" "<<c;
        }
};

int main() {
    derived obj;
    obj.setdata(10);
    // obj.setvaluefor_B(20) >>>>another option for B
    obj.c = 30;
    obj.diplay();
    return 0;
}
*/

//>>>>>>>>>>>>>>>> For private derivation
#include <iostream>
#include <stdlib.h>

using namespace std;
/*
                   Public Derivation  Private Derivation  Protected Derivation

Private members    Not Inherited    Not Inherited   Not Inherited              
Protected members  Protected        Private   	    Protected                    
Public members     Public	        Private         Protected                    
*/

class base {
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        void setdata(int x){
            a = x;
        }
        int getdata() {
            return a;
        }
};

class derived : private base {
    public:
        void setvaluefor_A(int i) {
            setdata(i);
        }
        // another way for B
        /*
        void setvaluefor_B(int y) {
            b = y;
        }*/
        void setvaluefor_C(int j) {
            c = j;
        }
        void diplay() {
            b = 20;// protected b can be accesssed in derived 
            // class as public variables
            cout <<getdata()<<" "<<b<<" "<<c;
        }
};

int main() {
    derived obj;
    obj.setvaluefor_A(10);
    // obj.setvaluefor_B(20) >>>>another option for B
    obj.setvaluefor_C(30);
    obj.diplay();
    return 0;
}