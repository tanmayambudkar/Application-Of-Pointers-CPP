#include <iostream>
using namespace std;

void swap(int x, int y){
    int temp=x;
    x=y;
    y=temp;
}

int main(){
    int x,y;
    cout<<"Enter the Value of X: ";
    cin>>x;
    cout<<"Enter the Value of Y: ";
    cin>>y;
    cout<<"Value before Swap: X= "<<x<<", Y= "<<y;
    swap(x,y);
    cout <<"\nValue after Swap: X= " <<x<< ", Y= " <<y;
    return 0;
}