

var A = [];
allBinaries(4,21);
function allBinaries(n,k) {
    if (n < 1) {
        console.log(A);
        return;
    } else {
        for(i=0;i<k;i++){
            A[n-1] = i;
            allBinaries(n-1,k);
        }
    }
}
