#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> input,int b){
    int n = input.size();
    sort(input.begin(),input.end());
    int sum =0;
    int count =0;
    for(int i =0;i<n;++i){
        if(sum+input[i] <=b){
            sum+=input[i];
            count++;
        }
        else{
            return count;
        }
    }
    return count;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    int n,b;
    vector<int> input;
    int aval,res;
    int i =1;
    while(t--){
    cin >> n;
    cin >> b;
    
    input.clear();
    for(int i =0;i<n;++i){
        cin >> aval;
        input.push_back(aval);
    }
    
    res =solve(input,b);
    
    cout << "Case #"<<i<<": " <<res<<endl;
    i++;
    }
    return 0;

}