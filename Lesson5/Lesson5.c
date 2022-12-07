#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

void Exercise2() {
    char c;
    printf("Enter an character: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        printf("%c is an character in alphabet", c);
    } else if(c > '1' && c < '9') {
        printf("%c is a number", c);
    } else {
        printf("%c is a special character", c);
    }
}

void Exercise3() {
    for(int i = 200; i <= 300; i++) {
        if(i % 9 == 0) {
            printf("%d\n", i);
        }
    }
}

void Exercise4() {
    int n;

    char tableLine() {
        printf("======================================\n");
    } 

    tableLine();
    printf("Bookstore Demo\n");
    tableLine();
    printf("1. Insert Book\n");
    printf("2. Search Book By ISBN\n");
    printf("3. Delete Book By ISBN\n");
    printf("4. Sort Books list\n");
    printf("5. Display All Books\n");
    printf("6. Exit\n");
    tableLine();
    printf("Enter Choice: ");
    scanf("%d", &n);

    switch(n) {
        case 1:
            tableLine();
            printf("1. Insert Book\n");
            tableLine();
            break;
        case 2:
            tableLine();
            printf("2. Search Book By ISBN\n");
            tableLine();
            break;
        case 3:
            tableLine();
            printf("3. Delete Book By ISBN\n");
            tableLine();
            break;
        case 4:
            tableLine();
            printf("4. Sort Books list\n");
            tableLine();
            break;
        case 5:
            tableLine();
            printf("5. Display All Books\n");
            tableLine();
            break;
        case 6:
            exit(0);
            break;
        default:
            Exercise4();
            break;
    }
}

void Exercise5() {
    int sum = 0;
    int n;
    printf("Enter an character string: ");
    scanf("%d", &n);
    for(sum = 0; sum += n % 10; n /= 10) {
        if(n % 10 != 0) {
            printf("%d\n", sum);
        }
    }
}

void Exercise6() {
    int n;
    int m;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("Enter m: ");
    scanf("%d", &m);

    if(n < m) {
        for(int i = n; i <= m; i++) {
            if(i % 7 == 0) {
                printf("%d\n", i);
            }
        }
    } else if(m < n) {
         for(int i = m; i <= n; i++) {
            if(i % 7 == 0) {
                printf("%d\n", i);
            }
        }
    } else {
        if(n % 7 == 0) {
            printf("%d", n);
        }
    }
}

void Exercise7() {
    int n;
    int prev = 0;
    int next = 1;
    int nextTerm = prev + next;
    printf("Enter length of fibonacci numbers: ");
    scanf("%d", &n);
    printf("Fibonacci Series: %d, %d, ", prev, next);
    for(int i = 3; i <= n; i++) {
        printf("%d, ", nextTerm);
        prev = next;
        next = nextTerm;
        nextTerm = prev + next;
    }
}

int Exercise8() {
    int n;
    printf("Enter length of prime numbers: ");
    scanf("%d", &n);

    int isPrime(int n) {
        int i;
        for(i = 2; i < n; i++) {
            if(n % i == 0) {
                break;
            }
        }
        if(i == n) {
            return 1;
        }
        return 0;
    }

    for(int i = 0; i <= n; i++) {
        if(isPrime(i) == 1)
            printf("%d, ", i);
    }
}

void Exercise9() {
    long long binaryNumber = 0;
    int d;
    int p = 0;
    printf("Enter a number between 0 - 32: ");
    scanf("%d", &d);

    while(d >= 1) {
        binaryNumber += (d % 2) * pow(10, p);
        p++;
        d /= 2;
    }    
    printf("BinaryNumber is %d", binaryNumber);
}

int main() {
    // Exercise2();
    // Exercise3();
    // Exercise4();
    // Exercise5();
    // Exercise6();
    // Exercise7();
    // Exercise8();
    // Exercise9();
    return 0;
}