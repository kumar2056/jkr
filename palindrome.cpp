#include <iostream>
using namespace std;
 
int main() {
	 int u, reverse = 0, v;
 
   cin>>u;
 
   v = u;
 
   while (v != 0)
   {
      reverse = reverse * 10;
      reverse = reverse + v%10;
      v = v/10;
   }
 
   if (u == reverse)
      cout<<"yes";
   else
      cout<<"no";
 
	// your code goes here
	return 0;
}
