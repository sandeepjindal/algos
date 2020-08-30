// Max Heap
 priority_queue<int> pq;
 // operations
 pq.push(5); 
 pq.push(1); 
 pq.push(10);

 pq.pop()

//Min Heap
 priority_queue <int, vector<int>, greater<int> > pq;

pair<int,int> pi;
// this example is with pair 
priority_queue<pi, vector<pi>, greater<pi> > pq; 
  
    pq.push(make_pair(10, 200)); 
    pq.push(make_pair(20, 100)); 
    pq.push(make_pair(15, 400)); 
  
    pair<int, int> top = pq.top(); 
    cout << top.first << " " << top.second; 
