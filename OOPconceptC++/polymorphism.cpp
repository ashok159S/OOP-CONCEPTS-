#include<iostream>
#include<string>
#include<list>

using namespace std;

class YoutubeChannel{
private:
   string Name;
   int Subscribers;
   list<string> PublsihSubscribers;

protected:
   string OwnerName;
   int complabality;
public:
   YoutubeChannel(string name, string ownerName){
       Name=name;
       OwnerName=ownerName;
       Subscribers=0;
       complabality=0;
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
    cout<<"I LOVE YOU MOM"<<endl;
    complabality++;
   }   
};

class SongYoutubeChannel:public YoutubeChannel{
public:
   SongYoutubeChannel(string name, string ownerName):YoutubeChannel(name, ownerName){

   }
   
   void parameters(){
    cout<<"I LOVE YOU FATHER"<<endl;
    complabality++;
   }
};   
int main(){
    CookingYoutubeChannel cookingYC("Tech With Tim", "Tim");
    SongYoutubeChannel songYC("Kelly","kel");
    cookingYC.Publsih("hi");
    songYC.Publsih("Hello World");
    cookingYC.Publsih("Waht is your name");
    cookingYC.parameters();
    cookingYC.negsub();
    cookingYC.possub();
    cookingYC.GetInfo();
    cout<<endl;
    songYC.GetInfo();
    return 0;
}