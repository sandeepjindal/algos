#include<iostream>
using namespace std;


int main(){
int t,n;
int a[10000],b[10000],m[10000];
int x= 1<<16;
cout<<"tailing zereos"<<__builtin_ctz(x);
cout<<"leading zereos"<<__builtin_clz(x);
cout<<__builtin_popcount(x);
cin >> t;
int z = t;
while(t!=0){
cin >> n;
for(int i=0;i<n;i++){
cin >> m[i];
a[i] = m[i] % x;
b[i] = m[i] / x;
}
cout<<"Case "<<z-t+1<<":"<<endl;
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<endl;
for(int i=0;i<n;i++){
cout<<b[i]<<" ";
}

t--;
}
return 0;
}
