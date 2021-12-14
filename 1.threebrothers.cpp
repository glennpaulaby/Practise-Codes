#include<iostream> 
using namespace std;
int main(){
    int bro1,bro2,bro3; 
cin>>bro1>>bro2>>bro3;
if(bro1>bro2 && bro1>bro3) {
cout<<bro1<<endl;
    
}
else if(bro3>bro1 && bro3>bro2){
    cout<<bro3<<endl;
    } 
    else
    {
        cout<<bro2<<endl;
        
    }
    return 0;
    
}