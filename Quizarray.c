#include<stdio.h>
int main()
{
    char a[100][100]={"Q.1- What language is known as the mother language in coding?\n","Q.2- Which is the first search engine in internet?\n","Q.3- Which one is the first web broweser developed in 1990\n","Q.4- First computer virus is known as: \n","Q.5- Firewall in computer is used for\n"};
    char op1[100][100]={"1. Java\n","1. Google\n","1. Mozilla\n","1. Rabbit\n","1. Security\n"};
    char op2[100][100]={"2. Python\n","2. Archie\n","2. Mosaic\n","2. Mosaic\n","2. Monitoring\n"};
    char op3[100][100]={"3. C\n","3. Waise\n","3. Chrome\n","3. Trojan\n","3. Data Transmission\n"};
    char op4[100][100]={"4. C#\n","4. Firefox\n","4. Firefox\n","4. Creeper\n","4. Authentication\n"};
    int cans[]={3,2,2,4,1}; 
    int uans[]={0,0,0,0,0};
    int p[]={0,0,0,0,0};
    int in;
    int i;
    char n[100];
    printf("\n\tWelcome to the QUIZ\n\n");
    printf("Enter 1 to start the quiz\n");
    printf("Enter 0 to quit the quiz\n");
    printf("Enter: ",in);
    scanf("%d",&in);
    if (in==1)
    {
        printf("Enter your name\n");
        scanf(" %[^\n]",n);
        printf("Hello %s!\n\n",n);
        printf("The Quiz has Started\n\n");
    }
    else if (in==0)
    {
        printf("You have quit the 1Quiz, come back later.");
    }
    else 
    {
        printf("Invalid Input");
    }
    for (i=0;i<5;i++)
    {
    if (in==1)
    {
        printf("%s\n",a[i]);
        printf("%s\n",op1[i]);
        printf("%s\n",op2[i]);
        printf("%s\n",op3[i]);
        printf("%s\n",op4[i]);
        printf("Your answer: ");
        scanf("%d",&uans[i]);
        {
            if (uans[i]==cans[i])
            {
                printf("Correct Answer\n");
                p[i]=5;
                printf("You have scored points %d\n\n",p[i]);
            }
            else if (uans[i]!=cans[i])
            {
               printf("Wrong Answer\n");
               p[i]=0;
               printf("You have scored points %d\n\n",p[i]); 
            }
        }
    }       
    }
    printf("------------------------------------\n");
    int t=p[0]+p[1]+p[2]+p[3]+p[4];
    printf("%s your total is %d\n",n,t);
    {
        if (t==25)
            {
                printf("Grade: Excellent Work");
            }
            else if (t==20)
            {
                printf("Grade: Good,Keep it up");
            }
            else if (t==15)
            {
                printf("Grade: Average");
            }
            else if (t==10)
            {
                printf("Grade: Work Hard");
            }
            else if (t==0)
            {
                printf("Grade: Need improvement");
            } 
    }

}