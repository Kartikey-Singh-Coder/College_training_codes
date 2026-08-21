#include <stdio.h>
#include <unistd.h>
void hanoi(const int n, const char from, const char aux,const  char to)
{
    if (n == 1) {
        printf("Move disk 1 from %c to %c\n", from, to);
        return;
    }
    hanoi(n - 1, from, to, aux);
    printf("\rMove disk %d from %c to %c\n", n, from, to);
    hanoi(n - 1, aux, from, to);
}
int main() {
    hanoi(4, 'A', 'B', 'C');
}