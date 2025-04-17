#include<bits/stdc++.h>
using namespace std;

// Iterative solution to find the factorial 
// of a number
int fact(int num){

    int res = 1;
    for(int i = 0; i <= num; i++){

        res = res * i;

    }
    return res;
}

// Recursive solution to find the factorial
// of a number
int facto(int num){

    if(num == 0){

        return 1;

    }
    else{

        return num *facto(num-1);
    }
}
int main(){

    int n;
    cin >> n;
    int fact1 = fact(n);
    int fact2 = facto(n);
    
}