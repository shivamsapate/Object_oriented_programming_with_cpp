//private data members
#include<iostream>
using namespace std;

class Human{
    private:  //private data members are accessable in class and methods of class
        int age;
        void getage(){
            cout<<"my age is "<<age-3;
        }
        

    public:
        void setname(int a){
            age = a;
            getage();
        }
        
};

int main(){
    Human shivam;
    shivam.setname(21);

}