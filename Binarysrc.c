//zahed01x
#include <stdio.h>

int main()
{
    int n, data, l, r, mid, i;
    printf("Enter Value Of Array:");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Number :");
        scanf("%d", &a[i]);
    }

    l = 0;
    r = n - 1;

    printf("Enter Value N : ");
    scanf("%d", &data);

    while (l <= r)
    {
        mid = l + (r - l) / 2;
        if (data == a[mid])
        {
            printf("Data Found at index %d\n", mid);
            return 0;
        }
        else if (data > a[mid])
        {
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }

    printf("Data Not Found\n");
    return 0;
}
