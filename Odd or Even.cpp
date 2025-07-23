//EXPERIMENT-5
// MAITRAIYEE VASHISTHA
// 24070123057
// ENTC A3
//Problem Statement: Write a program in C++ to find whether a given number is even or odd.

#include <iostream>
using namespace std;

int main() {
  int num;
  cout<<"Enter the number:"<<endl;
  cin>>num;
  if(num%2==0){
      cout<<"The given number is even number."<<endl;
  }
  else{
      cout<<"The given number is odd number."<<endl;
  }
    return 0;
}


/*Output
Enter the number: 62 
The given number is even.*/
