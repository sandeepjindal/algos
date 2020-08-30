#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> solve(int n, int a, int b, int c){
    vector<int> result(n,n);

    if(n ==1){
        result[0] =1;
    } else if(n ==2){
        if(c == 2){
            result[0] =1;
            result[1] =1;
        } else if(a ==2){
            result[0] =1;
            result[1] =2;
        } else if(b ==2){
            result[0] = 2;
            result[1] =1;
        }
    } else{

    int remaining_a = a - c;

    int remaining_b = b - c;

    int remaining_dummy = n - remaining_a - remaining_b - c;

    for(int i = 0;i<remaining_a;++i){
        result[i] = i+1;
    }

    for(int i=0;i< remaining_dummy;++i){
        result[remaining_a+c] = 1;
    }

    for(int i = 0;i<remaining_b;++i){
        result[n-1-i] = i+2;
    }

    }
    return result;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    int t;
    cin >> t;
    int n,a,b,c;
    // vector<int> input;
    vector<int> res;
    int i =1;
    while(t--){
    cin >> n;
    cin >> a;
    cin >> b;
    cin >> c;

    res =solve(n,a,b,c);
    
    cout << "Case #"<<i<<": ";
    if(n -a-b +c >=0){
    for(int i : res){
        cout << i << " ";
    }
    } else{
        cout << "IMPOSSIBLE";
    }
    cout << endl;
    i++;
    }
    return 0;

}