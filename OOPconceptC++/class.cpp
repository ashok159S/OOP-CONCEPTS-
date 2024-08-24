#include<iostream>
#include<string>
#include<list>

 using namespace std;

class EmployeesDetails{
//public class of details    
public:
     string Name;
     int Age;
     string id;
     list <string> address;

};

int main(){
    //employee details
    EmployeesDetails ed;
    ed.Name = "Raul";
    ed.Age = 23;
    ed.id = "1234";
    ed.address.push_back("1234,Main Street");

    //display
    cout<<ed.Name<<endl;
    cout<<ed.Age<<endl;
    cout<<ed.id<<endl;
    for(auto& i:ed.address){
        cout<<i<<endl;
    }


    return 0;
}