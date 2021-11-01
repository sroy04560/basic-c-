#include<iostream>
using namespace std;

int min(){
    int pocketMoney=3000;
    for (int dat=1;dat<=30;dat++){
        if(dat%2==0){
            continue;
        }
        
        cout<<"Gooo outsideeee";
        if (pocketMoney==0)
        {
            break;
        }
        pocketMoney=pocketMoney-300;
    }
    return 0;
}