Problem: Print the following pattern.
  
         Pattern for N = 4
         1
        23
       345
      4567
*******************************************************************************************
Program:

#include<iostream>
using namespace std;

int main(){
  
    int n;
    cin>>n;
    int i=1,k,val;
    while(i<=n){
        k=1;
        while(k<=n-i)
        {
            cout<<" ";
            k++;
        }
        val=i;
        int j=1;
        while(j<=i)
        {
            cout<<val;
            val++;
            j++;
         }
        cout<<endl;
        i++;
    }
    
}
*******************************************************************************************
Output:
Sample Input :
5
Sample Output :
          1
         23
        345
       4567
      56789

           
