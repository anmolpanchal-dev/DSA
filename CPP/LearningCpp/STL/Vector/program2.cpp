#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v1;
    v1.push_back(20);
    v1.push_back(5121);
    v1.push_back(5234);
    v1.push_back(3245);
    v1.push_back(500);
    v1.emplace_back(900);

    // vector<int> v2(5,100);
    // vector<int> v2(5);
    // vector<int> v2(5,200);
    // vector<int> v3(v2);
    // for(int i = 0; i<v3.size(); i++){
    //     cout<<v3[i]<<endl;
    // }
    // cout<<endl;
    // for(int i = 0; i<v2.size(); i++){
    //     cout<<v2[i]<<endl;
    // }

    // vector<int>::iterator it = v1.begin();
    // while(it!=v1.end()){
    //     cout<<*(it)<<endl;
    //     it++;
    // }
    // cout<<endl<<endl;
    // vector<int>::iterator it3 = v1.end()-1;
    // while(it3!=v1.begin()-1){
    //     cout<<*(it3)<<endl;
    //     it3--;
    // }
    // cout<<endl<<endl;
    // vector<int>::iterator it4 = v1.back();
    // while(*(it4)!=v1.front()){
    //     cout<<*(it4)<<endl;
    //     it4--;
    // }

    for(auto it = v1.begin(); it<v1.end(); it++){
        cout<<*(it)<<endl;
    }
    for(int x: v1){
        cout<<x<<endl;
    }

}
