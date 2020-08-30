int main()
{
	map<string, int> mymap = {
		{"coconut", 10}, {"apple", 5}, {"peach", 30}, {"mango", 8}
	};

	multimap<int, string> mmap;

	//multimap<int, int, greater<int> > mmap;
        
        for (auto it=mymap.begin(); it!=mymap.end(); it++) {
		    mmap.insert(make_pair(it->second, it->first));
	}
        
	
	
	for (auto iter =mmap.begin(); iter!=mmap.end(); iter++) 
	{
		cout << iter->second << ": " << iter->first << endl; 
	}

	return 0;
}
