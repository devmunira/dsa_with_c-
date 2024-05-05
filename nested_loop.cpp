#include <iostream>
using namespace std;

int main () {
    int n = 9;

    // print a square patterns
    // 0 0 0 0 0 0 0 0 0 0 
    // 1 1 1 1 1 1 1 1 1 1 
    // 2 2 2 2 2 2 2 2 2 2 
    // 3 3 3 3 3 3 3 3 3 3 
    // 4 4 4 4 4 4 4 4 4 4 
    // 5 5 5 5 5 5 5 5 5 5 
    // 6 6 6 6 6 6 6 6 6 6 
    // 7 7 7 7 7 7 7 7 7 7 
    // 8 8 8 8 8 8 8 8 8 8 
    // 9 9 9 9 9 9 9 9 9 9 
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << i << " ";
        }
       cout << endl; 
    }


    // print a start pattern
    // 0 
    // 1 1 
    // 2 2 2 
    // 3 3 3 3 
    // 4 4 4 4 4 
    // 5 5 5 5 5 5 
    // 6 6 6 6 6 6 6 
    // 7 7 7 7 7 7 7 7 
    // 8 8 8 8 8 8 8 8 8 
    // 9 9 9 9 9 9 9 9 9 9
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i << " ";
        }
       cout << endl; 
    }


    // print a Inverted Star pattern like this
    // A 
    // B C 
    // D E F 
    // G H I J 
    // K L M N O 
    // P Q R S T U 
    // V W X Y Z [ \ 
    // ] ^ _ ` a b c d
    char cha = 'A';
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++)
        {
            cout << cha << " ";
            cha++;
        }
       cout << endl; 
    }

    // Print the 0-1 Triangle Pattern
    // 1
    // 01
    // 101
    // 0101
    // 10101
    // 010101
    // 1010101
    // 01010101
    // 101010101
    int val = 1; // loop starting value
    for (int i = 1; i <= n; i++)
    {
        int p = val;
       for (int j = 1; j <= i; j++)
       {
            cout << p < " ";
            p = !p; 
       }
       val = !val; //after every inner loop execute update the starting value
       cout << endl; 
    }


    // Print the Rhombus Pattern
    //         *********
    //        *********
    //       *********
    //      *********
    //     *********
    //    *********
    //   *********
    //  *********
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout << " ";
        }

        for (int j = 1; j <= n; j++)
        {
            cout << "*";
        }

        cout << endl;   
    }


    // Print the Rhombus Pattern
    //         *********
    //        *********
    //       *********
    //      *********
    //     *********
    //    *********
    //   *********
    //  *********
    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j <= (n-i); j++)
        {
            cout << " ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

         for (int j = 2; j <= i; j++)
        {
            cout << j;
        }


        cout << endl;   
    }
    
    

    return 0;
}