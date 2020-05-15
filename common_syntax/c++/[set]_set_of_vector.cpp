// hash for bool
unordered_set<vector<int>,hash<vector<int>>> set_of_vectors_bool; 

// hash required for unordered_set
struct VectorHash {
    size_t operator()(const std::vector<int>& v) const {
        std::hash<int> hasher;
        size_t seed = 0;
        for (int i : v) {
            seed ^= hasher(i) + 0x9e3779b9 + (seed<<6) + (seed>>2);
        }
        return seed;
    }
};

// unordered set
unordered_set<vector<int>,VectorHash> set_of_vectors; 

vector<int> x{1,2};
vector<int> y{1,2};
  
set_of_vectors.insert(x);
set_of_vectors.insert(y);

for (auto it = set_of_vectors.begin(); it != set_of_vectors.end(); it++) {
		vector<int> vec = *it;
    	cout << "vector values are" <<vec[0];	
}  		


// ordered set
set<vector<int> > set_of_vectors; 

vector<int> data_1{ 10, 20, 30, 40 }; 
vector<int> data_2{ 1, 3, 5, 7, 9, 11, 13 }; 
vector<int> data_3{ 10, 20, 30, 40 }; 

// Inserting vectors into set 
set_of_vectors.insert(data_1); 
set_of_vectors.insert(data_2); 
set_of_vectors.insert(data_3); 

for (auto it = set_of_vectors.begin(); it != set_of_vectors.end(); it++) {
		vector<int> vec = *it;
    	cout << "vector values are" <<vec[0];	
}  		
