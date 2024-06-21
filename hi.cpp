// Your First C++ Program
#include<iostream>
#include<string>
using namespace std;
int factorial(int n);
int add(int num);

int main(){
//     cout << "Hello world\n" << endl;
//     cout << "NO?\n";
//     cout << "they call him \"Aflah\"\n";
//     int my_age = 18;
//     cout << "I am " <<my_age;

//     int x=5,y=6;
//     cout << "\n" << x+y<< "\n";
//     const int  constant1 = 15;
//     cout << constant1;
//     constant1= 12;// ERROR CANNOT CHA;NGE A CONSTANT VARIABLE 
// ALSO WITH CONSTANT VARIABLES , ASSIGNMENT SHOULD ALSOBE DONE IN THE SAME LINE
// }
    int x,y;
    cout <<"ENter numbers";
    cin >>x >>y;
    cout <<"Ysum is: "<<x+y;
    char c = 120;
    cout << c;
    
    // int x =16;
    // float y=18;
    // cout << y/x;

    // string name = "AFLAH";
    // cout << name;

    // string str1 = "HEy ";
    // cout <<"The lenght of thr string is: "<< str1.length() << "\n";
    // cout <<str1[2];
    // string txt = "Hi man my name is \"AFLAH\"";
    // cout << txt;

    // string first_name;
    // cout <<"ENter youu first name";
    // cin >> first_name;
    // cout <<"Your first name is: "<<first_name;

    // string full_name;
    // cout << "ENter your full name";
    // getline(cin,full_name);
    // cout << "your full name is: "<<full_name << "\n";
    
    // int x=10;
    // cout << (x==10);

    // int age;
    // cout << "enter your age";
    // cin >> age;
    
    // cout << (age>=18);

    // if(age>= 18)
    //     cout << "Eligible for voting";
    // else {
    //     cout << "NOT eleligiblefor voting";
        
    //     }

    // int age = 18;
    // string result = (age>=18) ? "eligible to vote":"noto elegible";//ternary operator
    // cout << result;


    // int day= 4;
    // switch(day){
    //     case 1:
    //         cout <<"monday";
    //         break;
    //     case 4:
    //         cout << "NO day";
    //         break;
    //     default:
    //         cout << " Invalid entry";
    // }
    // int num=0;
    // do{
    //     cout << num <<"\n";
    //     num++;
    // }while(num<10); //exit control  while(){} implies entry control
    // in do while exit is controlled
   
   //do while loop -runs first time without checking condn
    //This loop will execute the code block once, before checking if the
    // condition is true, 
    //then it will repeat the loop as long as the condition is true.
   
//    int num1 = 0;
//     while(num1<10){
//         cout << num1 << "\n";
//         num1++;

//     }
            
            //FOR LOOp
//When you know exactly how many times you want to loop through a block of code,
    // use the for loop instead of a while loop:

    // int my_numbers[5] = {1,2,3,4,5};
    // for(int i=0;i<5;i++){
    //     cout << my_numbers[i];
    // }

    // string cars[5] = {"BMV","AUDI","M5","M2","G6"};

    // for(int i=0;i<5;i++){
    //     cout << i+1 << " = " << cars[i] <<"\n";
    // }

    // struct{
    //     string name;
    //     int age;
    // }name_of_my_struct1,my_struct2,my_struct3;


    // string food = "Pizza";
    // string &meal = food; //meal is not a pointer variable,so this statement
    // // stores value of food at adress of meal 

    // cout << &meal << "\n";
    // cout << meal << "\n";
    // cout << &food << "\n"; // Outputs 0x6dfed4 
            

    // string food = "Pizza";
    // string *ptr = &food;

    // cout << ptr << " \n";
    // cout << *ptr;
    //*ptr = "BAMBU";        

//     int num=5,f;
//     f= factorial(num);            
//     cout << "\n" << f<<"\n";
// }
// int factorial(int n=5){
//     if(n==0 || n==1)
//         return 1;
//     else{
//         return n*factorial(n-1);
//     }
    
    
// }
// int add(int num){
//     //adding upto num
//     while(num>1){
//         return num + add(num-1);
//     }
    
}
