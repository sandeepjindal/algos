 priority_queue<pi, vector<pi>, greater<pi> > pq; 
  
    pq.push(make_pair(10, 200)); 
    pq.push(make_pair(20, 100)); 
    pq.push(make_pair(15, 400)); 
  
    pair<int, int> top = pq.top(); 
    cout << top.first << " " << top.second; 
