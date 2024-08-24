#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Employee{
public:
    string Name;
    int Id;
    int Age;
    string Dept;
    
    void input(){
        cout<<"Enter name:";
        cin>>Name;
        cout<<"Enter Id";
        cin>>Id;
        cout<<"Enter the Age:";
        cin>>Age;
        cout<<"Enter the Dept:";
        cin>>Dept;
    }
    int count=1;
    void display(){
        cout<<"The name of "<<count<<"Employee:"<<Name<<endl;
        cout<<"The Id of "<<count<<"Employee:"<<Id<<endl;
        cout<<"The Age of "<<count<<"Employee:"<<Age<<endl;
         cout<<"The Dept of "<<count<<"Employee:"<<Dept<<endl;
         count++;
    }
};
int main(){
    int n;
    cin>>n;
    vector<Employee> emp(n);
    for(int i=0;i<n;i++){
        emp[i].input();
    }
    for(int i=0;i<n;i++){
        emp[i].display();
    }
    
    
    return 0;
}