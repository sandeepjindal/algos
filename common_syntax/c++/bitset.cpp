#include <bits/stdc++.h>
#include<vector>

int main() {
  int num = 7;
  cout << bitset<32>(num).count()<< endl; // for getting no of 1's count

  std::bitset<5> b(5); 
  std::cout << b.to_ulong() << '\n';
  
    std::cout << b.test(2) << '\n'; // return true if 1 if index 2 is set of not(index is from left)


  std::string alpha_bit_string = "aBaaBBaB"; 
  std::bitset<8> b1(alpha_bit_string, 0, alpha_bit_string.size(), 
                      'a', 'B');         // [0,1,0,0,1,1,0,1] 
  
  std::cout << b1 << '\n'; 



}