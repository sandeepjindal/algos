#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool is_palindrome(string &s){
    int n = s.size();
    int i =0;
    int j = n-1;
    
    while(i<j){
        if(s[i] == s[j]){
            i++;
            j--;
        } else{
            return false;
        }
    }
    return true;
}


void countStringsRec(vector<char> &set,string prefix,int k, int n, int & result,string& s, int sizeN){
    
    if(n == 0){
        if(is_palindrome(prefix) && (prefix < s)){
            // cout << "prefix is" << prefix << endl;
            result++;
        }
        return;
    } 
    string newPrefix = "";
    for(int i =0; i < k; ++i){
        newPrefix = prefix + set[i];
        string v = s.substr(0,sizeN-n+1);
        // cout << " New Prefix is " << newPrefix << " SUBSTRING IS " << v << endl;
        if(newPrefix <= s.substr(0,sizeN-n+1)){
            countStringsRec(set,newPrefix,k,n-1,result,s,sizeN);
        }
    }
    
}


int solve(string &s,int k){
    int n = s.size();
    vector<char> set;
    
    for(int i =0;i<k;++i){
        set.push_back(char(97+i));
    }
    int result =0;
    countStringsRec(set,"",k,n,result,s,n);
    return result;
}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    int n,k;
    string input;
    int i =1;
    int res =0;
    while(t--){
    cin >> n;
    cin >> k;
    
    input = "";
    cin >> input;
    
    res =solve(input,k);
    
    cout << "Case #"<<i<<": " <<res<<endl;
    i++;
    }
    return 0;

}