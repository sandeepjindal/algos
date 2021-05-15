//second element of pairs in ascending order.
bool sortbysec(const pair<int,int> &a,
              const pair<int,int> &b)
{
    return (a.second < b.second);
}
  
// declaring vector of pairs
vector< pair <int, int> > vect;
sort(vect.begin(), vect.end(), sortbysec);
