#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter number:";
    cin>>num;

    if(num > 0){
        cout << num << " is a positive number" <<endl;
    }else{
        cout << num << " is a negative number" <<endl;
    }

    bool isLeap;
    int year;
    cout<<"Enter year:";
    cin>>year;

    if(year % 400 == 0){
       cout << year << " is a leap year" <<endl; 
    }else if(year % 4 == 0){
        cout << year << " is a leap year" <<endl; 
    }else{
        cout << year << " is not a leap year" <<endl;
    }
}