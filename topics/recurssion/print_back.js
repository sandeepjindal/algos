

var x = print_backward(10);

function print_backward(n){
    console.log("came in start");
    if(n==0){
        // console.log(1);
        return 0;
    } else{
        console.log("came in else for %s time",10-n);
        console.log(n);
        print_backward(n-1);
    }
}
