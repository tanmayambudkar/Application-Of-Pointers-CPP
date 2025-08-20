#include <iostream>
using namespace std;

void comp(float *salary){
    *salary=*salary+((0.2)*(*salary));
}

int main(){
    int yr,res_pro,res_pro_pipe;
    float salary,emp_id,profit;
    string emp_name;
    cout<<"Enter Employee Name: ";
    cin>>emp_name;
    cout<<"Enter Employee ID: ";
    cin>>emp_id;
    cout<<"Enter Salary(in Lakhs): ";
    cin>>salary;
    cout<<"Enter Number of Years Employee is Working with The Company: ";
    cin>>yr;
    cout<<"Enter Profit Generated For Company(in Lakhs): ";
    cin>>profit;
    cout<<"Enter How Many Research Projects Employee has Worked On: ";
    cin>>res_pro;
    cout<<"Enter How Many Research Projects in Pipeline: ";
    cin>>res_pro_pipe;
    if(yr>=1 and profit>=1 and res_pro>=1 || yr>=1 and profit>=1 and res_pro_pipe>=1 || yr>=1 and res_pro>=1 and res_pro_pipe>=1 || profit>=1 and res_pro>=1 and res_pro_pipe>=1){
        cout<<"You are Eligible for Salary Increment!!!";
        comp(&salary);
        cout<<"\nYour Salary After Increment is(in Lakhs): "<<salary<<"L";
    }
    else{
        cout<<"Sorry, You are Not Eligible for Salary Increment.";
    }
    return 0;
}