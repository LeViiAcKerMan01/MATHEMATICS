// Those divisors of given numbers which are prime

// Naive Solution
void PrimeFactors(int n){
// Time complexity : O(N^2 * logN)
    for(int i = 2; i < n; i++){

        if(isPrime(i)){

            int x = i;
            while(n % x == 0){

                cout<<i<<endl;
                x = x * i;
            }
        }
    }
}

// Efficient Solution
void PrimeFactors(int n){

    if(n <= 1) return;
    for(int i = 2; i*i <= n; i++){

        while(n % i == 0){

            cout<<i<<endl;
            n = n / i;
        }
    }
    if(n > 1){
        cout<<n<<endl;
    }
}


// Most Efficient Solution
void PrimeFactors(int n){

    if(n <= 1) return;

    while(n % 2 == 0)
    {
        cout<<2<<endl;
        n = n / 2;
    }
    while(n % 3 == 0)
    {
        cout<<3<<endl;
        n = n / 3;
    }
    for(int i = 5; i*i <= n; i+=6){

        while(n % i == 0){

            cout<<i<<endl;
            n = n % i;
        }
        while(n % (i+2) == 0){

            cout<<(i+2)<<endl;
            n = n / (i+2);
        }
        if(n > 3){
            cout<<n<<endl;
        }
    }
}