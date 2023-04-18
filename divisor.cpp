#include <iostream>
using namespace std;

int divisor(int n);
int main(void){
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<divisor(i)<<' ';
    }

    return 0;
}

//약수의 갯수
int divisor(int n){
    int result=0;
    for(int i=1; i<=n ; i++){
        if(n%i==0)
            result++;
    }
    return result;
}