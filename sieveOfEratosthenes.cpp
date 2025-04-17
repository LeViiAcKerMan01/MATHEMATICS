// Used to print all the prime numbers smaller than or equal to a number


// Naive Solution
void sieve(int n){

    vector<bool> isPrime(n+1, true);

    for(int i = 2; i * i <= n; i++){

        if(isPrime[i])
        {
            for(int j = 2*i; j <= n; j++)
            {
                isPrime[j] = false;
            }
        }
    }

    for(int i = 2; i <= n; i++){

        if(isPrime[i]){
            cout<<i<<endl;
        }
    }
}

// Efficient solution
void sieve(int n){

    vector<bool> isPrime(n+1, true);
    
    for(int i = 2; i* i <= n; i++){

        if(isPrime[i]){

            for(int j = i * i; j <= n; j++){
                isPrime[j] = false;
            }
        }
    }
    for(int i = 2; i <= n; i++){

        if(isPrime[i]){

            cout<<i<<" ";
        }
    }
}


// Shorter implementation of the optimized sieve

void sieve(int n){

    vector<bool> isPrime(n+1, true);
    
    for(int i = 2; i <= n; i++){

        if(isPrime[i]){

            cout<<i<<endl;
            
            for(int j = i*i; j <= n; j+=i)
                isPrime[j] = false;
        }
    }
}