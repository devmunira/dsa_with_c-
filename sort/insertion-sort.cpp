#include<iostream>
using namespace std;

void print (int *array, int count){
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << ", ";
    }

    cout << endl;
    
}

// {7,9,11,15};
int insertionSort(int *array, int count) {
   for (int i = 1; i < count; i++)
   {
        int cur = array[i];
        int prev = i - 1;

        while (prev >= 0 && array[prev] > cur)
        {
            cout << array[prev] << ", " << cur << endl;
            swap(array[prev], array[prev+1]);
            prev--;
            print(array, count);
        }
        cout << "=====================" << endl;  
        array[prev+1] = cur;
        print(array, count);  
        cout << "=====================" << endl;  
        cout << "=====================" << endl;  
        cout  << endl;  
   }
//    print(array, count);
   cout << endl;
   return 0;
   
}



int main () {
    int array[] = {7,9,11,15};
    int count = sizeof(array) / sizeof(int);
    int array1[] = {3,2,4};
    int count1 = sizeof(array1) / sizeof(int);
    int array2[] = {3,3};
    int count2 = sizeof(array2) / sizeof(int);


    insertionSort(array, count);
    // insertionSort(array1, count1);
    // insertionSort(array2, count2);
    return 0;
}
