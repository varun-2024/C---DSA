#include<iostream>
using namespace std;
int main(){
    float pencil=0, pen=0, eraser=0, total=0;
    cout<<"Enter price for Pencil then Pen and Then Eraser:"<<endl;
    cin>>pencil>>pen>>eraser;
    total = pen+pencil+eraser;
    cout<<"Total cost is:"<<total<<endl;
    return 0;
}
