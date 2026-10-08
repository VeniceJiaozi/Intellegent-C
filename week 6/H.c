#include <stdio.h>

int main(void) {
    int h1, m1, h2, m2;
    scanf("%d:%d %d:%d", &h1, &m1, &h2, &m2);
    
    int t1 = (h1 - 7) * 60 + m1 - 30;
    int t2 = (h2 - 7) * 60 + m2 - 30;
    
    double dist = 0;
    int s, e;
    
    s = t1 < 0 ? 0 : t1; e = t2 > 10 ? 10 : t2;
    if (s < e) dist += (e - s) * 100.0;
    
    s = t1 < 10 ? 10 : t1; e = t2 > 20 ? 20 : t2;
    if (s < e) dist += (e - s) * 150.0;
    
    s = t1 < 20 ? 20 : t1; e = t2 > 30 ? 30 : t2;
    if (s < e) dist += (e - s) * 50.0;
    
    printf("%.0f米\n", dist);
    return 0;
}