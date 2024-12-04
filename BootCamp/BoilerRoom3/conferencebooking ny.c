#include <stdio.h>
#include <string.h>


int main(){
    int menuSelection = 1;
    int days, persons, selectTime;
    int room1_9 = 0, room1_10 = 0, room1_11 = 0; 
    int room2_9 = 0, room2_10 = 0, room2_11 = 0;  
    int room3_9 = 0, room3_10 = 0, room3_11 = 0;  

    // 3 rooms, 5 days, 3 timeslots
    char organizerName[3][5][3][50];
    char organizerPhone[3][5][3][20];
    char organizerEmail[3][5][3][50];
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                strcpy(organizerName[i][j][k], "");
                strcpy(organizerPhone[i][j][k], "");
                strcpy(organizerEmail[i][j][k], "");
            }
        }
    }

        strcpy(organizerName[0][0][1], "Johan");
        strcpy(organizerPhone[0][0][1], "07298");
        strcpy(organizerEmail[0][0][1], ".se");

    do 
    {
        printf("-BOOKING-\n1) Add a booking\n2) Check current bookings\n3) Clear the table\n4) EXIT\n");
        scanf("%i", &menuSelection);
        switch (menuSelection) 
        {

            case 1: 
            do
            {
                printf("\nHow many persons is the reservation for?\n");
                scanf("%d",&persons);

                printf("--- Booking menu ---\n");
                printf("Choose day:\n");
                printf("1. Monday\n");
                printf("2. Tuesday\n");
                printf("3. Wednesday\n");
                printf("4. Thursday\n");
                printf("5. Friday\n");
                scanf("%d",&days);

            if (days<1||days>5){
                printf("Not a valid option, try again!");
            }

                switch (days)
                {
                case 1:
                    printf("Monday:\n");
                    break;
                case 2:
                    printf("Tuesday:\n");
                    break;
                case 3:
                    printf("Wednesday:\n");
                    break;
                case 4:
                    printf("Thursday:\n");
                    break;
                case 5:
                    printf("Friday:\n");
                    break; 
                                    //Vilket är bäst, if eller default?
                // default:
                //     printf("Not a valid option, try again!\n");
                //     break;
                }
            } while (days<1||days>5);

            for (int i = 9; i <= 11; i++){
                printf("Available times:%d:00\n", i);
            }

            printf("Select time (9-11)\n");
            scanf("%d", &selectTime);

            while (selectTime<9||selectTime>11)
            {
                printf("Invalid time, choose between 09:00 and 11:00.");
                scanf("%d",&selectTime);
            }
            
            int room;
            printf("Select a room:\n");
            printf("1. Room 1 up to 5 persons\n");
            printf("2. Room 2 up to 10 persons\n");
            printf("3. Room 3 up to 20 persons\n");
            scanf("%d", &room);

            if ((room == 1 && persons > 5) || 
            (room == 2 && persons > 10) || 
            (room == 3 && persons > 20)) {
            printf("Error: Room cannot accommodate that many persons.\n");
            return 1;
            }
            
            if (room == 1) {
                if (selectTime == 9) room1_9 = 1;
                else if (selectTime == 10) room1_10 = 1;
                else if (selectTime == 11) room1_11 = 1;
            } else if (room == 2) {
                if (selectTime == 9) room2_9 = 1;
                else if (selectTime == 10) room2_10 = 1;
                else if (selectTime == 11) room2_11 = 1;
            } else if (room == 3) {
                if (selectTime == 9) room3_9 = 1;
                else if (selectTime == 10) room3_10 = 1;
                else if (selectTime == 11) room3_11 = 1;
            } 

            char name[50], phone[20], email[50];
            printf("Enter name:\n");        
            scanf("%s", name);              //Kolla fgets?
            printf("Enter phone number:\n");
            scanf("%s", phone);
            printf("Enter email:\n");
            scanf("%s",email);

            strcpy(organizerName[room-1][days-1][selectTime-1], name);
            strcpy(organizerPhone[room-1][days-1][selectTime-1], phone);
            strcpy(organizerEmail[room-1][days-1][selectTime-1], email);

            strcmp(organizerName[room-1][days-1][selectTime-1], "") != 0;

            printf("Thank you %s, for your reservation!\n", name);
            printf("Would you like to continue? 1/0\n", &menuSelection);
            scanf("%i", &menuSelection);
            break;
            
            case 2:
                for (int i = 0; i < 3; i++) // Room
                {
                    for (int j = 0; j < 5; j++) // Days
                    {
                       for (int k = 0; k < 3; k++) // Hours
                        {
                            int compare = strcmp(organizerName[i][j][k], "") != 0;
                            if (compare)
                            {
                            printf("\nBooking Room %i Hour: [%i - %i] \nName: %s", i+ 1, k + 9, k + 10 ,organizerName[i][j][k]);
                            printf("\nPhone: %s", organizerPhone[i][j][k]);
                            printf("\nEmail: %s\n", organizerEmail[i][j][k]);
                            }
                        }    
                    } 
                }
                printf("\nWould you like to continue? 1/0\n", &menuSelection);
                scanf("%i", &menuSelection);
            break;
            case 3:
                for (int i = 0; i < 3; i++)
                {
                    for(int j = 0; j < 5; j++)
                    {
                        for (int k = 0; k < 3; k++)
                        {
                            strcpy(organizerName[i][j][k], "");
                            strcpy(organizerPhone[i][j][k], "");
                            strcpy(organizerEmail[i][j][k], "");
                        }
                    }
                }
                printf("All bookings removed.\n");
                printf("\nWould you like to continue? 1/0\n", &menuSelection);
                scanf("%i", &menuSelection);
            continue;
            case 4:
                printf("Goodbye!");
                menuSelection == 0;
            break;
        }
     
    }while (menuSelection == 1);
    return 0;
}