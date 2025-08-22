#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        string branch;
        string subject;
        int year;
        float result;
};
int main(){
    int i;
    Student s[i];
    float result[i]={8.9,9.0,9.1};
    for(i=0;i<3;i++){
        cout<<"Enter Name: ";
        cin>>s[i].name;
        cout<<"Enter Branch: ";
        cin>>s[i].branch;
        cout<<"Enter Year: ";
        cin>>s[i].year;
        cout<<"Enter Subject: ";
        cin>>s[i].subject;
        s[i].result = result[i];
        }
    cout<<"-----------DETAILS-----------";
    for(i=0;i<3;i++){
        cout<<"\nName: "<<s[i].name;
        cout<<"\nBranch: "<<s[i].branch;
        cout<<"\nYear: "<<s[i].year;
        cout<<"\nSubject: "<<s[i].subject;
        cout<<"\nYour Result is: "<<s[i].result;
    }
    return 0;
}
