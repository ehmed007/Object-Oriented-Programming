#include <iostream>
#include <stdlib.h>

using namespace std;

class CWH {
    protected:
        float rating;
        string title;
    public:
        CWH(float r, string t) {
            rating = r;
            title = t;
        }
        // here's trick
        virtual void display(void) {}
};

class CWHvideo : public CWH {
    private:
        float video_length;
    public:
        CWHvideo(float r, string t, float v_l) : CWH(r, t) {
            video_length = v_l;
        }
        void display(void) {
            cout <<"\n\nVideo Title  : "<<title<<endl;
            cout <<"Video Rating : "<<rating<<" rating"<<endl;
            cout <<"Video Length : "<<video_length<<" mins"<<endl;
        }
};

class CWHtext : public CWH {
    private:
        int words;
    public:
        CWHtext(float r, string t, float wc) : CWH(r, t) {
            words = wc;
        }
        void display(void) {
            cout <<"\n\nText Title  : "<<title<<endl;
            cout <<"Text Rating : "<<rating<<" rating"<<endl;
            cout <<"Text Length : "<<words<<" words"<<endl;
        }
};

int main() {
    float rating,video_length;
    string title;
    int words;

    // first object
    rating = 4.99;
    video_length = 45;
    title = "Learn C++ for free";
    CWHvideo obj(rating, title, video_length);
    // obj.display();

    // second object
    rating = 4.87;
    title = "Learn C++ for free";
    words = 300;
    CWHtext obj1(rating, title, words);
    // obj1.display();

    // pointers
    CWH* ptr = &obj;
    CWH* ptr1 = &obj1;
    ptr->display();
    ptr1->display();
    return 0;
}