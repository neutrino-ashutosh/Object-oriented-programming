// understanding object oriented programming in c++
#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a; int b;

    public:
    void set_data(int x, int y){
        a = x ;
        b = y ;
    }
    void show_data(){
        cout<<"\n a="<< a <<" b="<<b;
    }
    Complex add (Complex c){
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
};


int main(){
    system("CLS");

    Complex c1, c2, c3;
    c1.set_data(3, 4);
    c2.set_data(5, 6);
    c3 = c1.add(c2);
    c3.show_data();

    return 0;
}