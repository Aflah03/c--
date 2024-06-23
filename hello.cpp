#include<iostream>
#include<string>
using namespace std;
// // int main(){
// // class MyClass{
// //     public:
// //         int num;
// //         string str;

// //     };
// //     MyClass myobject;
// //     myobject.num = 15;
// //     myobject.str = "Aflah";

// //     cout << myobject.num <<endl;
// //     cout << myobject.str ;
// // }
// class Car{
//     public :
//     string brand;
//     int year;
//     string model;

// };

// class MyClass{
//     public:
//         void newMethod(); //method declaration , definiton outside also can be done
//         void myMethod(){
//             cout << "Hello World\n";
//         }
        
// };

//  void MyClass :: newMethod() {
//         cout << "New method";

//     }
// int main(){
//     Car car1;
//     car1.model = "M5";
//     car1.brand  = "BMW";
//     car1.year = 2020;
//     cout <<"1: "<<car1.brand<<" "<<car1.model<<" "<< car1.year<< endl;

//     MyClass myobj;
//     myobj.myMethod();
//     myobj.newMethod();
    
    
// }

// class Car{
//     public :
//         int speed(int max_speed);
// };
// int Car::speed(int max_speed){
//     return max_speed;
// }
// int main(){
//     Car car_obj;
//     cout << car_obj.speed(200);
// }

//CONSTRUCOR Automatically gets called when an objec of the class is created

// class MyClass{
//     public:
//         MyClass(){//constructor (no data type this is not same as method)
//             cout << "new object of my class has been created";
//         }
// };
// int main(){
//     MyClass myobj; //automatically calls constructor

// }

// class Car{
//     public:
//         string brand;
//         string model;
//         int year;
//         Car(string x,string y, int z){
//             brand = x;
//             model = y;
//             year = z;
//             }
// };
// int main(){
//     Car car1("BMW","M5",2020),car2("BMW","M3",2021);
//    cout << car1.brand << " " << car1.model << " " << car1.year << "\n";
//   cout << car2.brand << " " << car2.model << " " << car2.year << "\n";
//   return 0;
    
// }



class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  return 0;
}
fb