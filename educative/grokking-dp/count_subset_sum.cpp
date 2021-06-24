using namespace std;

#include <iostream>
#include <vector>

class SubsetSum {
public:
  int countSubsets(const vector<int> &num, int sum) {
    // vector<vector<int>> dp(2,vector<int>(sum+1,0));
    vector<int> dp(sum+1,0);
    int n = num.size();
    // for(int i =0;i<n;++i){
    //     dp[i%2][0] = 1;
    // }
    dp[0]=1;
    for(int s =1;s<=sum;++s){
      if(num[0] == s){
        dp[s] = 1;
      }
    }

    for (int i = 1; i < n; i++) {
      for(int s =sum;s>=0;s--){
        if(num[i] <= s){
          dp[s] += dp[s-num[i]];
        }
      }
    }

    return dp[sum];

    }
};

// O(s) - space complexity
