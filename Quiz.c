#include<stdio.h>
int main()
{
    // Quiz by Saksham //
    int ans1,ans2,ans3,ans4,ans5;
    int p1=0,p2=0,p3=0,p4=0,p5=0;
    int in;
    char n[100];
    printf("Welcome to the QUIZ\n\n");
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
        printf("You have quit the Quiz, come back later.");
    }
    else 
    {
        printf("Invalid Input");
    }
    if (in==1)
    {
        printf("Q.1- What language is known as the mother language in coding?\n");
        printf("1. Java\n");
        printf("2. Python\n");
        printf("3. C\n");
        printf("4. C#\n");
        printf("Your answer: ");
        scanf("%d",&ans1);
        {
            if (ans1==3)
            {
                printf("Correct Answer\n");
                p1=5;
                printf("You have scored points %d\n\n",p1);
            }
            else if (ans1!=3)
            {
               printf("Wrong Answer\n");
               p1=0;
               printf("You have scored points %d\n\n",p1); 
            }
        }
        printf("Q.2- Which is the first search engine in internet?\n");
        printf("1. Google\n");
        printf("2. Archie\n");
        printf("3. Waise\n");
        printf("4. Firefox\n");
        printf("Your answer: ");
        scanf("%d",&ans2);
        {
            if (ans2==2)
            {
                printf("Correct Answer\n");
                p2=5;
                printf("You have scored points %d\n\n",p2);
            }
            else if (ans2!=2)
            {
               printf("Wrong Answer\n");
               p2=0;
               printf("You have scored points %d\n\n",p2); 
            }
        }
        printf("Q.3- Which one is the first web broweser developed in 1990\n");
        printf("1. Mozilla\n");
        printf("2. Mosaic\n");
        printf("3. Chrome\n");
        printf("4. Firefox\n");
        printf("Your answer: ");
        scanf("%d",&ans3);
        {
            if (ans3==2)
            {
                printf("Correct Answer\n");
                p3=5;
                printf("You have scored points %d\n\n",p3);
            }
            else if (ans3!=2)
            {
               printf("Wrong Answer\n");
               p3=0;
               printf("You have scored points %d\n\n",p3); 
            }
        }
        printf("Q.4- First computer virus is known as: \n");
        printf("1. Rabbit\n");
        printf("2. Mosaic\n");
        printf("3. Trojan\n");
        printf("4. Creeper\n");
        printf("Your answer: ");
        scanf("%d",&ans4);
        {
            if (ans4==4)
            {
                printf("Correct Answer\n");
                p4=5;
                printf("You have scored points %d\n\n",p4);
            }
            else if (ans4!=4)
            {
               printf("Wrong Answer\n");
               p4=0;
               printf("You have scored points %d\n\n",p4); 
            }
        }
        printf("Q.5- Firewall in computer is used for\n");
        printf("1. Security\n");
        printf("2. Monitoring\n");
        printf("3. Data Transmission\n");
        printf("4. Authentication\n");
        printf("Your answer: ");
        scanf("%d",&ans5);
        {
            if (ans5==1)
            {
                printf("Correct Answer\n");
                p5=5;
                printf("You have scored points %d\n\n",p5);
            }
            else if (ans5!=1)
            {
               printf("Wrong Answer\n");
               p5=0;
               printf("You have scored points %d\n\n",p5); 
            }
        }
            int t=p1+p2+p3+p4+p5;
             printf("%s your total is %d\n",n,t);
        {
            if (t==25)
            {
                printf("Grade: Excellent Work\n");
            }
            else if (t==20)
            {
                printf("Grade: Good,Keep it up\n");
            }
            else if (t==15)
            {
                printf("Grade: Average\n");
            }
            else if (t==10)
            {
                printf("Grade: Work Hard\n");
            }
            else if (t==0)
            {
                printf("Grade: Need improvement\n");
            } 
        }
    }
    system("pause");
    return 0;
}