#include <iostream>
#include <list>
using namespace std;
int main(){
    list<int> lst; 
    lst.push_back(10);
    lst.push_back(30);
    lst.push_back(20);
    lst.push_back(40);
    lst.push_back(70);
    lst.push_back(70);

    lst.insert(lst.begin(),1000);
    // list<int> lst2; 
    // lst2.push_back(100);
    // lst2.push_back(300);
    // lst2.push_back(200);
    // lst2.push_back(400);
    // lst2.push_back(700);
    // lst2.push_back(700);
    // cout<<"Before Swap: "<<endl;
    list<int>::iterator it2 = lst.begin();
    while(it2!=lst.end()){
        cout<<*it2<<"  ";
        it2++;
    }
    // lst.swap(lst2);
    // cout<<"After Swap: "<<endl;
    // list<int>::iterator it = lst.begin();
    // while(it!=lst.end()){
    //     cout<<*it<<endl;
    //     it++;
    // }
    // cout<<lst.size()<<endl;
    // cout<<lst.empty()<<endl;
    // cout<<"Before Insertion Front : "<<lst.front()<<endl;
    // lst.push_front(500);
    // cout<<"After Insertion Front : "<<lst.front()<<endl;
    // cout<<"Before Insertion Back : "<<lst.back()<<endl;
    // lst.push_back(900);
    // cout<<"After Insertion Back : "<<lst.back()<<endl;
    // cout<<*(lst.begin())<<endl;

    // list<int>::iterator it = lst.begin();
    // while(it!=lst.end()){
    //     cout<<*it<<" ";
    //     it++;
    // }
    // lst.remove(70);
    // cout<<endl<<"After Removing : "<<endl;
    // list<int>::iterator it2 = lst.begin();
    // while(it2!=lst.end()){
    //     cout<<*it2<<" ";
    //     it2++;
    // }

}