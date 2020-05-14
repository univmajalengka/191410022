#include <iostream>
using namespace std;

int main()
{
     for(int baris=9; baris >=1; baris--)
     {
         for(int kolom=1; kolom < baris; kolom ++)
         {
             cout<<" * ";
         }
         cout<<endl;
     }
 return 0;
}
