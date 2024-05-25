#include <iostream>
using namespace std;

int dignomialSum(int array[][5], int n, int m){
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += array[i][i];
        if(i != (n-i-1)){
            sum += array[i][n-i-1];
        }
    }
    return sum; 
}

int main(){
    int array[5][5] = {
    {11, 21, 3, 44, 35}, // 0,0 + 0,n-i-1
    {16, 17, 18, 19, 6}, // 1,1 + 1,n-i-1
    {15, 24, 25, 20, 7}, // 2,2 + 0,n-i-1
    {14, 23, 22, 21, 8}, // 3,3 + 0,n-i-1
    {13, 12, 11, 10, 9}  // 4,4 + 0,n-i-1
};
    cout << dignomialSum(array, 5, 5) << endl;
    return 0;
}
