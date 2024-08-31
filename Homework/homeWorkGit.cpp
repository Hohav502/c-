#include<iostream>
using namespace std;
void menuu(){
    cout<<"===========| Menu |=========="<<endl;
    cout<<"1. USD to KHR"<<endl;
    cout<<"2. KHR to USD"<<endl;
    cout<<"3. EUR to USD"<<endl;
    cout<<"0. Exit"<<endl;
}
void usdToKhr(){
    float usd;
    int khr;
    cout<<" Input USD=";cin>>usd;
    cout<<"USD= \""<<usd*4100<<"Riel\""<<endl;
}
void khrToUsd(){
    float usd;
    int khr;
    cout<<" Input KHR=";cin>>usd;
    cout<<"KHR= \""<<khr*4100<<"USD\""<<endl;
}
void eurTousd(){
    float usd;
    float eur;
    cout<<" Input EUR=";cin>>usd;
    cout<<"EUR= \""<<eur*1.2<<"USD\""<<endl;
}
int main(){
    system("cls");
    menuu();
        cout<<"Choose option:";
        int option;
        cin>>option;
        switch(option){
            case 1:{
              usdToKhr();
              cout<<"Thanks!!"<<endl;
              break;  
            }
            case 2:{
              eurTousd();
              cout<<"Thanks!!"<<endl;
              break;  
            }
            case 3:{
              khrToUsd();
              cout<<"Thanks!!"<<endl;
              break;  
            }
            case 0:{
            cout<<"You leave this option"<<endl;
                break;
            }
            default:{
                cout<<"Invalid option"<<endl;
                break;
            }
        }
    

    return 0;
}