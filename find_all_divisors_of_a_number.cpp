// Finding all the divisors of a number N

#include<bits/stdc++.h>
using namespace std;

vector<long long> Divisors(long long n){

    vector<long long> ans;

    for(long long i = 1; i*i <= n; i++){

        if(n % i == 0){

            ans.push_back(i);
            if(i*i != n){ 
            // Incase number not being a perfect square

                ans.push_back(n / i);
            }
        }
    }
    return ans;
}

int main(){

    long long n;

    cin >> n;

    vector<long long> ans = Divisors(n);

    for(auto it : ans){

        cout<<it<<" ";
    }
}