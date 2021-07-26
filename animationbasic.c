#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<string.h>
void delay(int no_of_millisecond){
    clock_t start_time = clock();
    while (clock()<start_time+no_of_millisecond);
    
}
int main(){
    char name[]="Aayush Luitel ";
    int x = 0,i;
    while(x<strlen(name)+1)
{
        for ( i = 0; i < x; i++)
        {
            printf("%c",name[i]);    
        }
        
        x++;
        delay(250);
        if(x!=strlen(name)+1){
        system("cls");
    }
    }
    return 0;
}
