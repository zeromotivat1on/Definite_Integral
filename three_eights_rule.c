#include <stdio.h>

// Function under our integral
double f(double x) {

    return (x * x);

}

int main() {

    /*
    
    f.n -> function (f) with index n
    h -> step
    f.n = a + i * h

    Simpson’s 3/8th Rule
    Integral[a, b] (f(x) * dx) = {

        3 * h / 8 (f.0 + 3 * f.1 + 3 * f.2 + 2 * f.3 + ... + 3 * f.(n - 1) + f.n)

    }

    */

    int sub_intervals = 0;
    double lower_limit = 0, upper_limit = 0, x = 0;

    printf("Enter lower limit of integral:\n");
    scanf("%lf", &lower_limit);

    printf("Enter upper limit of integral:\n");
    scanf("%lf", &upper_limit);

    printf("Enter number of sub intervals:\n");
    scanf("%d", &sub_intervals);

    double step = (upper_limit - lower_limit) / sub_intervals;

    double integral = f(lower_limit) + f(upper_limit);

    for(int i = 1; i < sub_intervals; ++i) {

        x = lower_limit + (step * i);

        if(i % 3 == 0) {

            integral += (2 * f(x));

        } else {

            integral += (3 * f(x));

        }

    }

    integral *= step * 3 / 8;

    printf("The integral is:%lf\n", upper_limit > lower_limit ? integral : -integral);
}
