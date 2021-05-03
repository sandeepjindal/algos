//Given an array of positive numbers and a positive number ‘S,’ find the length of the smallest contiguous subarray whose sum is greater than or equal to ‘S’. Return 0 if no such subarray exists.

using namespace std;

#include <iostream>
#include <limits>
#include <vector>
#include <climits>

class MinSizeSubArraySum {
 public:
  static int findMinSubArray(int S, const vector<int>& arr) {
    int result = INT_MAX;
    int n = arr.size();

    int winsum =0;
    int winstart =0;

    for(int we = 0; we < n; ++we){
        winsum += arr[we];
        while(winsum >= S){
          result = min((we-winstart+1),result);
          winsum -= arr[winstart];
          winstart++;
        }
    }

    return result == INT_MAX ? 0: result;
  }
};

// O(N)
