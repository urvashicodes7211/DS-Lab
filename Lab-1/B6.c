/*WAP to convert seconds into hours, minutes & seconds and print in HH:MM:SS 
[e.g. 10000 seconds mean 2:46:40 (2 Hours, 46 Minutes, 40 Seconds)].*/
#include<stdio.h>
int main(){
    int sec , min , hour ,sec1 ,sec2;
    printf("Enter seconds :");
    scanf("%d",&sec);
    hour = sec / 3600;
    sec1 = sec % 3600;
    min = sec1 / 60;
    sec2 = sec1 % 60;
    printf("%02d:%02d:%02d",hour,min,sec2);
    return 0;
}