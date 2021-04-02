#include <stdio.h>

// Function under our integral
double f(double x) {

    return (x * x);

}

int main() {

    /*
    
    SUM -> equivalent of math sum sign Σ (sigma)
    step -> rectangle width

    Rectangle Method
    SUM(0, n) {

        rec_width * ( lower_lim + (i * rec_width) );

    }
    
    */

    int sub_intervals = 0;
    double lower_limit = 0, upper_limit = 0;

    printf("Enter lower limit of integral:\n");
    scanf("%lf", &lower_limit);

    printf("Enter upper limit of integral:\n");
    scanf("%lf", &upper_limit);

    printf("Enter number of sub intervals:\n");
    scanf("%d", &sub_intervals);

    double step = (upper_limit - lower_limit) / sub_intervals;

    double integral = 0;

    for(int i = 0; i < sub_intervals; ++i) {

        integral += step * f( lower_limit + (i * step) );

    }

    printf("The integral is:%lf\n", upper_limit > lower_limit ? integral : -integral);
}
