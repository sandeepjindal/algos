#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <map>
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

    string prefix = "";
    string query;

    map<string,string> interm;
    vector<string> split;
    while(t--){
        cout <<"t is " << t << endl;
        getline(std::cin >> std::ws, taggers);
        cout << "string at "<< t << "is "<<taggers << endl;
        split = splitter(taggers,' ');
        for(string p: split){
            cout << "splitter spitted out " << p << endl;
        }
        string d = prefix + split[0].substr(1)+ "~" + split[1];
        prefix = prefix + split[0].substr(1) + ".";
        string val = split[3];
        val.pop_back();
        val.pop_back();
        cout << "d is "<< d <<"val is "<< val << endl;
        interm.insert(make_pair(d, val.substr(1)));
    }

    for (auto const& pair: interm) {
        std::cout << "{" << pair.first << ": " << pair.second << "}\n";
    }

    while(q--){
        cin >> query;
        if(interm.find(query) == interm.end()){
            cout << "Not Found!";
        }else{
            cout <<interm.find(query) -> second;
        }   
    }
    return 0;
}

