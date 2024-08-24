#include<iostream>
#include<string>
#include<list>

using namespace std;

class YoutubeChannel{
private:
   string Name;
   string OwnerName;
   int Subscribers;
   list<string> PublsihSubscribers;

public:
   YoutubeChannel(string name, string ownerName){
       Name=name;
       OwnerName=ownerName;
       Subscribers=0;   
   }
   
   void possub(){
    Subscribers++;
   }

   void negsub(){
    if(Subscribers>0){
        Subscribers--;
    }
   }

   void Publsih(string title){
    PublsihSubscribers.push_back(title);
   }

   void GetInfo(){
    cout<<"Name: "<<Name<<endl;
    cout<<"Owner: "<<OwnerName<<endl;
    cout<<"Subscribers: "<<Subscribers<<endl;
    cout<<"Video: "<<endl;
       for(auto i:PublsihSubscribers){
        cout<<i<<endl;
       }
   }
};

class CookingYoutubeChannel:public YoutubeChannel{
public:
   CookingYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

   }
   
   void parameters(){
    cout<<"I LOVE YOU"<<endl;
   }
   };
int main(){
    CookingYoutubeChannel YC("Tech With Tim", "Tim");
    YC.Publsih("hi");
    YC.Publsih("Hello World");
    YC.Publsih("Waht is your name");
    YC.parameters();
    YC.negsub();
    YC.possub();
    YC.GetInfo();
    return 0;
}