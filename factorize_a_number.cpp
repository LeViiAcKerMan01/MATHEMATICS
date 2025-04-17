// Factorize a given number N (usually prime factorization!)

#include<bits/stdc++.h>
using namespace std;
using ii = pair<long, long>;

vector<ii> factors(long long n){

    vector<ii> ans;

    for(long long i = 2; i*i <= n; i++){

        if(n % i == 0){

            int cnt = 0;

            while(n % i == 0){

                cnt++;
                n /= i;
            }
            ans.push_back({i, cnt});
        }
    }

    if(n > 1){

        ans.push_back({n, 1});
    }
    return ans;
}

// Time complexity : O(sqrt(N))
int main(){

    long long n;

    cin >> n;

    vector<ii> ans = factors(n);

    for(auto it : ans){
        
        cout<<it.first<<" "<<it.second<<endl;
    }

}

