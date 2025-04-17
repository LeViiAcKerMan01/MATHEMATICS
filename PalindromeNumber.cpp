#include<bits/stdc++.h>
using namespace std;

// Function to check is the number is a palindrome
// or not
bool isPal(int num){

    int rev = 0;
    int temp = num;

    while(temp != 0){

        int remainder = temp % 10;
        rev = rev * 10 + remainder;
        temp = temp / 10;
    }
    return (rev == num);
}

int main(){

    int n;
    cin >> n;
    cout<<isPal(n);

}