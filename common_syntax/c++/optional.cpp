#include<optional>

int main() {
    optional<int> x;
    int y =2;
    
    std::cout << x.value_or(y);
}
