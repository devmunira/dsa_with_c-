#include <iostream>
using namespace std;


void printArray (int *array, int count){
    for (int i = 0; i < count; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}


int bubbleSort(int *array, int count){
    int newArray[count];
    copy(array, array + count , newArray);
    for (int i = 0; i < count; i++)
    {
        for (int j = i+1; j < count; j++)
        {
            if(newArray[i] > newArray[j]){
                swap(newArray[i], newArray[j]);
            }
        }
        
    }
    printArray(newArray, count);
    return 0;
}


int selectionSort(int *array, int count){
    int newArray[count]; 
    copy(array, array+count, newArray);

    for (int i = 0; i < count - 1; i++)
    {
        int index = i;
        for (int j = i + 1; j < count; j++)
        {
            if(newArray[j] < newArray[index]){
                index = j;
            }
        }
        swap(newArray[i], newArray[index]);    
    }
    
    printArray(newArray, count);
    return 0;
}


int countingSort(int *array, int count){
    int newArray[count];
    copy(array, array + count, newArray);

    int minVal = 0;
    int maxVal = INT_MIN;
    int frequencyArray[100000];

    for (int i = 0; i < count; i++)
    {
        frequencyArray[newArray[i]]++;
        minVal = min(minVal, newArray[i]);
        maxVal = max(maxVal, newArray[i]);
    }
    
    for (int i = minVal, j = 0; i <= maxVal; i++)
    {
        while (frequencyArray[i] > 0)
        {
            newArray[j++] = i;
            frequencyArray[i]--;
        }
        
    }
    printArray(newArray, count);
    return 0;
}


int insertionSort(int *array, int count){
    for (int i = 1; i < count; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if(array[i] < array[j]){
                swap(array[i], array[j]);
            }
        }
        
    }
    printArray(array, count);
    return 0;
}



int main(){
    int array[10] = {3,6,2,1,8,7,4,5,3,1};
    cout << "Bubble Sort = " << bubbleSort(array, 10) << endl;
    cout << "Selection Sort = " << selectionSort(array, 10) << endl;
    cout << "Insertion Sort = " << insertionSort(array, 10) << endl;
    cout << "Counting Sort = "  << countingSort(array, 10) << endl;
    return 0;
}