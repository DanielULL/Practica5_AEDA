#ifndef BURBUJA_H
#define BURBUJA_H
#include <vector>
#include "include/sort_algorithms/general.h"

using namespace std;

template <class clave>
int burbuja (vector<clave> v)
{
    int sz = v.size();
    int count = 0;

    for(int i = 1; i < sz; i++)
        for( int j = 0; j < sz - i; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
            }
            count++;
        }

    write(v);
    return count;
}

template <class clave>
void burbuja_d (vector<clave> v)
{
    int sz = v.size();
    cout<<"Burbuja:\n";
    cout<<"Vector Original:\n";
    write(v);
    getchar();

    for(int i = 1; i < sz; i++)
        for( int j = 0; j < sz - i; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j],v[j+1]);
                write_demostracion(v,j,j+1);
            }

        }

    write(v);

}


#endif // BURBUJA_H
