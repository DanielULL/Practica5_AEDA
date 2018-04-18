#ifndef HEAPSORT_H
#define HEAPSORT_H
#include <vector>
#include "include/sort_algorithms/general.h"

using namespace std;

template <class clave>
void baja( int i , vector<clave> &v , int n , int &count)
{

    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;


    count++;
    if (l < n && v[l] > v[largest])
        largest = l;



    count++;
    if (r < n && v[r] > v[largest])
        largest = r;

    if (largest != i)
    {
        swap(v[i], v[largest]);

        baja(largest,v,n,count);
    }
}

template <class clave>
int heapsort (vector<clave> v)
{
   int sz = v.size();
   int count = 0;


     for (int i = sz / 2 - 1; i >= 0; i--)
        baja(i, v, sz, count);


     for (int i=sz-1; i>=0; i--)
     {

         swap(v[0], v[i]);


       baja(0,v,i,count);
     }


     return count;
}




template <class clave>
void baja_d( int i , vector<clave> &v , int n)
{

    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;



    if (l < n && v[l] > v[largest])
        largest = l;




    if (r < n && v[r] > v[largest])
        largest = r;

    if (largest != i)
    {
        swap(v[i], v[largest]);
        write_demostracion(v,i,largest);

        baja_d(largest,v,n);
    }
}

template <class clave>
void heapsort_d (vector<clave> v)
{
   int sz = v.size();
   cout<<"Heapsort:\n";
   cout<<"Vector Orgininal: \n";
   write(v);
   getchar();


     for (int i = sz / 2 - 1; i >= 0; i--)
        baja_d(i, v, sz);


     for (int i=sz-1; i>=0; i--)
     {

         swap(v[0], v[i]);
         write_demostracion(v,0,i);

       baja_d(0,v,i);
     }

     write(v);

}



#endif // HEAPSORT_H
