#include<iostream>
using namespace std;


// find out best buying and selling price.
int buyAndSellStock(int *array, int n){
  int bestBuy[100000] = {};
  bestBuy[0] = INT_MAX;

  for (int i = 1; i < n; i++)
  {
    bestBuy[i] = min(bestBuy[i-1], array[i-1]);
  }

  int maxProfit = 0;
  int dayOfSell = -1;
  for (int i = 1; i < n; i++)
  {
    int profit = array[i] - bestBuy[i];
    if(maxProfit < profit){
        dayOfSell = i;
        maxProfit = profit;
    }
  }
  cout << "day of sell stock-" << dayOfSell << "\n";
  cout << "Max profit for buy and sell stock-" << maxProfit << "\n";
  return maxProfit;  
}

int main () {
    int array[]= {7,1,5,3,6,4};
    int n = sizeof(array) / sizeof(int);
    buyAndSellStock(array, n);
    return 0;
}
