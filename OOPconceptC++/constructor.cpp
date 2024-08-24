#include<iostream>
#include<string>
#include<list>

using namespace std;

class EmployeesDetail{
public:
    string Name;
    int Age;
    string Id;
    list <string> address;

      EmployeesDetail(string name, int age, string id){
        Name = name;
        Age = age;
        Id=id;
      }
      
      void GetInfo(){
        cout<<"Name: "<<Name<<endl;
        cout<<"Age: "<<Age<<endl;
        cout<<"Id: "<<Id<<endl;
        cout<<"Address: "<<endl;
        for(string i:address){
            cout<<i<<endl;
            }
      }
};
int main(){
    EmployeesDetail emp("Ashok",123,"008CCE");
    emp.address.push_back("anna nagar");
    emp.address.push_back("allankar threatre");
    emp.GetInfo();

    emp.GetInfo();
}