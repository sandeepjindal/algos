#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include<bits/stdc++.h>
using namespace std;

vector<string> splitter(string str,char delim){
        vector<string> out;
        std::stringstream ss(str);
        std::string s;
        while (std::getline(ss, s, delim)) {
            out.push_back(s);
        }
        return out;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,q;
    string taggers;
    cin >> t;
    cin >> q;
    cin.ignore();
    string prefix;
    string query;
    string e;

    map<string,string> interm;
    vector<string> split;
    while(t--){
        getline(std::cin >> std::ws, taggers);
        taggers.erase(remove(taggers.begin(), taggers.end(), '\"' ),taggers.end());
        taggers.erase(remove(taggers.begin(), taggers.end(), '>' ),taggers.end());
        split = splitter(taggers,' ');
        if(split[0].substr(0,2) == "</"){
            size_t pos = prefix.find(split[0].substr(2));
            if (pos != std::string::npos){
                prefix.erase(pos, split[0].substr(2).length()+1);
            }
        } else{
            for(int i = 1 ;i<split.size();i = i+3){
                string d; 
                d  = prefix + split[0].substr(1)+ "~" + split[i];
                if(d.substr(0,1) == "."){
                    d = d.substr(1);
                }
                interm.insert(make_pair(d, split[i+2]));
            }
            prefix = prefix + split[0].substr(1) + ".";
        }
    }

    // for (auto const& pair: interm) {
    //     std::cout << "--" << pair.first << ": " << pair.second << "--\n";
    // }

    while(q--){
        cin >> query;
        if(interm.find(query) == interm.end()){
            cout << "Not Found!"<<endl;
        }else{
            cout <<interm.find(query) -> second << endl;
        }   
    }
    return 0;
}
