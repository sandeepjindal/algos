    vector<string> splitter(string str,char delim){
        vector<string> out;
        std::stringstream ss(str);
        std::string s;
        while (std::getline(ss, s, delim)) {
            out.push_back(s);
        }
        return out;
    }
