#include <iostream>
#include <algorithm>  
#include<math.h>
using namespace std;

int main(){
    int cir = 1, n;
    while(scanf("%d", &n) != EOF){
        int D_p = 1 + floor((n + 1) * log10(3) - n * log10(2));
        printf("Case %d: %d\n", cir, D_p);
        cir++;
    }
    return 0;
}
