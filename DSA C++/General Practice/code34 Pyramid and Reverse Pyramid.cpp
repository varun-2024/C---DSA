#include <iostream>
using namespace std;
int main(){
    int n=0;
    const int r =7;
    cout<< " Enter the number of Rows: "<< endl;
    cin >> n;
    for (int i = 1; i<=n; i++){
        for (int j = 1; j<=n-i; j++){ //Space
            cout<< "   ";
        }
        for (int j=1; j<=(2*i -1); j++){ // Stars
            cout<< " * ";
        }
        cout<<endl;
    }
      for (int i = n; i>0; i--){
        for (int j = 1; j<=n-i; j++){
            cout<< "   ";
        }
        for (int j=1; j<=(2*i -1); j++){
            cout<< " * ";
        }
        cout<<endl;
    }
    return 0;
}