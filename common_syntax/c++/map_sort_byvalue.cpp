multimap<int, string> invert(map<string, int> & mymap)
{
	multimap<int, string> multiMap;

	map<string, int> :: iterator it;
	for (it=mymap.begin(); it!=mymap.end(); it++) 
	{
		multiMap.insert(make_pair(it->second, it->first));
	}

	return multiMap;
}

int main()
{
	// make the map
	map<string, int> mymap = {
		{"coconut", 10}, {"apple", 5}, {"peach", 30}, {"mango", 8}
	};
	cout << "The map, sorted by keys, is: " << endl;
	map<string, int> :: iterator it;
	for (it=mymap.begin(); it!=mymap.end(); it++) 
	{ 
		cout << it->first << ": " << it->second << endl;
	}
	cout << endl;

	// invert mymap using the invert function created above
	multimap<int, string> newmap = invert(mymap);

	// print the multimap
	cout << "The map, sorted by value is: " << endl;
 	multimap<int, string> :: iterator iter;
	for (iter=newmap.begin(); iter!=newmap.end(); iter++) 
	{
		// printing the second value first because the 
		// order of (key,value) is reversed in the multimap
		cout << iter->second << ": " << iter->first << endl; 
	}

	return 0;
}
