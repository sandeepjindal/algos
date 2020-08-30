int main() {
    std::vector<std::vector<int> > a = {{0,0,0}, {1,2,3}, {0,0,0}, {1,2,3}};
    std::sort(a.begin(), a.end());
    a.erase(std::unique(a.begin(), a.end()), a.end());
    cout << a.size();
}