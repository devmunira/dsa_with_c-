// the side of a square
#include<iostream>
using namespace std;

int main(){
    int side;
    cout<<"Enter side:";
    cin>> side;

    cout<<"Side of a square:"<<(side * side)<<endl;

    float pencil;
    float pen;
    float book;

    cout<<"Enter price of pencil:";
    cin>>pencil;

    cout<<"Enter price of pen:";
    cin>>pen;


    cout<<"Enter price of book:";
    cin>>book;

    float sum = (pencil + pen + book);

    cout<<"Total price with 15% GST:"<< (sum * 0.15) + sum << endl;

    return 0;
}
