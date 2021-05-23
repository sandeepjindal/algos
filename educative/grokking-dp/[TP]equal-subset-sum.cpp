using namespace std;

#include <iostream>
#include <vector>

class PartitionSet {
public:
  bool canPartition(const vector<int> &num) {
    //TODO: Write - Your - Code
    int totalSum =0;
    int n = num.size();
    

    for(int a: num){
      totalSum+=a;
    }

    if (totalSum % 2 != 0) {
      return false;
    }

    vector<vector<int>> dp(n,vector<int>((totalSum/2)+1, -1));
    return canPartition(num,0,(totalSum/2),dp);

  }

  bool canPartition(const vector<int> &num, int currentIndex, int sum, vector<vector<int>> & dp) {
    
    // validation cases
    if(num.empty() || currentIndex >= num.size()){
      return false;
    }

    // terminal case
    if(sum ==0 || num[currentIndex] == sum){
      return true;
    }

    if(dp[currentIndex][sum] != -1){
      return dp[currentIndex][sum];
    } else{
      if(num[currentIndex] <= sum){
        if(canPartition(num, currentIndex+1,sum - num[currentIndex],dp)){
          dp[currentIndex][sum] = 1;
          return dp[currentIndex][sum];
        }
      }
      dp[currentIndex][sum] = canPartition(num, currentIndex+1,sum,dp) ? 1 : 0;
      return dp[currentIndex][sum];
    }
  }
};
