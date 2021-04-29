#include <stdio.h>

void towers(int, char, char, char);

int main()
{
    int num;

    printf("Enter the number of disks : ");
    scanf("%d", &num);
    printf("The sequence of moves involved in the Tower of Hanoi are :\n");
    towers(num, 'A', 'C', 'B');

    return 0;
}
void towers(int num, char A, char B, char C)
{
    if (num == 1)
    {
        printf("\n Move disk 1 from peg %c to peg %c", A,B );
        return;
    }
    towers(num - 1, A, C, B);
    printf("\n Move disk %d from peg %c to peg %c", num, A, B);
    towers(num - 1, C, B, A);
}
