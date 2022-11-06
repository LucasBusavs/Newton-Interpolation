#include <stdlib.h>
#include <stdio.h>


int main(){

    int n;
    float xp, p, fp = 0;

    printf("Enter amount of data: ");
    scanf("%d", &n);

    float x[n];
    float fx[n];

    for (int i = 0; i<n; i++){
        printf("Enter with x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("Enter with fx[%d] = ", i);
        scanf("%f", &fx[i]);
    }

    printf("Enter interpolation point: ");
	scanf("%f", &xp);

    


    printf("Interpolated value at %.4f is %.4f.", xp, fp);
    getchar();

    return 0;
}