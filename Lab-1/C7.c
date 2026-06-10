/*WAP  to  convert number  of  days  into  year,  week  &  days  [e.g.  375  days mean  1 
year, 1 week and 3 days].*/
#include<stdio.h>
int main(){
    int day , week , year, day1 , day2 ;
    printf("Enter day :");
    scanf("%d",&day);
    year = day / 365 ; 
    day1 = day % 365 ; 
    week = day1 / 7 ;
    day2 = day1 % 7 ;
    printf("%d year, %d week, %d day",year , week , day2);
    return 0;
}