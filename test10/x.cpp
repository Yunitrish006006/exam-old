#include <stdio.h>
#include <iostream>
using namespace std;
// int main() {

//     int a[] = {12,13,14,15,16};

//     int k = 5;

//     printf("%d",*(a+k-1));

//     cout<<&a[k-1]<<endl;

//     cout<<sizeof(a)<<","<<sizeof(*a)<<","<<sizeof(a[0])<<","<<endl;

//     return 0;
// }


int main() {
    int i=-3,j=2,k=0,m;
    m=++i && ++j || ++k;
    printf("%d, %d,%d, %d", i, j, k, m);
    return 0;
}