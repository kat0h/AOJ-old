#include <stdio.h>

int main(){
    int n, x, i, j, k, q;
    
    while(1){
        scanf("%d%d", &n, &x);
        if (n==0&&x==0)break;
        q=0;
        for (i=1;i<=n;++i)
            for(j=i+1;j<=n;++j)
                for(k=j+1;k<=n;++k)
                        if (i+j+k==x)++q;

        printf("%d\n", q);
    }
}
