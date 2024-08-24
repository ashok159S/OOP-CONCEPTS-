#include<iostream>

using namespace std;

class Employee{
private:
   int salary;
public:
   void setsalary(int s){
       salary=s;
   }
   
    int getsalary(){
       return salary;
   }
};
int main(){
    Employee sal;
    sal.setsalary(20000);
   cout<< sal.getsalary();
   return 0;
}