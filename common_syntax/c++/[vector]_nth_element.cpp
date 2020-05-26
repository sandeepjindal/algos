  vector<int> ar = {1, 3, 6, 1, 2, 4, 7, 0};  
  // will print 1 3 6 1 2 4 7 0  
  
  // mid = 5th element (ar.begin() + 4)  
  auto mid = ar.begin() + distance(ar.begin(), ar.end()) / 2;  
  
  // lets nth_element ar to mid  
  nth_element(ar.begin(), mid, ar.end());  
  // will print 2 0 1 1 3 4 7 6  
