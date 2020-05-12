#include<iostream>
#include<math.h>
using namespace std;

int main(){

int t;
cin >> t;
int a,b,c,d;

int square = 0 ;
int rec = 0;
int other = 0;

while(t--){
cin >> a >> b >> c >> d;

if( 0 > (min(min(min(a,b),c),d))){
  cout << a << b << "other";
  other ++;
}

else if((a == b) &&(b == c) &&(c == d)){
  cout << a << b << "square";

  square++;
}

else if((a == c) && (b == d)){
  cout << a << b <<"rec";

rec++;
}
else{
  cout <<"other 2";
  other ++;

}

}

cout << square <<rec << other;

return 0;

}
