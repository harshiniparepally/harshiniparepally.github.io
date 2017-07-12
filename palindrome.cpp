#include<iostream>
using namespace std;
int reverse(int num) {
    int rev = 0;
    int r;

    while (num > 0) {
        r = num % 10;
        rev = rev * 10 + r;
        num = num / 10;
    }
    return rev;
}
int main() {
        int num;
        cout<<"Enter a number :";
        cin>>num;
        int temp;
        temp = num;
        int rev;
        rev = reverse(num);
        if (temp == rev) {
            cout<<"Palindrome \n";
        } else{
            cout<<"Not Palindrome \n";
        }
        return 0;
}
