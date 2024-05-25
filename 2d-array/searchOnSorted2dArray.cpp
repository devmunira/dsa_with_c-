#include <iostream>
using namespace std;

int sortedSearchByBrutForce(int array[][5], int n, int m, int key){
    int traverse = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            traverse++; 
            if(array[i][j] == key){
                cout << "Brut force: Found key on (" << i << ", " << j << ") traverse almost :" << traverse << " times \n";
                return 1;
            }
        }
       traverse++; 
    }
    cout << "Brut force: Not found! traverse almost :" << traverse << " times \n";
    return -1;
}

int sortedBinarySearchByRow(int array[][5], int n, int m, int key){
    int traverse = 0;

    for (int i = 0; i < n; i++)
    {
        int start = 0;
        int end = m-1;
        while (start <= end){
        int middle = start + (end - start) / 2;
            traverse++;
            if(array[i][middle] == key){
                cout << "Binary Search: Found key on (" << i << ", " << middle << ") traverse almost :" << traverse << " times \n";
                return 0;
            }else if(array[i][middle] > key){
                end   =   middle - 1;
            }else{
                start = middle + 1;
            } 
        }
        traverse++;
    }
    

    cout << "Binary Search: Not found! traverse almost :" << traverse << " times \n";
    return -1;
}

int sortedBinarySearchByStairSearch(int array[][5], int n, int m, int key){
    int traverse = 0;
    int i = 0, j = m-1;

    while (i < n && j >= 0)
    {
        traverse++;
        if(array[i][j] == key){
            cout << "Stair Search: Found key on (" << i << ", " << j << ") traverse almost :" << traverse << " times \n";
            return 0;
        }else if(array[i][j] > key){
            j--;
        }else{
            i++;
        }
    }
    

    cout << "Binary Search: Not found! traverse almost :" << traverse << " times \n";
    return -1;
}

//r++, c--;

// r < n && c < m

int main(){
    int array[5][5] = {
        {1, 5, 9, 13, 17}, // 0, m-1, 
        {2, 6, 10, 14, 18},
        {3, 7, 11, 15, 19},
        {4, 8, 12, 16, 20},
        {21, 22, 23, 24, 25}
    };
    sortedSearchByBrutForce(array, 5, 5, 10);
    sortedBinarySearchByRow(array, 5, 5, 24);
    sortedBinarySearchByStairSearch(array, 5, 5, 24);
    return 0;
}
