#include<iostream>
#include<string>
using namespace std;
// int main(){
// class MyClass{
//     public:
//         int num;
//         string str;

//     };
//     MyClass myobject;
//     myobject.num = 15;
//     myobject.str = "Aflah";

//     cout << myobject.num <<endl;
//     cout << myobject.str ;
// }
class Car{
    public :
    string brand;
    int year;
    string model;

};

class MyClass{
    public:
        void newMethod(); //method declaration , definiton outside also can be done
        void myMethod(){
            cout << "Hello World\n";
        }
        
};

 void MyClass :: newMethod() {
        cout << "New method";

    }
int main(){
    Car car1;
    car1.model = "M5";
    car1.brand  = "BMW";
    car1.year = 2020;
    cout <<"1: "<<car1.brand<<" "<<car1.model<<" "<< car1.year<< endl;

    MyClass myobj;
    myobj.myMethod();
    myobj.newMethod();
    
    
}