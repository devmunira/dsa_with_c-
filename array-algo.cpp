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


// find out sum of total water trapped
int trappedWaterCount (int *bar, int count) {
  int leftMax[count], rightMax[count];
  leftMax[0] = bar[0];
  rightMax[count - 1] = bar[count-1];

  // Set Left Max
  for (int i = 1; i < count; i++)
  {
      leftMax[i] = max(bar[i-1], leftMax[i-1]);
      // cout << "left max" << leftMax[i] << endl;
  }

  // Set Right Max
  for (int i = count - 2; i >= 0; i--)
  {
      rightMax[i] = max(bar[i+1], rightMax[i+1]);
      // cout << "right max" << rightMax[i] << endl;
  }


  int totalWaterTrapped = 0;

  for (int i = 0; i < count; i++)
  {
    int trappedBar = min(leftMax[i], rightMax[i]) - bar[i];
    if(trappedBar > 0) totalWaterTrapped += trappedBar;
  }
  
  
  cout << "water trapped = " << totalWaterTrapped << "\n";
  return totalWaterTrapped;

}

bool checkDoubleElement (int *array, int count){
  bool result = false;
  for (int i = 0; i < count; i++)
  {
    for (int j = i + 1; j < count; j++)
    {
      if(array[j] == array[i]){
        cout << array[j] << array[i] << (array[j] == array[i]) << endl;
        result = true;
        return result;
      }
    }
  }

  cout << "Check Double" << result << endl;
  return result;
  
}

int main () {
    int array[]= {7,1,5,3,6,4};
    int n = sizeof(array) / sizeof(int);
    buyAndSellStock(array, n);
    int bar[10000] = {4, 2, 0, 6, 3, 20, 0};
    trappedWaterCount(bar, 7);
    cout << checkDoubleElement(bar, 7) << "\n";
    return 0;
}
