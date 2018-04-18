#include <iostream>
#include "include/sort_algorithms/insercion.h"
#include "include/sort_algorithms/burbuja.h"
#include "include/sort_algorithms/heapsort.h"
#include "include/sort_algorithms/general.h"
#include "include/sort_algorithms/quicksort.h"
#include "include/dni_name.h"
#include "include/sort_algorithms/shellsort.h"
#include <vector>

#define N_ALGORITHM 5

using namespace std;

int main()
{



    int op;
    cout<<"Selecciona el modo: \n";
    cout<<"1.Desmostracion\n";
    cout<<"2.Estadística\n";
    cout<<"0.Salir\n>";

    cin >> op;

    switch (op)
    {
    case 1:
    {
        int N,algoritmo;


        cout<<"Introduce el tamaño de los vectores\n";
        cin>>N;

        vector<dni_name> v;
        for(int i = 0; i<N; i++)
        {
            v.push_back(*(new dni_name));
        }

        cout<<"Introduce el algortimo a utilizar\n";
        cout<<"1.Burbuja\n";
        cout<<"2.Insercion\n";
        cout<<"3.Heapsort\n";
        cout<<"4.Quicksort\n";
        cout<<"5.ShellSort\n";
        cout<<"0.Salir\n";
        cin>>algoritmo;
        cin.ignore();
        system("clear");

        switch (algoritmo) {
        case 1:
            burbuja_d(v);
            break;

        case 2:
            insercion_d(v);
            break;

        case 3:
            heapsort_d(v);
            break;

        case 4:
            Qsort_d(v);
            break;

        case 5:
            double alfa;
            cout<< "Introduce el valor alfa\n";
            cin>>alfa;
            shellsort_d(v,alfa);
            break;

        default:
            break;
        }


        break;

    }

    case 2:
    {

        int N,nPruebas;
        double alfa;
        cout<<"Introduce el tamaño de los vectores\n";
        cin>>N;

        cout<<"Introduce el número de pruebas\n";
        cin>>nPruebas;

        cout<<"Introduce el alfa\n";
        cin>>alfa;

        vector< vector<dni_name> > banco(nPruebas);

        for(int k = 0; k < nPruebas ; k++)
            for(int j = 0; j < N ; j++)
                banco[k].push_back(*(new dni_name));


        vector<int> min(N_ALGORITHM,0);
        vector<int> max(N_ALGORITHM,0);
        vector<int> acumulado(N_ALGORITHM,0);
        int aux;

        int (*sort_array[])(vector<dni_name>) = { burbuja,insercion,heapsort,Qsort};


        for(int j = 0; j < nPruebas ; j++)
            for(int k = 0; k < N_ALGORITHM -1  ; k++)
            {
                aux = sort_array[k](banco[j]);
                if(min[k]==0)
                    min[k]=aux;
                else
                    if(min[k]>aux)
                        min[k]=aux;

                if(max[k]==0)
                    max[k]=aux;
                else
                    if(max[k]<aux)
                        max[k]=aux;

                acumulado[k]+=aux;


            }

        for(int j = 0; j < nPruebas ; j++)
        {
            aux = shellsort(banco[j],alfa);
            if(min[4]==0)
                min[4]=aux;
            else
                if(min[4]>aux)
                    min[4]=aux;

            if(max[4]==0)
                max[4]=aux;
            else
                if(max[4]<aux)
                    max[4]=aux;

            acumulado[4]+=aux;
        }


        vector<string> nombres {"Burbuja  ","Insercion","Heapsort","Quicksort","Shellsort"};

        cout << "Número de Comparaciones\n\n";
        cout << "Método    \tMínimo\tMedio\tMaximo\n";
        for(int i =0; i < N_ALGORITHM; i++)
            cout<< nombres[i] << "\t" << min[i] << "\t" <<  acumulado[i]/nPruebas<< "\t" << max[i]<<"\n";



        break;
    }

    default:
        break;
    }

return 0;
}
