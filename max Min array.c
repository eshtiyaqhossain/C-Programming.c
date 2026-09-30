#include <stdio.h>

int main()
{
    int n;

    printf("How many numbers: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input!\n");
        return 1;
    }

    // ইউজার n ইনপুট দেওয়ার পর ঠিক n সাইজের অ্যারে তৈরি হবে
    int num[n];

    for (int i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num[i]);
    }

    int max = num[0];
    int min = num[0];

    for (int i = 1; i < n; i++) {
        if (num[i] > max) max = num[i];
        if (num[i] < min) min = num[i];
    }

    printf("\nMaximum = %d\n", max);
    printf("Minimum = %d\n", min);

    return 0;
}
