
#include <iostream>
#include <cstdlib>
int main()
{
    int m;
    std::cin >> m;
    int* a = new int[m];
    int* b = new int[m];
    int* c = new int[m];

    

    for (int i = 0; i < m; ++i) {
        c[i] = rand() % 40;
    }

    int k = 0, l = 0;
    for (int i = 0; i < m; ++i) {
        if (c[i] % 2 == 0) {
            a[k++] = c[i];
        }
        else {
            b[l++] = c[i];
        }
    }

    

}

