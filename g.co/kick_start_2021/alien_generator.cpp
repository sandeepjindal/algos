#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int g){
    vector<int> res;    
    for(int i =1;i<=g;++i){
        int base = i;
        int res1 = 0;
        int k=0;
        while(res1 < g){
            res1+=(base+k);
            k++;
        }
        cout << "base is: " << res1 << endl;
        if(res1 == g){
            res.push_back(res1);
        }
    }
    return res.size();
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    int g;
    int i =1;
    int res;
    while(t--){
    cin >> g;

    res =solve(g);
    
    cout << "Case #"<<i<<": " <<res<<endl;
    i++;
    }
    return 0;

}