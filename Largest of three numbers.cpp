//EXPERIMENT-5
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
//Problem Statement:Write a program to find the largest number in C++

#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the value of a."<<endl;
    cin>>a;
     cout<<"Enter the value of b."<<endl;
    cin>>b;
     cout<<"Enter the value of c."<<endl;
    cin>>c;
    
    if(a>b& a>c){
        cout<<"a is the largest number."<<endl;
    }else if(b>c & b>a){
        cout<<"b is the largest number."<<endl;
    }else{
       
    cout<<"c is the largest number."<<endl;
    }
    
    
    return 0;
    
}

/*output :
Enter the value of a: 54
Enter the value of b: 75
Enter the value of c: 90
c is the largest number.*/
