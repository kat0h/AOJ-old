//ITP1_4_D:   Min, Max and Sum
#include <stdio.h>

int main(){
    int i, n, m;
    int min, max;
    long long sum = 0;
    scanf("%d", &i);
    sum = i = n = m = max = min;
    printf("%d %d %d %d %d %lld", i, n ,m, min, max);
    while(++n > i){
        printf("%d", n);
        scanf("%d", &m);
        if (min > m)
            min = m;
        if (max < m)
            max = m;
        sum += m;
    }
    printf("%d %d %lld\n", min, max, sum);
}