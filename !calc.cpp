#include <iostream>
#include <string>
#include <cmath>
#include <windows.h>
using namespace std;

int main(){
cout<<"welcome to cpp-calc V.1.1.4!\n\n"<<"loading modules...[";
for(int i;i<=77;i++){
    cout<<"=";
    Sleep(20);
}
cout<<"]loading finished \n";
double num1,num2;
while(true){
int f=0;
cout<<"\nchoose a function(1 for+,2 for-,3for* or 4 for/,also 5 for square, 6 for square root)\n";
cin>>f;

if(f==1){
cout<<"insert your 1st number:" ;
cin>>num1;
cout<<"insert your 2st number:" ;
cin>>num2;
cout<<"the answer is:"<<num1+num2<<"\n";
}
else if(f==2){
cout<<"insert your 1st number:" ;
cin>>num1;
cout<<"insert your 2st number:" ;
cin>>num2;
cout<<"the answer is:"<<num1-num2<<"\n";
}
else if(f==3){
cout<<"insert your 1st number:" ;
cin>>num1;
cout<<"insert your 2st number:" ;
cin>>num2;
cout<<"the answer is:"<<num1*num2<<"\n";
}
else if(f==4){
cout<<"insert your 1st number:" ;
cin>>num1;
cout<<"insert your 2st number:" ;
cin>>num2;
cout<<"the answer is:"<<num1/num2<<"\n";
}
else if(f==4){
cout<<"insert your number:" ;
cin>>num1;
cout<<"the answer is:"<<num1*num1<<"\n";
}
else if(f==6){
cout<<"insert your number:" ;
cin>>num1;
cout<<"the answer is:"<<sqrt(num1)<<"\n";
}
}
return 0;
}
