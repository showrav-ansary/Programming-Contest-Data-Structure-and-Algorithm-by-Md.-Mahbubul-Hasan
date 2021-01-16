#include <stdio.h>

int main()
{
    int t, n, x1, y1, z1, x2, y2, z2, xCommon, yCommon, zCommon;

    scanf("%d", &t);
    for (int i = 1; i <= t; i++)
    {
        int xFar = 0, yFar = 0, zFar = 0;
        int xNear = 1001, yNear = 1001, zNear = 1001;
        scanf("%d", &n);
        for (int j = 1; j <= n; j++)
        {
            scanf("%d %d %d %d %d %d", &x1, &y1, &z1, &x2, &y2, &z2);
            
            if (x1 > xFar)
                xFar = x1;

            if (y1 > yFar)
                yFar = y1;

            if (z1 > zFar)
                zFar = z1;

            if (x2 < xNear)
                xNear = x2;

            if (y2 < yNear)
                yNear = y2;

            if (z2 < zNear)
                zNear = z2;
        }
        xCommon = (xNear - xFar);
        yCommon = (yNear - yFar);
        zCommon = (zNear - zFar);

        if (xCommon > 0 && yCommon > 0 && zCommon > 0)
            printf("Case %d: %d\n", i, xCommon * yCommon * zCommon);
        else
            printf("Case %d: 0\n", i);
    }
    return 0;
}