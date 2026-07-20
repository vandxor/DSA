#include<iostream>
using namespace std;
int main(){
int i;
int j;

// 1.

for(i = 0; i<5; i++){

  for(j=0; j<5; j++){

    cout<<"*";
  }
  cout<<endl;

}

/*
*****
*****
*****
*****
*****
*/

// 2.

for(i = 0; i<6; i++){

  for(j=0; j<i; j++){

    cout<<"*";
  }
  cout<<endl;

}

/*
*
**
***
****
*****

*/

// 3.

for(i = 0; i<6; i++){

  for(j=0; j<i; j++){

    cout<<j+1;
  }
  cout<<endl;

}

/*

1
12
123
1234
12345
*/

// 4.

for(i = 0; i<6; i++){  //i is 0, j = 0, thus, it prints nothing in first line

  for(j=0; j<i; j++){

    cout<<i;
  }
  cout<<endl;

}

/*


1
22
333
4444
55555

*/
//5.
 cout<<endl;


for(i = 0; i<6; i++){

  for(j=5; j>i; j--){

    cout<<"*";
  }
  cout<<endl;

}

/*
*****
****
***
**
*

*/


//6.


for(i = 6; i>0; i--){

  for(j=1; j<i; j++){

    cout<<j;
  }
  cout<<endl;

}







}