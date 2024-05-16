#include<iostream>
using namespace std;

int main () {
    int x;
    int *ptr = &x;
    *ptr = 200;
    cout << x << *ptr << endl;
    return 0;
}
