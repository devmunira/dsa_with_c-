##Selection Sort:##

Selection sort is a simple sorting algorithm that iterates through the array, selecting the smallest element from the unsorted portion and swapping it with the element at the beginning of the unsorted portion.

##Example:##

Consider the array `[4, 2, 1, 5, 3]` that we want to sort in ascending order.

1. ##Iteration 1:## Find the smallest element in the entire array (`1`) and swap it with the first element (`4`). The array becomes `[1, 2, 4, 5, 3]`.

2. ##Iteration 2:## Move to the next position in the array (`2`). Find the smallest element in the remaining unsorted portion (`2`) and swap it with the second element (`2`). The array remains `[1, 2, 4, 5, 3]` as the smallest element (`2`) is already in its correct position.

3. ##Iteration 3:## Move to the next position in the array (`4`). Find the smallest element in the remaining unsorted portion (`3`) and swap it with the third element (`4`). The array becomes `[1, 2, 3, 5, 4]`.

4. ##Iteration 4:## Move to the next position in the array (`5`). Find the smallest element in the remaining unsorted portion (`4`) and swap it with the fourth element (`5`). The array becomes `[1, 2, 3, 4, 5]`.

5. ##Iteration 5:## The entire array is now sorted. No further iterations are needed.

##Final Sorted Array:## `[1, 2, 3, 4, 5]`

##Time Complexity:##

- The time complexity of selection sort is O(n^2), where n is the number of elements in the array.
- It involves nested loops where each iteration selects the smallest element from the unsorted portion.
- Despite its simplicity, it's not the most efficient sorting algorithm, particularly for large datasets.
