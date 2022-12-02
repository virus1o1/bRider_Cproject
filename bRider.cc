#include <bits/stdc++.h>
#include<conio.h>
using namespace std;

void help()
    {
        system("cls");
        printf("\n\n                              About");
        printf("\n -------------------------------------------------------------------------");
        printf("\n bRider is a smart bus service app for a perfect ride towards the destination.");
        printf("\n One often faces problems in transportation via bus with time issues and life risk.");
        printf("\n This app helps in booking bus seats with a secure and convenient transaction system and transporting at appropriate");
        printf("\n time in a friendly environment with knowing the exact location of the bus or of the trip.");
        printf("\n\n\t*********************BEST OF LUCK*********************************");
        printf("\n\n\t*****bRIDER PROGRAM is developed by Megaminds TEAM********");
    }
void red ()
{
    printf("\033[1;31m");
}
void reset ()
{
    printf("\033[0m");
}
int main()
{
    int loc,des,s_count;
    string area[]= {"0","Mirpur 12","Mirpur 11","Mirpur 11.5","Mirpur 10","Mirpur 2","Mirpur 1","Mirpur 13","Mirpur 14","Kazipara","Shewrapara"};
    int  a[41]= {0},bus_no,payment,tickets[41],ho,mi;

home:
    system("cls");
    printf("\t\t\t    bRIDER\n");
    printf("\n\t\t________________________________________");

    printf("\n\t\t\t    WELCOME ");
    printf("\n\t\t\t      to ");
    printf("\n\t\t\t    bRIDER ");
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t    Enjoy The Ride!!!!!!!!!!!    ") ;
    printf("\n\t\t________________________________________");
    printf("\n\t\t________________________________________");
    printf("\n\t\t > Press R to for seat reservation");
    printf("\n\t\t > Press V to view the booked tickets");
    printf("\n\t\t > press H to know about the app");
    printf("\n\t\t > press Q to exit             ");
    printf("\n\t\t________________________________________\n\n");
    char choice=toupper(getch());
    if (choice=='V')
    {
        printf("Your Reservation has been confirmed for Bus no :");
            if(bus_no==1) printf("DIUb1\n");
            else printf("DIUb2\n");
            printf("Time : %d:%d\n",ho,mi);
            printf("Seat no :");
            for(int i=0; i<s_count; i++)
            {
                cout<<tickets[i]<<" ";
            }
            printf("\n");
            getch();
            goto home;

    }
    else if (choice=='H')
    {
        help();
        getch();
        goto home;
    }
    else if (choice=='Q')
        exit(1);
    else if(choice=='R')
    {


        system("cls");

        printf("Enter your time to ride the bus : (HH:MM 24 hours format)\n");
        scanf("%d:%d",&ho,&mi);

        printf("\n");
        printf("1. Mirpur 12\n");
        printf("2. Mirpur 11\n");
        printf("3. Mirpur 11.5\n");
        printf("4. Mirpur 10\n");
        printf("5. Mirpur 2\n");
        printf("6. Mirpur 1\n");
        printf("7. Mirpur 13\n");
        printf("8. Mirpur 14\n");
        printf("9. Kazipara\n");
        printf("10. Shewrapara\n");
        cout<<"\nSelect your location : ";
        cin>>loc;
        cout<<area[loc]<<endl;
        cout<<"\nSelect your destination : ";
        cin>>des;
        cout<<area[des]<<endl;
        printf("\nSelect Your bus :");
        printf("\n1. DIUb1 \t 2. DIUb2\n");
        cin>>bus_no;
        printf("Press any key to continue\n");
        getch();

        system("cls");
        cout<<"\nHow many seats You want : ";
        cin>>s_count;
        cout<<"Colored seats are booked\n";
        cout<<"\nSelect your seats : ";
        printf("\n");
        if(a[0]==0) printf(" 1\n");
        else {  red();
                printf(" 1\n");
                reset();
        }

        for(int i=2; i<=40; i++)
        {
            if(i==2)
            {
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d\n",i);
                }
                else
                {
                    red();
                    printf("%2d\n",i);
                    reset();
                }
            }
            else if(i==36)
            {
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d\n",i);
                }
                else
                {
                    red();
                    printf("%2d\n",i);
                    reset();
                }
            }
            else
            {
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d",i);
                    reset();
                    i++;
                }
                printf("      ");
                if(a[i]==0)
                {
                    printf("%2d  ",i);
                    i++;
                }
                else
                {
                    red();
                    printf("%2d  ",i);
                    reset();
                    i++;
                }
                if(a[i]==0)
                {
                    printf("%2d\n",i);
                }
                else
                {
                    red();
                    printf("%2d\n",i);
                    reset();
                }
            }

        }
        tickets[s_count];
        cout<<"\n\n";
        for(int i=0; i<s_count; i++)
        {
        check:
            cin>>tickets[i];
            if(a[tickets[i]]==1)
            {
                cout<<"Seat is already booked Select another seat \n";
                goto check;
            }
            a[tickets[i]]=1;
        }
        system("cls");
        cout<<"\nTotal Price : "<<abs(des-loc)*10*s_count<<" Tk\n"<<endl;
        printf("Select the payment method\n");
        printf("1. Bkash\n");
        printf("2. Rocket\n");
        printf("3. Nagad\n");
        printf("4. Upay\n");
        printf("5. Cancel Reservation\n");
        cin>>payment;
        if(payment<=4)
        {
            printf("\t\tThank you\n");

            printf("Your Reservation has been confirmed for Bus no :");
            if(bus_no==1) printf("DIUb1\n");
            else printf("DIUb2\n");
            printf("Time : %d:%d\n",ho,mi);
            printf("Seat no :");
            for(int i=0; i<s_count; i++)
            {
                cout<<tickets[i]<<" ";
            }
            printf("\n");

        }
        else
        {
            printf("Your reservation has been cancelled\n");
            for(int i=0; i<s_count; i++)
            {
                a[tickets[i]]=0;
            }

        }
        printf("Press any key to return to Home\n");
        getch();

        system("cls");

        goto home;


    }
    else goto home;


        return 0;
    }



