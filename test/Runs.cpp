#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, N, n, i, c, m, x;
    double random[100];

    printf("Enter total number of random numbers: ");
    scanf("%d", &n);

    printf("Enter %d random numbers:\n", n);
    for(int i=0; i<n; i++){
        printf("Number%d: ", (i+1));
        scanf("%lf", &random[i]);
    }


    int up = 1;
    int run = 1;
    printf("Runs:\n");
    for(i=1; i<n; i++) {
        if(up) {
            if(random[i] > random[i-1]) {
                printf(" + ");
            }
            else {
                up = 0;
                run++;
                printf(" - ");
            }
        }
        else {
            if(random[i] < random[i-1]){
                printf(" - ");
            }
            else {
                up = 1;
                run++;
                printf(" + ");
            }
        }
    }
    puts("");

    double u = (2*n-1.0)/3.0;
    double sigma_square = (16*n - 29.0) / 90.0;
    double z = (run - u) / sqrt(sigma_square);

    printf("Total Run: %d\n", run);
    printf("Mean %0.2lf\n", u);
    printf("Variance: %0.2lf\n", sigma_square);
    printf("Value of z = %0.2lf\n", z);

    double critical_value, neg_critical_value;
    printf("Enter critical value: ");
    scanf("%lf", &critical_value);
    neg_critical_value = -1 * critical_value;
    if( z >= neg_critical_value && critical_value >= z) printf("Null hypothesis for independence is accepted");
    else printf("Null hypothesis for independence  rejected");
    return 0;
}
