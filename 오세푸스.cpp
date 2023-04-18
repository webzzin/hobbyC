#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> surv;
    int n,k;
    cin>>n>>k;
    list<int>::iterator kill = surv.begin();
    for(int i=1; i<=n; i++)
        surv.push_back(i);
    while(n){
    for(int i=0; i<(k-1);i++)
        kill++;
    cout<<*kill<<' ';
    if(surv.erase(kill)==surv.end())
        kill=surv.begin();
    --n;
    }
    return 0;
}