/*
 Programmers : 24CE052_Pushti Kansara
                 24CE060_Pooja Lingayat
                 24CE062_Dishu Makadiya
AIM: Simple Quiz App With Timer
*/

#include<stdio.h>
#include<time.h>
#define TIME_LIMIT 5

//creating functions to perform task in different levels
void Beginner();
void Tough();
void Advanced();

void main()
{
    system("color 0D");
    int choice,AnotherRound;
    char username[10],password[10], level, x;

   printf("\n===============================================================================================================\n");
   printf("\n================================================================================================================\n");
   printf("\n                             CEUD101 -COMPUTER CONCEPTS AND PROGRAMMING                               ");
   printf("\n                             WELCOME TO THE SIMPLE QUIZ GAME WITH TIMER!!                            \n");
   printf("\n===============================================================================================================\n");
   printf("\n================================================================================================================\n");

    //ask user to create an account
    printf("\nCreate an account:");
    printf("\nuser name must be of max 10 characters");
    printf("\nEnter your user name:");
    scanf("%s",username);
    printf("\nEnter Password:");
    fflush(stdin);
    scanf("%s",password);
    printf("\nUser name successfully created!\n");

    //ask for users choice whether to star or exit game
   x:printf("\n(1)Start Game\n(2)Exit");
    printf("\nEnter your choice:");
    scanf("%d",&choice);

     //if user wants to start the game
    if(choice==1)
    {
        printf("\nHello!! %s",username);
        printf("\nLets begin the game\n");

       printf("\nChoose the level of difficulty:");
        printf("\n(B)Beginner\n(T)Tough\n(A)Advanced\n");
        fflush(stdin);
        scanf("\n%c",&level);

        switch(level)
        {
            case'B':
            Beginner();//Function call for Beginner level questions
            break;

            case'T':
            Tough();  //Function call for Tough level questions
            break;

            case'A':
            Advanced();  //Function call for Advanced level questions
            break;

            default:
            printf("\ninvalid input");
        }
      goto x;
    }

    //if user wants to exit the game
    else if(choice==2)
    {
        printf("\nExited the game!");
    }

    else
    {
        printf("\nInvalid Input");
    }
 //go back to menu
}
void Beginner()
{
    system("color 0E");
    int ScoreRound1=0,choice;
    char ans,level,username[15],x;
    time_t start_time,end_time;


    printf("\nThis round contains 3 questions each of 2 marks");
    printf("\nEach wrong answered question deducts 1 mark!\n");

    printf("\n -------------------------------------YOU HAVE 5 SECONDS FOR EACH QUESTION------------------------------------\n");

    printf("\nQuestion 1:\n What word begins and ends with an 'E' but only has one letter?");
    printf("\nyour options are:\n(A) Elevate  \n(B) Envelop  \n(C) Entangle");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);

    if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
     else if(ans=='B')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound1+=2;
    }
    else
    {
        printf("\nOOPS!your answer is wrong\n");
        ScoreRound1--;
    }
printf("\n________________________________________\n");


    printf("\nQuestion 2:\nWhat falls but doesn't break,and what breaks but doesn't fall?");
    printf("\nyour options are:\n(A) Plate and cup \n(B) Ball and Stone  \n(C) Night and Day");

    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);
     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
     else if(ans=='C')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound1+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound1--;
    }
printf("\n________________________________________\n");


    printf("\nQuestion 3:\n What goes all around the world but stays in a corner?");
    printf("\nyour options are:\n(A) A stamp \n(B) An airplane \n(C) A bird");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);
     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
    else if(ans=='A')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound1+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound1--;
    }

    if(ScoreRound1==3)
    {
        printf("\nHurrah! you anwered all questions correctly\n You get 5 bonus points");
        ScoreRound1+=5;
    }
    printf("\nyour total score is %d",ScoreRound1);
    printf("\nThanks for participating\nWe hope you enjoyed the game!!");

    printf("\n\n                   *                    \n\n");
}

 void Advanced()
 {
     system("color 09");
     int ScoreRound2=0,choice;
    char ans,level,x,username[15];
    time_t start_time,end_time;

    printf("\nThis round contains 3 questions each of 2 marks");
    printf("\nEach wrong answered question deducts 1 mark!\n");

    printf("\nQuestion 1:\nWhat is the capital of Canada?");
    printf("\nyour options are:\n(A) Toronto  \n(B) Ottawa \n(C) Santiago");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);

    if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }

    else if(ans=='B')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound2+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound2--;
    }
printf("\n________________________________________\n");

    printf("\nQuestion 2:\nSmallest country in south asia");
    printf("\nyour options are:\n(A) India  \n(B) Shri Lanka  \n(C) Bhutan");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);
     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
    else if(ans=='C')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound2+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound2--;
    }
printf("\n________________________________________\n");


    printf("\nQuestion 3:\nAmsterdam is the capital city of which country? ");
    printf("\nyour options are:\n(A) Netherlands \n(B) Newzealand  \n(C) Nepal");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);

     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
    else if(ans=='B')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound2+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound2--;
    }

    if(ScoreRound2==6)
    {
        printf("\nHurrah! you anwered all questions correctly\n You get 5 bonus points\n");
        ScoreRound2+=5;
    }
    printf("\nyour total score is %d",ScoreRound2);
    printf("\nThanks for participating\nWe hope you enjoyed the game!\n");

    printf("\n\n                  *                    \n\n");
 }

 void Tough()
 {
     system("color 0B");
     int ScoreRound3=0,choice,username[15];
    char ans,level,x;
    time_t start_time,end_time;

    printf("\nThis round contains 3 questions each of 2 marks");
    printf("\nEach wrong answered question deducts 1 mark!\n");

    printf("\nQuestion 1:\nYou answer me, although I never ask you questions.What am I?");
    printf("\nyour options are:\n(A)A telephone \n(B) A Book \n(C) A Pen");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);

     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
     else if(ans=='A')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound3+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound3--;
    }
printf("\n________________________________________\n");

    printf("\nQuestion 2:\nYou go at red, but stop at green.What am I?");
    printf("\nyour options are:\n(A) Tree \n(B) Traffic Signal \n(C) Watermelon ");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);
     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
    else if(ans=='C')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound3+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound3--;
    }
printf("\n________________________________________\n");


    printf("\nQuestion 3:\nWhat is as big as an elephant, but weighs nothing at all?");
    printf("\nyour options are:\n(A) A Dog \n(B) The shadow of an elephant \n(C) A Car");
    printf("\nAnswer:");
    start_time=time(NULL);
    fflush(stdin);
    scanf("%c",&ans);
    end_time=time(NULL);
     if(difftime(end_time,start_time)>TIME_LIMIT)
    {
      printf("\nTime's up!\n");
    }
   else if(ans=='B')
    {
        printf("\nyou scored!\nyour answer is correct\n");
        ScoreRound3+=2;
    }
    else
    {
        printf("\nOOPS! your answer is wrong\n");
        ScoreRound3--;
    }

    if(ScoreRound3==6)
    {
        printf("\nHurrah! you anwered all questions correctly\n You get 5 bonus points\n");
        ScoreRound3+=5;
    }
    printf("\nyour total score is %d\n",ScoreRound3);
    printf("\nThanks for participating\nWe hope you enjoyed the game!\n");

    printf("\n\n                   *                    \n\n");
 }