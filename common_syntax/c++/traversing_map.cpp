       unordered_map<int,int> n;
       for(auto &p : n){
            auto found = n.find(p.first);
            
            if(found != n.end()){
              cout << found->first;
            }
        }
