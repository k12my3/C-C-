//Towers of Hanoi - n disks - recursion

#include <stdio.h>
 
void toh(int num, char from, char to, char aux)
{
    if (num == 1)
    {
        printf("\n Disk 1: %c -> %c", from, to);
        return;
    }

    toh(num - 1, from, aux, to);
    printf("\n Disk %d: %c -> %c", num, from, to);
    toh(num - 1, aux, to, from);
}

int main()
{
    int n;
    
    printf("\nNo. of disks : ");
    scanf("%d", &n);
    printf("\nSteps to be performed:\n");
    toh(n, 'A', 'C', 'B');
    return 0;
}
