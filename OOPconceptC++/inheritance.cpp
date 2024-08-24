#include<iostream>

using namespace std;

class vechile{
 public:
    string honk="Harish";
    void brand(){
        cout<<"hello world";
    }
};

class car:public vechile{
public:    
      string name="Hello,I am Ashok.S";
};

int main(){
    car car1;
    car1.brand();
    cout<<car1.honk<<" "<<car1.name;
}