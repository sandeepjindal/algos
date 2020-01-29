    std::stringstream ss(str);


    std::string s;
    while (std::getline(ss, s, delim)) {
        out.push_back(s);
    }
