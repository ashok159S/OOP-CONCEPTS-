#include<iostream>

using namespace std;
class Myclass{
public:
    void honk(){
        cout<<"Hello World!";
    }
};

class Mychild:public Myclass{
public:
};

int main(){
    Mychild child;
    child.honk();
}