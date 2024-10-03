#include<iostream>
using namespace std;
int fact(int n){
    if(n==0){
        return 1;
    }

    return n * fact(n - 1);
}
int main(){
    int ans = fact(11);
    cout << "Factorial Of A Given Number:-" << ans << endl;
    return 0;
}