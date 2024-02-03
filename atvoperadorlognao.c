#include <stdio.h>
int main(){
    int resto, x, eh_par;
    scanf("%i", &x);
    resto = (x % 2);
    eh_par = (resto == 0);
    if (! eh_par){
        printf("Impar\n");
    }
return 0;
}
