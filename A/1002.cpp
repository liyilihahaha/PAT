#include <cstdio>
double poly[1010] = {0};
int main(){
    int num, count = 0;
    scanf("%d", &num);
    for(int j = 0; j < 2; j++){
        for(int i = 0; i < num; i++){
            int exp;
            double coff;
            scanf("%d%lf", &exp, &coff);
            poly[exp] += coff;
        }
        if(j == 0) scanf("%d", &num);
    }
    for(int i = 0; i <= 1000; i++){
        if(poly[i] != 0){
            count++;
        }
    }
    printf("%d", count);
    for(int i = 1010; i >= 0; i--){
        if(poly[i] != 0){
            printf(" %d %.1lf", i, poly[i]);
        }
    }
    printf("\n");
    return 0;
}
