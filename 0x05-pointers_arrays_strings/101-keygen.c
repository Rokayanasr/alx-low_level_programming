#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LEN 63

int main(void)
{
    char password[PASSWORD_LEN + 1] = {0};
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789,.-#'?!";
    const size_t charset_size = sizeof(charset) - 1;

    srand(time(NULL));

    for (int i = 0; i < PASSWORD_LEN; i++) {
      password[i] = charset[rand() % charset_size];
    }

    printf("%s\n", password);

    return 0;
}
