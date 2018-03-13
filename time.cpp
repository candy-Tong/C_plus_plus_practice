#include<time.h> 
#include<stdio.h>

int main(void)

{

		time_t now ;

        struct tm *tm_now ;

        time(&now) ;

        tm_now = localtime(&now) ;

        printf("%d\n",tm_now->tm_hour*100+ tm_now->tm_min) ;

}
