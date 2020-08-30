#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> A, int n){
    long ans = 2; 
    long global_max = 2;
    long diff = A[1] - A[0];
    for(int i =1;i<n-1;++i){
        if(A[i+1] - A[i] == diff){
            ans++;
            if(ans > global_max){
                global_max = ans;
            }
        } else{
            ans = 2;
            diff = A[i+1] - A[i];
        }
    }
    return global_max; 
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    int n;
    vector<int> input;
    int aval,res;
    int i =1;
    while(t--){
    cin >> n;
    input.clear();
    for(int i =0;i<n;++i){
        cin >> aval;
        input.push_back(aval);
    }
    
    res =solve(input,n);
    
    cout << "Case #"<<i<<": " <<res<<endl;
    i++;
    }
    return 0;

}