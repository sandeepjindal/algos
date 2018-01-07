#include<iostream>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<algorithm>
using namespace std;

int main(){

string curr_dir;
string path;

vector<string> cs;

vector<string> ps;

cin >> curr_dir >> path;

stack<string> s;

stringstream ss(curr_dir);
string token;
char del = '/';
while(getline(ss,token,del)){
  if(token != "")
 cs.push_back(token);
}

stringstream ss1(path);
string token1;
while(getline(ss1,token1,del)){
  if(token != "")
 ps.push_back(token1);
}

if(path[0]!='/'){
  for(string dir : cs){
    if(dir != ".."){
      s.push(dir);
    } else{
      s.pop();
    }
  }
} else{
  for(string dir : ps){
    if(dir != ".."){
      s.push(dir);
    } else{
      s.pop();
    }
  }
}

cout << s.top();

  return 0;
}




// char * cdup = strdup(curr_dir.c_str());
// char * pdup = strdup(path.c_str());
//
// char * del = " ";
//
// char * ctoken = strtok(cdup,del);
//
// char * ptoken = strtok(pdup,del);
//
// for(int i =0;ctoken[i]!='\0';i++){
//   cout << ctoken[i];
// }
//
// while(ctoken != NULL){
//   cout << "each value: "<< ctoken;
//   cs.push_back(ctoken);
//   ctoken = strtok(NULL,del);
// }
