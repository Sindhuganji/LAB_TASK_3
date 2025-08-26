#include <stdio.h>
#include <math.h>
void moveDisk(char from, char to) {
    printf("Move disk from %c to %c\n", from, to);
}
void towerOfHanoi(int n, char src, char aux, char dest) {
    int moves = pow(2, n) - 1;
    if (n % 2 == 0) {
        char temp = dest;
        dest = aux;
        aux = temp;
    }
    for (int i = 1; i <= moves; i++) {
        if (i % 3 == 1) {
            moveDisk(src, dest);
        }
        else if (i % 3 == 2) {
            moveDisk(src, aux);
        }
        else if (i % 3 == 0) {
            moveDisk(aux, dest);
        }
    }
}
int main() {
    int n;
    printf("Enter number of disks: ");
    scanf("%d", &n);
    towerOfHanoi(n, 'A', 'B', 'C');
    return 0;
}