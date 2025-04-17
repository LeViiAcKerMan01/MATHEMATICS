#include<bits/stdc++.h>
using namespace std;

// Iterative solution
int countDigits(long N){

    int count = 0;

    while(N != 0){
        N = N / 10;
        count++;
    }
    return count;
}
// recursive solution
int countDigit(long N){

    if(N == 0){
        return 0;
    }
    else{
        return 1+countDigit(N / 10);
    }
}

int main(){


}