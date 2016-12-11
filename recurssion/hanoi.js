hanoi(6,"|","||","|||");

function hanoi(n,from,to,aux){

if(n==1){
    console.log("1D %s --> %s",from,to);
    return;
}

hanoi(n-1,from,aux,to);
console.log("%sthD %s-->%s",n,from,to);
hanoi(n-1,aux,to,from);

}
