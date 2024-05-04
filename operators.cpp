#include <iostream>
using namespace std;

int main(){
    // ()[], increment, decrement,  */%,+-, relational, logical, conditional, assignment

    // get positive, negation or zero value
    int number;
    cout << "Enter number:";
    cin>>number;

    if(number > 0){
        cout << number << " is a positive value"<<endl;
    }else if(number < 0){
        cout << number << " is a negative value"<<endl;
    }else{
        cout << number << " is a Zero"<<endl;
    }


    // find leap year
    int year;
    cout << "Enter year:";
    cin >> year;

     if(year % 4 == 0){
        cout << year << " is a leap year"<<endl;
    }else if(year % 400 == 0){
        cout << year << " is a leap year"<<endl;
    }else{
        cout << year << " is not a leap year"<<endl;
    }


    // find the armstrong number
    typedef int customInt;
    customInt number;
    cout << "Enter 3 digit number:";
    cin >> number;

    customInt n = number;
    customInt firstDigit = number % 10;
    n = n / 10;
    customInt secDigit = n % 10;
    n = n /10;
    customInt last = n;

    cout<< firstDigit << secDigit << last;

    const customInt sum = firstDigit*firstDigit*firstDigit + secDigit*secDigit*secDigit + last*last*last;

    if(number == sum){
        cout<<"True"<<endl;
    }else{
        cout<<"False"<<endl;
    }


    int tableOf;
    cout<< "Enter number for print your table:";
    cin >> tableOf;

    for(int i = 0; i <= 10; i++){
        cout << tableOf << " * " << i << " = " << tableOf * i << endl;
    }
    return 0;


    int number;
    cout<< "Enter a prime number for print prime:";
    cin >> number;
    bool isPrime = true;

    for(int i = 2; i <= number - 1; i++){
        if(number % i == 0){
            isPrime = false;
            break;
        }
    }

    isPrime ? cout << number << " is prime" : cout << number << " is not prime";
    return 0;

    
    
    // WAP that prints the first N Fibonacci numbers
    int n;
    cout << "Enter length:";
    cin >> n;

    int  firstN = 0;
    int  secN = 1;
    
    cout << firstN << ' ' << secN <<' ';
    for (int i = 2; i < n; i++)
    {
       int lastN = firstN + secN;
       cout << lastN << ' ' ;
       firstN = secN;
       secN = lastN;
    }
    
    cout << endl;
}