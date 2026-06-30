#include<iostream>
using namespace std;
void printP(int n){
        for(int i = 1 ; i <= n; i++){
            for(int j = 1; j <= i; j++){
                cout<<"* ";
            }
        cout<<endl;
    }
}
void printN(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printN2(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j <= i; j++){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
void printN3(int n){
    for(int i = 0; i<=n; i++){
        for(int j = 1; j <= n-i; j++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}
void printN4(int n){
    for(int i = 1; i<=n; i++){
        for(int j = 1; j<=n-i+1; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
void printN5(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<" ";
        }
        for(int j = 0; j<2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void printN6(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j <( 2*n-(2*i+1)); j++){
            cout<<"*";
        }

        cout<<endl;
    }
}
void printN7(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*i+1; j++){
            cout<<"*";
        }
        cout<<endl;
        
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<" ";
        }
        for(int j = 0; j < 2*n-(2*i+1); j++){
            cout<<"*";
        }
        cout<<endl;
        
    }

}
void printN8(int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-i-1; j++ ){
            cout<<"*";
        }
        cout<<endl;
    }

}
void printN9(int n){
    int num = true;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i; j++){
            if(num){
                cout<<0<<" ";
                num = !num;
            }else{
                cout<<1<<" ";
                num = !num;
            }
        }
        cout<<endl;
    }

}
void printN10(int n){
    int start = 1;
    for(int i = 0; i < n; i++){
        if(i%2==0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++){
            cout<<start<<" ";
            start = 1-start;
        }
        cout<<endl;
        }
}
void printN11(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 0; j < i; j++){
            cout<<i;
        }
        for(int j = 0; j <= 2*n-(2*i+1); j++){
            cout<<" ";
        }
        for(int j = 0; j < i; j++){
            cout<<i;
        }
        

        cout<<endl;
    }
}
void printN12(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
       for(int j = 0; j < i; j++){
            cout<<num++<<" ";
       }
        cout<<endl;
    }
}
void printN13(int n){
    int num = 1;
    for(int i = 1; i <= n; i++){
       for(int j = 0; j < i; j++){
            cout<<num++<<" ";
       }
        cout<<endl;
    }
}

int main(){
    // int n ;
    char n;
    cout<<"Enter a Number: ";
    cin>>n;
    printN13(n);
    
}