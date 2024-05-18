#include<iostream>
using namespace std;


void print (int *array, int count){
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;   
}


int selectionSort(int *array, int count) {
   for (int i = 0; i < count - 1; i++)
   {
        int Index = i;
        for (int j = i + 1; j < count; j++)
        {
           if(array[j] < array[Index]){
                Index = j;
            }
        }

        swap(array[i], array[Index]);
   }
   print(array, count);
   cout << endl;
   return 0;
   
}



int main () {
    int array[] = {64, 25, 12, 22, 11};
    int count = sizeof(array) / sizeof(int);
    int array1[] = {3,2,4};
    int count1 = sizeof(array1) / sizeof(int);
    int array2[] = {3,3};
    int count2 = sizeof(array2) / sizeof(int);


    selectionSort(array, count);
    selectionSort(array1, count1);
    selectionSort(array2, count2);
    return 0;
}
