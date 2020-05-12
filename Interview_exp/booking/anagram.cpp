#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
#define NO_OF_CHARS 256


bool areAnagram(string str1, string str2)
{
    int count[NO_OF_CHARS] = {0};
    int i;


    for (i = 0; str1[i] && str2[i];  i++)
    {
        count[str1[i]]++;
        count[str2[i]]--;
    }

    if (str1[i] || str2[i])
      return false;

    for (i = 0; i < NO_OF_CHARS; i++)
        if (count[i])
            return false;
     return true;
}
void findAnagram(vector< pair <string,int> > arr){
  vector<vector<string> > v;
  int n = arr.size();
  for (int i = 0; i < n; i++){
    vector<string> temp;
    for (int j = i+1; j < n; j++){
          if(arr[i].second == 0){
            temp.push_back(arr[i].first);
          }
          if (areAnagram(arr[i].first, arr[j].first)){
              arr[i].second = 1;
              arr[j].second = 1;
              temp.push_back(arr[j].first);
              cout << arr[i].first << " is anagram of " << arr[j].first << endl;
            }
      }
      if(temp.size() >0)
      v.push_back(temp);
    }

}


int main(){

int t;
string s;

vector< pair <string,int> > input;

cin >> t;


while(t--){
  cin >> s;
  input.push_back(make_pair(s,0));
}



findAnagram(input);

}
