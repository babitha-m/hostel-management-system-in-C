#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct student
{
    char srn[13];
    char Name[50];
    char Address[50];
    char Email[50];
    char sphno[10];
    //int gphno;
    int room;
}st;
//struct student *p=st;
FILE *f;
void regist ()
{
    f=fopen("registration.txt","ab");
    printf("-----------------------enter your srn:-------------------------\n");
    fflush(stdin);
    gets(st.srn);
    /*
    while(strlen(st[i].srn)!=13)
    {
        fflush(stdin);
        printf("entered srn is invalid , please enter again");
        printf("\nenter your srn:\n");
        fflush(stdin);
        gets((p+i)->srn);
        
    }*/
    fflush(stdin);
    printf("-----------------------enter your name:------------------------\n");
    fflush(stdin);
    gets(st.Name);
    fflush(stdin);
    printf("----------------------enter your Address:----------------------\n");
    fflush(stdin);
    gets(st.Address);
    fflush(stdin);
    printf("-------------------enter your phone number:--------------------\n");
    fflush(stdin);
    gets(st.sphno);
    fflush(stdin);
    printf("-----------------------enter your Email:-----------------------\n");
    fflush(stdin);
    gets(st.Email);
    fflush(stdin);
    printf("---------------------------------------------------------------\n");
    printf("Enter   1: 2-room sharing\n\t2: 3-room sharing\n\t3: 4-room sharing\n");
    scanf("%d",&st.room);
    fflush(stdin);
    printf("***************************************************************\n\n");
    fwrite(&st, sizeof(st), 1, f);
    fclose(f);
}

void hostel_fee()
{
    printf("please note that the fees is monthly\n");
    printf("press 1 for 2-sharing room\n");
    printf("press 2 for 3-sharing room\n");
    printf("press 3 for 4-sharing room\n");
    printf("please select the option\n\n");
    int seat;
    scanf("%d",&seat);
    if(seat==1)
    {
        printf("The payment info for 2-seater room is\n");
        printf("room rent and management  6000\n");
        printf("laundary charges          1000\n");
        printf("wifi and other facilities 1500\n\n");
        printf("total                     8500\n\n");
    }
    else if(seat==2)
    {
        printf("The payment info for 3-seater room is\n");
        printf("room rent and management  5000\n");
        printf("laundary charges          1000\n");
        printf("wifi and other facilities 1200\n\n");
        printf("total                     7200\n\n");
    }
    else if(seat==3)
    {
        printf("The payment info for 4-seater room is\n");
        printf("room rent and management  4000\n");
        printf("laundary charges          1000\n");
        printf("wifi and other facilities 1000\n\n");
        printf("total                     6000\n\n");
    }
    else
    {
        printf("please enter a valid option\n");
    }
}
void mess_fee()
{
    printf("We have excellent chefs who cook excellent dishes you'll never get bored of ;) ;)\n");
    printf("press 1 for vegetarian\n");
    printf("press 2 for non-vegetarian\n");
    printf("press 3 for italian and mexican\n");
    printf("please choose an option");
    int mess;
    scanf("%d",&mess);
    if(mess==1)
    {
        printf("thank you for choosing veg\n");
        printf("the monthly fee is 3000\n");
    }
    else if(mess==2)
    {
        printf("thank you for choosing non-veg\n");
        printf("the monthly fee is 4200\n");
    }
    else if(mess==3)
    {
        printf("thank you for choosing italian &mexican\n");
        printf("the monthly fee is 6000\n");
    }
    else
    {
        printf("please choose a valid option!");
    }
}
void hostel_rules()
{
    printf("Hostel Rules:");
    printf("\n\t1. You have to pay hostel charge every month within first 10 days.\n  ");
    printf("\tafter 10 days addition 100 ruppes applicable for late fees everry 5 days.\n");
    printf("\t2. Curfew to be followed by all students. \n\t\t\tsummer: in time 7.00pm\n\t\t\twinter: in time 6.00pm \n");
    printf("\t3. Before a 6 month period you cant leave the hostel.\n");
    printf("\t4. If you want to leave this hostel you have to inform the hostel \n\tauthority before 2 month.\n");
    printf("\t5. Strict adherence to the prescribed dress code is required.\n\tDecency in dressing and demeanor is a must.\n");
    printf("\t6. Smoking, alcohol and narcotic consumption is strictly prohibited\n\t in and around the hostel premises.\n\tStrict action will be taken against offenders.\n");
    printf("\t7. Birthday/other celebrations are stricly prohibited in hostel.\n");
    printf("\t8 .No outside guests or guardians+ will be allowed inside the hostel rooms\n");
    printf("\t9. Attendance is compulsary at 7:30 pm everyday.\n\n");
}
void room_rules()
{
    printf("Room Rules:\n");
    printf("\t1. Students are responsible for there personal belongings and keeping their locked.\n");
    printf("\t2. No loud music to be played in the rooms.\n");
    printf("\t3. Students are not allowed to use electric stoves,heaters etc in rooms.\n");
    printf("\t4. Students are to turn off all electrical equipments and lights before leaving the room.\n");
    printf("\t5. Rooms should be neat and clean.\n");
    printf("\t6. No posters are allowed on the walls and doors. Violation to this attracts heavy penalty.\n");
    printf("\t7. Drying of the clothes on railings,parapet wall in the corridor and inside the room is stricly prohibited.\n\n");
}

