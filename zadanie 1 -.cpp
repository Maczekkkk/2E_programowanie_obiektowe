#include <iostream>
#include <string>

using namespace std;

int main()
{
    string logi="KAKA";
    string haslo="jeyjey";
    string h,ll;
    int proby=0;
    int mproby=3;
    
    
    while(proby<mproby){
    
   cout<<"Podaj login:"<<endl;
   cin>>ll;
   cout<<"Podaj haslo:"<<endl;
   cin>>h;
   
   if(ll==logi && h==haslo)
   {
      cout<<"Witamy Użytkowniku"<<endl;
      break;
   }
   else
   {
       cout<<"Logowanie nie powiodlo sie"<<endl;
       proby++;
   }
    }
    if(proby==mproby)
    {
        cout<<"Konto zostało zablokowane"<<endl;
    }
   
    

    return 0;
}