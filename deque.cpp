#include <iostream>
#include <deque>
using namespace std;

int main(void){
    deque <int> dq;
    int n;
    cin>>n;

    int temp;
    for(int i=0; i<n; i++){
        cin>>temp;
        dq.push_back(temp);   
    }

    int maxSum = 0;
    int first = dq.front();

    do{
        dq.push_back(dq.front()*(-1));
        dq.pop_front();

       int sum=0;
       for(auto i=dq.begin() ; i!= dq.end() ; i++){
            sum += (*i);
       }
       if(maxSum < sum)
            maxSum = sum;
    }while(dq.front()!=first);

    cout<<"max: "<<maxSum<<endl;
    return 0;
}

/*
순환하는 수열 문제
n개의 원소로 이루어진 수열이 주어진다. (사용자입력값:n)(사용자입력값: n개의 원소)
이 수열은 앞의 원소에 부호를 바꿔 뒤로 보낸 후 나머지 값들을 앞으로 끌어온다.(한번의 사이클)
이 사이클을 원래의 수열로 돌아올때까지 반복한다.
모든 사이클당 수열의 합을 구했을 때 가장 큰 값을 구하시오.
*/