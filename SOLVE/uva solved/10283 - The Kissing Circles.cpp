#include <cstdio>
#include <cstring>
#include <cmath>

using namespace std;

const double PI = acos(-1);

int main()
{
    double R, n;



    while (scanf("%lf%lf", &R, &n) == 2) {

        if (n == 1) {
            printf("%.10lf %.10lf %.10lf\n", R, 0.0, 0.0);
            continue;
        }

        double r = R * sin(PI / n) / (1 + sin(PI / n));
        double I = 0.5 * n * (R - r) * (R - r)* sin(2 * PI / n) - 0.5 * PI * r * r * (n - 2);
        double E = PI * R * R - n * PI * r * r - I;

        printf("%.10lf %.10lf %.10lf\n", r, I, E);
    }
    return 0;
}
