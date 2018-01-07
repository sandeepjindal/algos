#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

void heapify(vector<int> * A, int n, int i){

  int l = 2 * i + 1;
  int r = 2 * i + 2;
  int largest = i;

  if(l < n && (*A)[l] > (*A)[largest]){
      largest = l;
  }
  if(r < n && (*A)[r] > (*A)[largest]){
      largest = r;
  }

  if(largest != i){
    swap((*A)[i],(*A)[largest]);
    heapify(A,n,largest);
  }
}

void buildHeap(vector<int> * A, int n){

  for(int i = n/2 -1; i>=0 ;i--){
    heapify(A,n,i);
  }

}

int main(){

vector<int> A;
A.push_back(4);
A.push_back(10);
A.push_back(5);
A.push_back(1);
A.push_back(3);

priority_queue <int> max_heap;

max_heap.push(4);
max_heap.push(10);
max_heap.push(5);
max_heap.push(1);
max_heap.push(3);

while(!max_heap.empty()){
  cout << max_heap.top();
  max_heap.pop();
}

buildHeap(&A,5);
for(int i =0;i <5;i++){
  cout << A[i];
}

}
