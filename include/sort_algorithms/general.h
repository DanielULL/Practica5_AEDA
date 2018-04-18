#ifndef GENERAL_H
#define GENERAL_H
#include <vector>
#include <iostream>

using namespace std;

template <class clave>
void swap(clave &a,clave &b)
{
    clave temp = a;
    a = b;
    b = temp;

}

template <class clave>
void write(vector<clave> v)
{
    for(int i = 0; i < v.size(); i++)
        cout << v[i] << "\t";

    cout<<"\n";
}


template <class clave>
void write_demostracion(vector<clave> v, int a, int b)
{

    for(int i = 0; i < v.size(); i++)
        if(i==a||i==b)
        cout<< "\033[1;32m"<<v[i]<< "\033[0m"<<"\t";
        else
        cout << v[i] << "\t";

    cout<<"\n";

    getchar();
}

#endif // GENERAL_H
