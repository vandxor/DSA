#include<iostream>

using namespace std;
int main(){



int i, j,k;

for(i = 5; i>0; i--){


  for(j=i-1; j>0; j--){

    cout<<" ";
  }
  for(j=5; j>i; j--){

    cout<<"*";
  }

  for(j=1; j<5-i; j++){

    cout<<"*";
  }

    cout<<endl;


  }
 





}






