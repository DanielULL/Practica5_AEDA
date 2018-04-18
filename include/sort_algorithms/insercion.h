#ifndef INSERCION_H
#define INSERCION_H

#include <vector>
#include <iostream>
using namespace std;

template <class clave>
int insercion (vector<clave> v)
{
    int count = 1;
    int j;
    clave aux;
    int sz = v.size();
    for(int i = 1; i < sz; i++)
    {
        aux = v[i];
        j = i-1;

        while( ( v[j] > aux) && (j >= 0))
        {
            v[j+1] = v[j];
            j--;
            count++;
        }

        v[j+1] = aux;

    }

    return count;
}


template <class clave>
void insercion_d (vector<clave> v)
{
    cout<<"Insercion:\n";
    cout<<"Vector Original:\n";
    write(v);
    getchar();

    int j;
    clave aux;
    int sz = v.size();
    for(int i = 1; i < sz; i++)
    {
        aux = v[i];
        j = i-1;

        while( ( v[j] > aux) && (j >= 0))
        {
            v[j+1] = v[j];
            write_demostracion(v,j+1,j);
            j--;

        }

        v[j+1] = aux;
        write_demostracion(v,j+1,i);


    }


}
#endif // INSERCION_H
