#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int computer();
int main(){
   int x;
   int y;
   int flag;
   int p = 0;
   int c = 0;
   printf("Welcome To The Game\n");
   printf("Enter no. which you want to choose\n");
   game :{
    printf("1.Snake \n2.Water \n3.Gun \n");
    scanf("%d",&x);
    y = computer();
    printf("Computer Chooses : %d \n",y);
    switch (x)
    {
    case 1:{
              if(y==1){
                printf("Match Draw \n");
              }
              else if(y==2){
                printf("Snake Defeats Water \nYou wins \n");
                p++;
              }
              else {
                printf("Snake Not Defeats Gun \nComputer wins \n");
                c++;
              }
             break;
             }
    case 2:{
              if(y==1){
                printf("Water Not Defeats Snake \nComputer Wins \n");
                c++;
              }
              else if (y==2)
              {
               printf("Match Draw \n");
              }
              else{
               printf("Water Defeats \nYou Wins \n");
               p++;
              }
        break;
    }    
    case 3:{
            if(y==1){
               printf("Gun Defeats Snake \nYou Wins \n");
               p++;
              }
              else if (y==2)
              {
               printf("Gun Not Defeats Water \nComputer Wins \n");
               c++;
              }
              else{
                printf("Match Draw \n");
              }
        break;
    }
    default:{
        printf("You entered wrong no. please choose again \n");
        goto game;
    }
    }
    choose :{
    printf("Choose \n1.Play again \n2.Exit and see points \n3.Exit only \n");
    scanf("%d",&flag);
    if(flag==1){
        goto game ;
    }
    else if (flag==2)
    {
       printf("Your point : %d \nCompter point : %d",p,c);
       exit(1);
    }
    else if (flag==3)
    {
        exit(1);
    }
    else{
        printf("You entered wrong no. please choose again \n");
        goto choose;
    }
   }
   } 
}
int computer(){
    srand(time(NULL));
    return ((rand()%3) + 1);
}