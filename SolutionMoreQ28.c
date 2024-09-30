#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <time.h>

int main()
{
    FILE *ptrlog = fopen("asset//log.txt", "w");

    time_t current_time = time(NULL);

    struct tm *timeb = localtime(&current_time);

    fprintf(ptrlog, "Current Date: %d-%d-%d\n", timeb->tm_year + 1900, timeb->tm_mon + 1, timeb->tm_mday);
    fprintf(ptrlog, "Current Date: %s\n", asctime(timeb));

    fclose(ptrlog);
}
