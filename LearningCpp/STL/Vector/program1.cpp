#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> marks;

    vector<int> sizess;
    sizess.push_back(100);
    sizess.push_back(200);
    sizess.push_back(300);
    sizess.push_back(400);
    sizess.push_back(500);
    sizess.push_back(600);
    sizess.push_back(700);
    sizess.push_back(800);
    marks.push_back(100);
    marks.push_back(200);
    marks.push_back(300);
    marks.push_back(400);
    marks.push_back(500);
    marks.push_back(600);
    marks.push_back(700);
    marks.push_back(800);
    cout<<"Clear function code"<<endl;
    cout<<sizess.size()<<endl;
    cout<<sizess.capacity()<<endl;
    sizess.clear();
    cout<<sizess.size()<<endl;
    cout<<sizess.capacity()<<endl<<endl<<endl;
    cout<<"erase function code"<<endl;
    cout<<marks.size()<<endl;
    cout<<marks.capacity()<<endl;
    marks.erase(marks.begin(),marks.end());
    cout<<marks.size()<<endl;
    cout<<marks.capacity()<<endl;

    // // sizess.push_back(400);
    // // sizes.push_back(500);
    // // for(int i = 0; i < sizes.size(); i++){
    // //     cout<<sizes[i]<<endl;
    // // }
    // cout<<sizess.capacity()<<endl;
    // cout<<sizess.size()<<endl;
    // cout<<sizess.max_size()<<endl;
    // sizess.insert(sizess.begin(),409);
    // cout<<sizess[0]<<endl;

    return 0;
}