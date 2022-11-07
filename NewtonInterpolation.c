#include <stdlib.h>
#include <stdio.h>


int main(){

    int n;
    float xp;
    int j = 1, i;
    float f1, f2, fp;

    printf("Enter amount of data: ");
    scanf("%d", &n);

    float x[n];
    float fx[n];
    float p[n];

    for (int i = 0; i<n; i++){
        printf("Enter with x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("Enter with fx[%d] = ", i);
        scanf("%f", &fx[i]);
    }
    
    printf("Enter interpolation point: ");
	scanf("%f", &xp);

    fp = fx[0];

    do{
        for (i=0;i<n;i++){
            p[i] = ((fx[i+1]-fx[i])/(x[i+j]-x[i]));
            fx[i]=p[i];
        }
        f1 = 1;
        for(i=0;i<j;i++){
            f1*=(xp-x[i]);
        }
        f2+=(fx[0]*f1);
        n--;
        j++;
    }while(n!=1);
    fp = f2+fp;

    printf("Interpolated value at %.2f is %.2f.", xp, fp);
    fflush(stdin);
    getchar();

    return 0;
}