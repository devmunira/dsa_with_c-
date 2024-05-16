#include<iostream>
using namespace std;

void linearSearch(int array[], int length, int key){
    for (int i = 0; i < length; i++)
    {
        if(array[i] == key){
            cout << i << endl;
            break;
        }
    }
}

int binarySearch(int array[], int length, int key){
    int start = 0;
    int end = length - 1 ;

    while (start <= end)
    {
        int mid = (start + end) / 2;

        if(array[mid] == key){
            return mid;
        }else if(array[mid] < key) {
            start = mid + 1;
        }else{
            end = mid -1;
        }
    }

    return -1;
   
}


void reverseArray(int array[], int length){
    int copyArray[length];
    for (int i = 0; i < length; i++)
    {
        int j = length - i -1;
        copyArray[i] = array[j];
    }
    cout << *(copyArray) << " " << *(array) << endl;
}


void subArrayCount(int array[], int length) {
// print total subArray count
 cout << length * (length + 1) / 2 << endl;

    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << array[k]  << "";
            }  
            cout << ", ";          
        }
        cout << endl;
    }

}

int subArraySumKadans (int array[], int length) {
    int maxVal = INT_MIN;
    int sum = 0;
    int subArray[] = {};
    for (int i = 0; i < length; i++)
    {
        sum += array[i];
        maxVal = max(maxVal, sum);
        if(sum > 0) sum = 0;
        if(sum > maxVal){ // 0
           int length = sizeof(subArray) / sizeof(int);
           cout <<  "Length" << length << endl;
           subArray[length] = array[i];
        }
    }
    cout << subArray << endl;
    return maxVal;
    
}


void countMaxSubArraySum (int array[], int length) { // Brut Force Approach time complexity O(n3)
    int maxVal = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        for (int j = i; j < length; j++)
        {
            int sum = 0;

            for (int k = i; k <= j; k++)
            {
                sum += array[k];
            }
            maxVal = max(maxVal, sum);
            cout << sum << ", ";
        }
       cout << endl; 
    }
    cout << "Maximum sum is = " << maxVal << endl;  
}


void countMaxSubArraySumOptimized (int array[], int length) { // Optimized Approach O(n2)
    int maxVal = INT_MIN;
    for (int i = 0; i < length; i++)
    {
        int sum = 0;
        for (int j = i; j < length; j++)
        {
           sum += array[j];
        }
        maxVal = max(maxVal, sum);
    }
    cout << "Maximum sum is = " << maxVal << endl;   
}



int main () {
    int array[] = {1,2,3,4,5};
    int array2[] = {2, -3, 4, -5, 6,4,2};
    int length = sizeof(array) / sizeof(int);
    int length2 = sizeof(array2) / sizeof(int);
    linearSearch(array, length, 89); // Time Complexity is O(n)
    cout << "Binary - " << binarySearch(array, length, 2) << endl; // time complexity O(log n)
    reverseArray(array, length); // Time Complexity is O(n)
    subArrayCount(array, length); // Time Complexity is O(n3)
    countMaxSubArraySum(array2, length); // Time Complexity is O(n3)
    countMaxSubArraySumOptimized(array2, length2); // Time Complexity is O(n2)
    subArraySumKadans(array2, length2);
    return 0;
}


