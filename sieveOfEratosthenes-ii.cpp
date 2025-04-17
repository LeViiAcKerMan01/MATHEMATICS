// Check weather a given number N is a Prime?

#include<bits/stdc++.h>
using namespace std;

bool isPrime(long long n){

    for(long long i = 2; i < n; i++){

        if(n % i == 0){

            return false;
        }
    }
    return (n > 1);
}
// Time Complexity : O(N)

int main(){

    long long n;

    cin >> n;

    cout<<isPrime(n)<<endl;
}

/*

Optimized solution : 

Time complexity : O(N)

bool isPrime(long long n){


    for(long long i = 2; i*i <= n; i++){
    
        if(n % i == 0){
    
            return false;
        }
    }
    return true;
}
    
*/