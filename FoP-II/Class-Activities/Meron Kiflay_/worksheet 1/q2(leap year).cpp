#include <iostream>
using namespace std;
int leapyear(int year);

int main(){
    int year;
    cout<<"Enter year please."<<endl;
    cin>>year;
    cout<<leapyear(year);
}

int leapyear(int year){
    if (year % 400 == 0){
        return true;
        }
    else if (year % 100 == 0){
        return false;
    }
    else if(year % 4 ==0){
        return true;
    }
    else{
        return false;
    }
}
