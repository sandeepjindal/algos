#include <iostream>
#include<vector>
using namespace std;

void heapify(vector<int> *a,int n,int i){

    int largest = i;
    int l = 2*i +1;
    int r = 2*i+2;

    if(l<n && (*a)[l] > (*a)[largest]){
        largest = l;
    }

    if(r<n && (*a)[r] > (*a)[largest]){
        largest = r;
    }

    if(largest !=i){

        swap((*a)[i],(*a)[largest]);
        heapify(a,n,largest);
    }

}


void buildHeap(vector<int> *a, int n){

    for(int i = n/2 -1;i>=0;i--){
        heapify(a,n,i);
    }

}



int main() {

    int t;
    cin >>t;

    while(t--){
        int n,m;
        cin >> n;
        cin >> m;
        int d;
        vector<int> a;

        for(int i =0;i< n;i++ ){
            cin >> d;
            a.push_back(d);
        }

        for(int i =m;i< m+n;i++ ){
            cin >> d;
            a.push_back(d);
        }

        if(a.size() == 0){
            return 0;
        }

        buildHeap(&a,n+m);

        for(int i =0;i < n+m;i++){
            cout<< a[i] << " ";
        }


        }

        return 0;

}
