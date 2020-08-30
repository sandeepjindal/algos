  std::string str="We think in generalities, but we live in details.";

  std::string str2 = str.substr (3,5);     // "think"

  std::size_t pos = str.find("live");      // position of "live" in str

  std::string str3 = str.substr (pos);     // get from "live" to the end

  std::cout << str2 << ' ' << str3 << '\n';


// to check if substring is prefix of string or not

   auto res = std::mismatch(searchWord.begin(), searchWord.end(), words[i].begin());
   if(res.first == searchWord.end()){
      // yes it is
   }
