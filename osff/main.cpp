#include <bits/stdc++.h>

using namespace std;

int main()
{
   struct process
   {
       int remain , location , ps , ms ;

   } ;

   process arr [5] ;


   arr[0].ms = 100 ;   arr[1].ms = 500 ; arr[2].ms = 200 ; arr[3].ms = 300 ; arr[4].ms = 600 ;

   arr[0].ps = 212 ;   arr[1].ps = 417 ; arr[2].ps = 112 ; arr[3].ps = 426 ;

   arr[0].remain = 100 ;   arr[1].remain = 500 ; arr[2].remain = 200 ; arr[3].remain = 300 ; arr[4].remain = 600 ;




   for ( int i = 0 ; i < 4 ; ++i )
   {
       for ( int j = 0 ; j < 5 ; ++j )
       {
           if ( arr[j].remain == arr[j].ms)
           {
            if ( arr[i].ps <= arr[j].ms )
           {
               arr[j].remain = arr[j].ms - arr[i].ps ;
               arr[j].location = arr[i].ps ;
                              break ;
           }
           }

       }
   }

   cout << "memory size \t process added \t remain" << endl ;
   for ( int i = 0 ; i < 5 ; ++i )
   {
       cout << arr[i].ms << "\t \t "  << arr[i].location << "\t \t " << arr[i].remain << "\n" ;
   }
    return 0;
}
