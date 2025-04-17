#include<bits/stdc++.h>
using namespace std;

int countZeroes(int num){

    int fact = 1;

    for(int i = 2; i <= num; i++){
        fact *= i;
    }
    int res = 0;

    while(fact % 10 == 0){

        res++;
        fact = fact / 10;
    }
    return res;

    // Time Complexity : O(N)
}

//efficient method
int countTrailingZeroes(int num){

    int res = 0;
    for(int i = 5; i <= num; i++){

        res = res + (num / i);
    }
    return res;
    
    // Time Complexity : O(logN)
}

int main(){

    int n;
    cin >> n;
    int count = countZeroes(n);
    cout<<count<<endl;


}
