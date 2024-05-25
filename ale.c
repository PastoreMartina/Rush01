#include <unistd.h>
int iter(int i, int j)
{
    int matr[4][4];
    int app=0;
    int app2=0;
    int appi=0;
    int appj=0;
    while(appi<4)
    {
        if(matr[appi][j]==0)
            app++;
        appi++;
    }
    while(appj<4)
    {
        if(matr[i][appj]==0)
            app2;
        appj++;
    }
    if(app<app2)
        return appi;
    return appj;
}
