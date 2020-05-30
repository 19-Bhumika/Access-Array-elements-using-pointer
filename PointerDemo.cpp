#include <iostream>
using namespace std;
int main()
{
   int data[5];
   cout<<"Enter any 5 elements into an array:\n";

   for(int i = 0; i < 5; ++i)	
   {
   	  cout<<"Element "<<i+1<<":";
      cin >> data[i];
   }

   cout <<"\nYou entered:";
   for(int i = 0; i < 5; ++i)
   {
      cout<< endl << *(data + i);
   }

   return 0;
}
