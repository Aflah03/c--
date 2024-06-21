#include<iostream>
#include<string>
using namespace std;
int main(){
string food = "mandi";
string &meal = food;
cout << meal;

food = "beaf";
cout << endl << meal;
cout << endl << &meal;
   }
   
