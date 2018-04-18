#ifndef QUICKSORT_H
#define QUICKSORT_H
#include <vector>
#include "include/sort_algorithms/general.h"

template <class clave>
void quicksort( vector<clave> &v, int ini, int fin, int &count)
{
    int i = ini ;
    int f = fin ;

    int p = v[(i+f)/2] ;

    while (i <= f)
    {
        while (v[i] < p) {i++ ; count++;}
        while (v[f] > p) {f-- ; count++;}
        if (i <= f)
        {
            swap(v[f],v[i]);
            i++ ;
            f-- ;
        }
    }

if (ini < f) quicksort(v, ini, f,count) ;
if (i < fin) quicksort(v, i, fin,count) ;


}

template <class clave>
int Qsort( vector<clave> v)
{
    int count=0;
    quicksort(v,0,v.size()-1,count);

    return count;
}



template <class clave>
void quicksort_d( vector<clave> &v, int ini, int fin)
{
    int i = ini ;
    int f = fin ;

    int p = v[(i+f)/2] ;

    while (i <= f)
    {
        while (v[i] < p) {i++ ; }
        while (v[f] > p) {f-- ; }
        if (i <= f)
        {
            swap(v[f],v[i]);
            write_demostracion(v,f,i);
            i++ ;
            f-- ;
        }
    }

if (ini < f) quicksort_d(v, ini, f) ;
if (i < fin) quicksort_d(v, i, fin) ;


}

template <class clave>
void Qsort_d( vector<clave> v)
{
    cout<<"Quicksort:\n";
    cout<<"Vector Original:\n";
    write(v);
    getchar();

    quicksort_d(v,0,v.size()-1);

}


#endif // QUICKSORT_H
