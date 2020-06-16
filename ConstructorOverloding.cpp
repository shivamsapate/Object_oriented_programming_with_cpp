//constructor overloding
#include<iostream>
#include<string>
using namespace std;

class Human{  
    
    private:
        string name;
        int age;

    public:
        Human(){//this is default constructor
            //constructor is a special type of function which has similar name as a class which is used for initialize purpose
        cout<<"Constructor of class human";
        }
        Human(string s, int a){
            name = s;
            age  = a;
        }
        void getinfo(){
            cout<<"\ni am "<<name<<" and i am "<<age<<" old";
        }
};

int main(){
    Human shivam("shivam",21); //constructor is automatically called when object is created known as default constructor
    shivam.getinfo();

}