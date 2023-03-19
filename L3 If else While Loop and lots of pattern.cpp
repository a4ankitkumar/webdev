#include<iostream>
using namespace std;
int main(){

  /* int n;
   cin>>n;

   cout<<"The value of n is :"<<n;


   int a;
   cin>>a;

   // A is a positive number
   if(a>0){
    cout<<"A is a positive number" <<endl;
   }
   else{
    cout<<"A is a negative number:" <<endl;
   }

   int a,b;
   cin>>a>>b;
   cout<<"The value of a and b is "<<a <<","<<b;


   int a,b;
   cout<<"Enter the number a" <<endl;
   cin>>a;


   cout<<"Enter the number b" <<endl;
   cin>>b;

   if(a>b){
    cout<<"A is greater than B" <<endl;
   }
    if(b>a){
        cout<<"B is greater than A" <<endl;

       }
     int a;
     cout<<"Enter the value of a" <<endl;
    cin>>a;

    if(a>0){
        cout<<"A is a positive number" <<endl;
    }
    else{
        if(a<0){
            cout<<"A is a negative number" <<endl;
        }
        else{
            cout<<"A is a zero" <<endl;
        }
    }

     int a;
     cout<<"Enter the value of a" <<endl;
    cin>>a;

    if(a>0){
        cout<<"A is a positive number" <<endl;
    }
    else if(a<0){
        cout<<"A is a negative number" <<endl;
    }
     else{
        cout<<"A is zero" <<endl;
     }



 //WHILE LOOP STARTS
   int n;
   cin>>n;
   int i = 1;

   while(i<=n){
    cout<<i <<",";
    i=i+1;
   }

//SUM OF 1 TO N

   int n;
   cin>>n;

   int i = 1;
   int sum = 0;

    while(i<=n){
        sum = sum + i;
        i = i + 1;
    }
  cout<<"Value of sum is "<<sum<<endl;
*/

 //TO FIND PRIME OR NOT

    int n;
    cin>>n;

    int i = 2;
    while(i<n){
        if(n%i==0){
            cout<<"Not Prime";
        }
        else{
            cout<<"prime";
        }
        i = i + 1;
    }

}

