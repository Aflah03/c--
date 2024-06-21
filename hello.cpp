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
int main(){
    Car car1;
    car1.model = "M5";
    car1.brand  = "BMW";
    car1.year = 2020;
    cout <<"1: "<<car1.brand<<" "<<car1.model<<" "<< car1.year;
    
}