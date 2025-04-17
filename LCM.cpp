// LCM or least common multiple of two numbers is the smallest number that is
// divisible by both the numbers

// Naive Solution
int LCM(int a, int b){

    int res = max(a, b);
    while(true){

        if(res % a == 0 && res % b == 0){
            return res;
        }
        res++;
    }
    return res;
    // Time complexity : O(a*b - max(a, b));
}

// Optimized solution
int gcd(int a, int b){

    if(b == 0){
        return a;
    }
    else{
        return gcd(b, a % b);
    }
}
int lcm(int a, int b){

    return (a * b) / gcd(a, b);

}
// Time Complexity : O(log(min(a, b)))