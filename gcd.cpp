// Naive Solution
int gcd(int a, int b){

    while(a != b){

        if(a > b){
            a =  a - b;
        }
        else{
            b = b - a;
        }

    }
    return a;
}

// Optimized implementation
int gcd(int a, int b){

    if(b == 0){

        return a;
    }
    else{

        return gcd(b, a % b);
    }
}
