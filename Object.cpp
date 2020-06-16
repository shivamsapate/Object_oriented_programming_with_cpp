//object demo
#include<iostream>
using namespace std;

class Human{  // create a class with class keyword
    public:
        void introduce(){
            cout<<"i am human";
        }
};

int main(){
    Human shivam; //kcreate a objet using a class name
    shivam.introduce();

}