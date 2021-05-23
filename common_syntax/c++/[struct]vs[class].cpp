The differences between a class and a struct in C++ is:

struct members and base classes/structs are public by default.
class members and base classes/struts are private by default.
Both classes and structs can have a mixture of public, protected and private members, can use inheritance and can have member functions.

I would recommend you:

use struct for plain-old-data structures without any class-like features;
use class when you make use of features such as private or protected members, non-default constructors and operators, etc.
  
  
  
struct AbbreviatedWord {
  string str;
  int start = 0;
  int count = 0;
};

class AbbreviatedWord {
 public:
  string str;
  int start = 0;
  int count = 0;

  AbbreviatedWord(string str, int start, int count) {
    this->str = str;
    this->start = start;
    this->count = count;
  }
};
