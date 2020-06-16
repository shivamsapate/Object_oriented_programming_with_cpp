//constructor demo
#include<iostream>
using namespace std;

class Human{  
    
    public:
        Human(){//this is default constructor
            //constructor is a special type of function which has similar name as a class which is used for initialize purpose
        cout<<"Constructor of class human";
    }
        void introduce(){
            cout<<"\ni am human";
        }
};

int main(){
    Human shivam; //constructor is automatically called when object is created known as default constructor
    shivam.introduce();

}