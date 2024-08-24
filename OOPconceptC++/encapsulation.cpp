#include<iostream>
#include<string>
#include<list>

using namespace std;

class EmployeesDetail{
private:
    string Name;
    int Age;
    string Id;
    int empGrade;
    list <string> address;

public:
EmployeesDetail(string name, int age, string id){
    Name = name;
    Age = age;
    Id=id;
    empGrade=0;
};

void posgrade(){
    empGrade+=1;
}

void neggrade(){
    if(empGrade>0){
      empGrade-=1;
    }
}    

void Address(string place){
    address.push_back(place);
}
      
void GetInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Age: "<<Age<<endl;
    cout<<"Id: "<<Id<<endl;
    cout<<"Grade: "<<empGrade<<endl;
    cout<<"Address: "<<endl;
    for(string i:address){
        cout<<i<<endl;
    }
}
};


int main(){
    EmployeesDetail emp("Ashok",123,"008CCE");
    emp.Address("anna nagar");
    emp.Address("allankar threatre");

    emp.posgrade();
    emp.posgrade();
    emp.neggrade();
    emp.GetInfo();
}