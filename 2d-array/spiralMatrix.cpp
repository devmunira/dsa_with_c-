#include <iostream>
using namespace std;

void spiralMatrix(int array[][5], int n, int m){

    int startRow = 0, startCol = 0;
    int endRow = n - 1, endCol = m -1;

    while (startRow <= endRow && startCol <= endCol)
    {
        // top
        for (int i = startCol; i <= endCol; i++)
        {
            cout << array[startRow][i] << " ";
        }

        // right
        for (int i = startRow + 1; i <= endRow; i++)
        {
            cout << array[i][endCol] << " ";
        }

        // bottom
        for (int i = endCol - 1; i >= startCol; i--)
        {
            cout << array[endRow][i] << " ";
        }

        // left
        for (int i = endRow - 1; i >= startRow + 1; i--)
        {
            cout << array[i][startCol] << " ";
        }

        startRow++; startCol++; endRow--; endCol--;
    }
}


int main(){
    int array[5][5] = {
    {11, 21, 3, 44, 35}, // startRow - (startCol to endCol)
    {16, 17, 18, 19, 6}, // endCol  -  (startRow +1 to endRow)
    {15, 24, 25, 20, 7}, // endRow - (endCol - 1 to startCol)
    {14, 23, 22, 21, 8}, // startCol - (endRow - 1 to startRow+1)
    {13, 12, 11, 10, 9}  // startRow++; startCol++; endCol--; endRow--;
};
    spiralMatrix(array, 5, 5);
    return 0;
}


// firstRow[0] to lastRow[m-1]
// firstRow[m-1] to lastRow[0]