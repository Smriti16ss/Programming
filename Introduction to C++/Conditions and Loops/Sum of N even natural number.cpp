Problem: Given a number N, print sum of all even numbers from 1 to N.
  
***************************************************************************************
Program:

#include<iostream>
using namespace std;

int main(){

 int n,i=2,sum=0;
    cin>>n;
while(i<=n)
{
if(i%2==0){
        sum=sum+i;}
    i=i+2;
}
    cout<<sum;
}
****************************************************************************************
Output:

Sample Input:
8
Sample Output:
20
