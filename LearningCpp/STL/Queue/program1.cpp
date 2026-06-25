#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> q1;
    queue<int> q2;
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    q1.push(50);
    q2.push(60);
    q2.push(70);
    q2.push(80);
    q2.push(90);
    q2.push(00);

    cout<<q1.front()<<endl;
    q1.swap(q2);
    cout<<q1.front();
}