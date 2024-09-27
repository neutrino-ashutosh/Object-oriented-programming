// understanding object oriented programming in c++
#include <bits/stdc++.h>
using namespace std;

class Complex{
    private:
    int a; int b;

    public:
    void set_data(int , int ){

    }
    void show_data(){
        cout<<"\n a="<< a <<" b="<<b;
    }
};

void Complex::set_data(int x, int y){
    a = x ;
    b = y ;
}

int main(){
    system("CLS");

    Complex c1;
    c1.set_data(3, 4);
    c1.show_data();
}