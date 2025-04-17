// computing power of a particular number

// Naive Solution
int Power(int x, int n){

    int res = 1;

    for(int i = 0; i < n; i++){
        res *= x;

    }
    return res;
}
// Time Complexity : O(N)

// Efficient Solution
int power(int n){

    if(n == 0)
    return 1;

    int temp = power(x, n / 2);
        temp = temp * temp;

    if(n % 2 == 0)
        return temp;
    else
        return temp*x;
}