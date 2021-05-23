std::vector<int> vecOfNums { 1, 4, 5, 22, 33, 2, 11, 89, 49 };

// Create Iterator pointing to 4th Position
auto itPos = vecOfNums.begin() + 4;
// Insert element with value 9 at 4th Position in vector
auto newIt = vecOfNums.insert(itPos, 9);

// first way
vector<int> newNums(vecOfNums);
  
//second way
vector<int> newNums = vecOfNums;
 
 //third way
vector<int> newNums.assign(vecOfNums.begin(),vecOfNums.end());

//fourth way
vector<int> newNums.insert(newNums.end(),vecOfNums.begin(),vecOfNums.end());
