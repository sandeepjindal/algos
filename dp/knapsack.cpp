#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int knapsack(int wt,vector<int> wi, vector<int> vi,int n){
    
    int dp[n+1][wt+1];
        // cout << "entered here with values" << wt << n <<endl;
    
    
    for(int k =0;k<n;k++){
        // cout << "weight is " << wi[k] << "val is " << vi[k] << endl;
    }

    
    for(int i =0;i<=n;i++){
        for(int j=0;j<=wt;j++){
            if(j==0 || i ==0){
                // cout << "entering this condition under this i " << i << endl;
                dp[i][j] =0;
            }
            else if(j < wi[i-1]){
                dp[i][j] = dp[i-1][j];
            } else{
                dp[i][j] = max((vi[i-1] + dp[i-1][j-wi[i-1]]),dp[i-1][j]);
                // cout << "value selected " << dp[i][j] << endl;
            }
        }
    
    }
    
            return dp[n][wt];

    
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,v,w,n,wt =0;
    vector<int> wi;
    vector<int> vi;
    cin >> t;
    while(t--){
        cin >> wt;
        cin >> n;
        while(n--){
            cin >> w;
            cin >> v;
            wi.push_back(w);
            vi.push_back(v);
        }
        cout << knapsack(wt,wi,vi,wi.size()) << endl;
    }
    
    return 0;
}

