    vector<int> plusOne(vector<int>& digits) {
       int n = digits.size();
        vector<int> result(n+1,0);
        int res =0;
        for(int i = n-1; i>=0; --i){
            if(i == n-1){
                res =  digits[i]+1;
            } else{
                res = digits[i];
            }
            result[i+1] += res;
            result[i]+= floor( result[i+1]/10);
            result[i+1] %= 10;
        }
        
        int i = 0;
        while(result[i] == 0){
            i++;
        }
        vector<int> fresult =  vector<int>(result.begin() + i, result.end());
        return fresult;  
    }
