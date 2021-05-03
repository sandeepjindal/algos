In many problems dealing with an array (or a LinkedList), we are asked to find or calculate something among all the contiguous subarrays (or sublists) of a given size. For example, take a look at this problem:

Given an array, find the average of all contiguous subarrays of size ‘K’ in it.

Let’s understand this problem with a real input:

Array: [1, 3, 2, 6, -1, 4, 1, 8, 2], K=5
Here, we are asked to find the average of all contiguous subarrays of size ‘5’ in the given array. Let’s solve this:

For the first 5 numbers (subarray from index 0-4), the average is: (1+3+2+6-1)/5 => 2.2(1+3+2+6−1)/5=>2.2
The average of next 5 numbers (subarray from index 1-5) is: (3+2+6-1+4)/5 => 2.8(3+2+6−1+4)/5=>2.8
For the next 5 numbers (subarray from index 2-6), the average is: (2+6-1+4+1)/5 => 2.4(2+6−1+4+1)/5=>2.4
…
Here is the final output containing the averages of all contiguous subarrays of size 5:

Output: [2.2, 2.8, 2.4, 3.6, 2.8]
A brute-force algorithm will calculate the sum of every 5-element contiguous subarray of the given array and divide the sum by ‘5’ to find the average. This is what the algorithm will look like:

```
using namespace std;

#include <iostream>
#include <vector>

class AverageOfSubarrayOfSizeK {
 public:
  static vector<double> findAverages(int K, const vector<int>& arr) {

    vector<double> result(arr.size() - K + 1);

    double windowSum = 0;

    int windowStart =0;
    int windowEnd = 0;

    int n = arr.size();

    for(int windowEnd=0;windowEnd<n;++windowEnd){

      windowSum = windowSum + arr[windowEnd];
      if(windowEnd>=K-1){
        result[windowStart]=(windowSum/K);
        windowSum = windowSum-arr[windowStart];
        windowStart++;
      }
    }

    return result;


    // vector<double> result(arr.size() - K + 1);
    // double windowSum = 0;
    // int windowStart = 0;
    // for (int windowEnd = 0; windowEnd < arr.size(); windowEnd++) {
    //   windowSum += arr[windowEnd];  // add the next element
    //   // slide the window, we don't need to slide if we've not hit the required window size of 'k'
    //   if (windowEnd >= K - 1) {
    //     result[windowStart] = windowSum / K;  // calculate the average
    //     windowSum -= arr[windowStart];        // subtract the element going out
    //     windowStart++;                        // slide the window ahead
    //   }
    // }

    // return result;
  }
};

int main(int argc, char* argv[]) {
  vector<double> result =
      AverageOfSubarrayOfSizeK::findAverages(5, vector<int>{1, 3, 2, 6, -1, 4, 1, 8, 2});
  cout << "Averages of subarrays of size K: ";
  for (double d : result) {
    cout << d << " ";
  }
  cout << endl;
}
```
