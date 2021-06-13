#include <bits/stdc++.h>
using namespace std;

void doDfs(vector<string>&related, int ind, vector<bool>&vis) {
    if(vis[ind]){
        return;
    }
    vis[ind] = true;

    string relation = related[ind];

    for(int i = 0;i<relation.size();i++) {
        if(relation[i] == '1' and vis[i]== false) {
            doDfs(related, i, vis);
        }
    }
}

int countGroups(vector<string> related) {
    int n = related.size();
    vector<bool> vis(n, false);

    int gp = 0;

    for(int i=0;i<n;i++) {
        if(!vis[i]) {
            gp++;
            doDfs(related, i, vis);
        }
    }
    
    return gp;

}

int main() {

    vector<string> arr = {"1100", "1110", "0110", "0001"};
    vector<string> arr2 = {"110", "110", "011"};
    vector<string> arr3 = {"10000", "01000", "00100", "00010", "00001"};

    cout << countGroups(arr3);
    
    return 0;

}