void food_menu()
{
    printf("| Day       |     Breakfast             |        lunch        |            Dinner           |\n");
    printf("=============================================================================\n");
    printf("| SUNDAY    |   egg,milk,roti,vegetable | rice,roti,lentil    | rice,vegetable,lentil,fruits|\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| MONDAY    |  idli, milk               | rice,roti,lentil    |  rice,vegetable,egg,lentil  |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| TUESDAY   |   milk,dosa,egg           | rice,roti,lentil    |  rice,lentil,fruits         |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| WEDNESDAY |   milk,upma               | rice,roti,lentil    |  rice,fruits,lentil         |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| TURSDAY   |   idlli,milk,egg          | rice,roti,lentil    |  rice,egg,lentil            |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| FRIDAY    |  dosa,milk                | rice,roti,lentil    |  rice,vegetable,egg,lentil  |\n");
    printf("-----------------------------------------------------------------------------\n");
    printf("| SATURDAY  |   roti,vegetable,milk     | rice,roti,lentil    |  rice,fruits,lentil         |\n");
    printf("============================================================================================\n\n\n");
}

int main()
{
    int x=0;
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t**********     Welcome     **********\n");
    printf("\t\t\t\t\t**********       To        **********\n");
    printf("\t\t\t\t\t**********    PES   GIRLS  **********\n");
    printf("\t\t\t\t\t**********     HOSTEL      **********\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");

    int choice=1;
    int c=0;
    int a=0;
    char s[50];
    while(choice)
    {
    printf("\n\t\t**************************************** MAIN MENU ****************************************\n");
    printf("\t\t-------------------------------  ENTER 1: REGISTRATION ------------------------------------\n");
    printf("\t\t-------------------------------- ENTER 2: MY DETAILS   ------------------------------------\n");
    printf("\t\t-------------------------------- ENTER 3: MESS DETAILS ------------------------------------\n");
    printf("\t\t-------------------------------- ENTER 4: RULES        ------------------------------------\n");
    printf("\t\t-------------------------------- ENTER 5: PAYMENT INFO ------------------------------------\n");
    printf("\t\t-------------------------------- ENTER 0: EXIT         ------------------------------------\n\n");
    scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            regist(x);
            break;
            case 2:
            //char s[50];
            printf("-------------------enter the srn number to display details:--------------------\n");
            fflush(stdin);
            gets(s);
            fflush(stdin);
            int found=0;
            f = fopen("registration.txt", "r");
            //char s[100];
            while(fread(&st, sizeof(st), 1, f))
            
            {
                if(strcmp(s,st.srn)==0)
                {
                    printf("\n\n---------------Displaying the details of the registered student:---------------\n");
                    printf("SRN                 :    %s\n",st.srn);
                    printf("NAME                :    %s\n",st.Name);
                    printf("PHONE NUMBER        :    %s\n",st.sphno);
                    printf("EMAIL               :    %s\n",st.Email);
                    printf("ADDRESS             :    %s\n",st.Address);
                    printf("ROOM SHARING        :    %d\n",st.room+1);
                    found=1;
                }
            
            }
            if(found==0)
                {
                    printf("-----------------------entered srn doesn't exist-------------------------\n");
                }
            break;

            case 3:
            //int c=0;
            printf("\n~\t\t**************************** MESS ******************************\n");
            printf("\t\t------------------Enter 1: food menu              --------------\n");
            printf("\t\t------------------Enter 2: mess rules            ---------------\n");
            printf("\t\t------------------Enter 3: food mess payment info---------------\n");
            scanf("%d",&c);
            if(c==1)
            food_menu();
            else if(c==2)
            printf("mess rules\n");
            else if (c==3)
            mess_fee();
            else
            printf("invalid input\n");
            break;

            case 5:
            hostel_fee();
            break;

            case 4:
            printf("\n~\t\t**************************** RULES ******************************\n");
            printf("\t\t   ------------------Enter 1: HOSTEL RULES       ---------------\n");
            printf("\t\t   ------------------Enter 2: ROOM RULES         ---------------\n");
            scanf("%d",&a);
            if(a==1)
            hostel_rules();
            else if(a==2)
            room_rules();
            else
            printf("invalid input\n\n");
            break;

            case 0:
            choice=0;
            break;

        }
    }
}
