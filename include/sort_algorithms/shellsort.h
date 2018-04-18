#ifndef SHELLSORT_H
#define SHELLSORT_H

#include "include/sort_algorithms/general.h"
#include <vector>

using namespace std;

template <class clave>
int shellsort(vector<clave> v, double alfa)
{
    int sz = v.size();
    int count = 0;


    for (int gap = sz*alfa; gap > 0; gap *= alfa)

        for (int i = gap; i < sz; i++)

            for (int j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)
            {
                count++;
                swap(v[j],v[j+gap]);

            }

        write(v);
        return count;
}





template <class clave>
void shellsort_d(vector<clave> v, double alfa)
{
    int sz = v.size();
    cout<<"ShellSort:\n";
    cout<<"Vector Original:\n";
    write(v);
    getchar();

    for (int gap = sz*alfa; gap > 0; gap *= alfa)

        for (int i = gap; i < sz; i++)

            for (int j=i-gap; j>=0 && v[j]>v[j+gap]; j-=gap)
            {

                swap(v[j],v[j+gap]);
                write_demostracion(v,j,j+gap);
            }


}



#endif // SHELLSORT_H
