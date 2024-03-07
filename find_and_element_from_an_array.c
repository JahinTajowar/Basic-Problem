#include <stdio.h>
int main()
{
    int n;
    printf("Enter the Array size: ");
    scanf("%d", &n);
    int array[n];
    printf("Enter the %d array elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }
    int target;
    printf("Enter the integer to find: ");
    scanf("%d", &target);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == target)
        {
            index = i;
            break;
        }
    }
    if (index != -1)
    {
        printf("Integer %d found at index %d\n", target, index);
    }
    else
    {
        printf("Integer %d not found in the array\n", target);
    }

    return 0;
}
