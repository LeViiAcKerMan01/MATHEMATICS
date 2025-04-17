// Naive Solution
void PrintDivisors(int n){

    for(int i = 1; i <= n; i++){

        if(n % i == 0){
            cout<<i<<endl;
        }
    }
}

// Efficient Solution
void PrintPrimes(int n){

    int i;
    for(i = 1; i * i < n; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
    }
    for(; i >= 1; i--){
        if(n % i == 0){
            cout<<n / i<<endl;
        }
    }
}