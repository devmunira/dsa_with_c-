#include<iostream>
using namespace std;

int main () {
    int array[5] = {1,2,30,4,5};
    int max = array[0];
    int n = sizeof(array) / sizeof(int);
  
     for (int i = 1; i < n; i++)
    {
        if(max < array[i]){
            max = array[i];
        }
    }
    
    cout << max << endl;

    return 0;
}
