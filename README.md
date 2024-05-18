## Selection Sort:

Selection sort is a simple sorting algorithm that iterates through the array, selecting the smallest element from the unsorted portion and swapping it with the element at the beginning of the unsorted portion.

## Example:

Consider the array `[4, 2, 1, 5, 3]` that we want to sort in ascending order.

1. Iteration 1: Find the smallest element in the entire array (`1`) and swap it with the first element (`4`). The array becomes `[1, 2, 4, 5, 3]`.

2. Iteration 2: Move to the next position in the array (`2`). Find the smallest element in the remaining unsorted portion (`2`) and swap it with the second element (`2`). The array remains `[1, 2, 4, 5, 3]` as the smallest element (`2`) is already in its correct position.

3. Iteration 3: Move to the next position in the array (`4`). Find the smallest element in the remaining unsorted portion (`3`) and swap it with the third element (`4`). The array becomes `[1, 2, 3, 5, 4]`.

4. Iteration 4: Move to the next position in the array (`5`). Find the smallest element in the remaining unsorted portion (`4`) and swap it with the fourth element (`5`). The array becomes `[1, 2, 3, 4, 5]`.

5. Iteration 5: The entire array is now sorted. No further iterations are needed.

Final Sorted Array: `[1, 2, 3, 4, 5]`

## Time Complexity:

- The time complexity of selection sort is O(n^2), where n is the number of elements in the array.
- It involves nested loops where each iteration selects the smallest element from the unsorted portion.
- Despite its simplicity, it's not the most efficient sorting algorithm, particularly for large datasets.

## Bubble Sort:

Bubble sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. The pass through the list is repeated until the list is sorted.

## Example:

Consider the array `[5, 3, 8, 2, 1]` that we want to sort in ascending order.

1. Iteration 1: Compare the first two elements (`5` and `3`). Since `5` is greater than `3`, swap them. The array becomes `[3, 5, 8, 2, 1]`.
   Repeat this process for each adjacent pair of elements in the array.

2. Iteration 2: Now, the largest element (`8`) has bubbled up to the end of the array. Repeat the comparison and swapping process until the second largest element (`5`) bubbles up to the second last position.

3. Iteration 3: Repeat the process until the third largest element (`3`) is bubbled up to the third last position.

4. Iteration 4: Repeat the process until the fourth largest element (`2`) is bubbled up to the fourth last position.

5. Iteration 5: After all iterations, the smallest element (`1`) bubbles up to the first position, and the array becomes sorted.

Final Sorted Array: `[1, 2, 3, 5, 8]`

## Time Complexity:

- The time complexity of bubble sort is O(n^2), where n is the number of elements in the array.
- It involves nested loops where each pass through the list compares adjacent elements and possibly swaps them.
- Despite its simplicity, bubble sort is not efficient for large datasets due to its quadratic time complexity. It's mainly used for educational purposes or for sorting small datasets.

## Prime Numbers:

A prime number is a natural number greater than 1 that has no positive divisors other than 1 and itself. In other words, it's a number that is divisible only by 1 and itself.

## Checking for Prime:

To determine if a number is prime, we need to check if it's divisible by any number other than 1 and itself. One efficient way to do this is to iterate through the numbers from 2 up to the square root of the given number and check if any of these numbers divide the given number evenly.

## Example:

Let's check if the number 7 is prime:

1. Start with the number 7.
2. Check divisibility by numbers from 2 up to the square root of 7 (which is approximately 2.65, so we check divisibility by numbers 2 and 3).
3. Neither 2 nor 3 divides 7 evenly, so 7 is a prime number.

Final Result: 7 is a prime number.

## Time Complexity:

The time complexity of checking if a number is prime using this method is approximately O(√n), where n is the given number. This is because we iterate through numbers up to the square root of n to check for divisibility.

## Fibonacci Series:

The Fibonacci series is a sequence of numbers where each number is the sum of the two preceding ones, usually starting with 0 and 1. The sequence goes: 0, 1, 1, 2, 3, 5, 8, 13, 21, and so on.

## Generating Fibonacci Series:

1. Start with the first two numbers of the sequence, which are typically 0 and 1.
2. Each subsequent number in the sequence is the sum of the two preceding numbers.
3. Repeat this process to generate as many numbers in the sequence as needed.

## Example:

Let's generate the first 10 numbers in the Fibonacci series:

1. Start with 0 and 1.
2. Next number is the sum of the preceding two numbers: 0 + 1 = 1.
3. Next number is the sum of the preceding two numbers: 1 + 1 = 2.
4. Next number is the sum of the preceding two numbers: 1 + 2 = 3.
5. Next number is the sum of the preceding two numbers: 2 + 3 = 5.
6. Next number is the sum of the preceding two numbers: 3 + 5 = 8.
7. Next number is the sum of the preceding two numbers: 5 + 8 = 13.
8. Next number is the sum of the preceding two numbers: 8 + 13 = 21.
9. Next number is the sum of the preceding two numbers: 13 + 21 = 34.
10. Next number is the sum of the preceding two numbers: 21 + 34 = 55.

So, the first 10 numbers in the Fibonacci series are: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55.

## Time Complexity:

The time complexity of generating the Fibonacci series using this method is O(n), where n is the number of terms in the series. This is because each term in the sequence requires constant time to compute, and we generate n terms.

Certainly! Here's a concise explanation of the buy and sell stock algorithm (also known as the "Best Time to Buy and Sell Stock" problem) along with an example:

## Problem Statement:

Given an array `prices` where `prices[i]` is the price of a given stock on the i-th day, find the maximum profit you can achieve by buying and selling the stock once.

## Algorithm:

1. Initialize two variables: `minPrice` to store the minimum price encountered so far and `maxProfit` to store the maximum profit.
2. Iterate through the array of prices.
3. For each price, calculate the profit that could be obtained by selling the stock on that day (`prices[i] - minPrice`).
4. Update `maxProfit` with the maximum of its current value and the profit calculated in the previous step.
5. Update `minPrice` with the minimum of its current value and the price of the current day.
6. After iterating through the entire array, `maxProfit` will contain the maximum profit that can be achieved by buying and selling the stock once.

## Example:

Consider the array of stock prices: `[7, 1, 5, 3, 6, 4]`.

1. Initialize `minPrice` to `inf` (infinity) and `maxProfit` to `0`.
2. Iterate through the array:
   - On day 1, `minPrice = 7`, `maxProfit = 0`.
   - On day 2, `minPrice = 1`, `maxProfit = 0`.
   - On day 3, `minPrice = 1`, `maxProfit = 4`.
   - On day 4, `minPrice = 1`, `maxProfit = 4`.
   - On day 5, `minPrice = 1`, `maxProfit = 5`.
   - On day 6, `minPrice = 1`, `maxProfit = 5`.
3. The maximum profit that can be achieved is `5` (buy on day 2 at price `1` and sell on day 5 at price `6`).

## Final Result: ## Maximum profit = `5`.

## Time Complexity:

The time complexity of this algorithm is O(n), where n is the number of days (length of the `prices` array). This is because we only need to iterate through the array once to find the maximum profit.
