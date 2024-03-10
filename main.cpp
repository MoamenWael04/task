#include <iostream>
using namespace std;
int main() {
   int n,x=0,y=0,z,m; // no of turns
   cin>>n;
   for (int i=0;i<n;)
   {
       cin>>z;
       x+=z;
       i++;
       cin>>m;
       y+=m;
       i++;
   }
   if (x>y)
       cout<<"Folka";
   else
       cout<<"Cancelo";


}




