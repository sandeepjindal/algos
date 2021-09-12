#include <iostream>
#include <string>
 
int main()
{
    char c = 'A';
 
    // using string::push_back
 
    std::string s;
    s.push_back(c);
    std::cout << s << std::endl;
 
    return 0;
}
