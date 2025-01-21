#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

const int NUM_ROOMS = 2;
const int NUM_DAYS = 5;     // monday, tuesday, wednesday, thursday, friday
const int NUM_SLOTS = 9;

int main() 
{

    int slotNames[] = {9, 10, 11, 12, 13, 14, 15, 16, 17};
    char dayNames[5][10] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    char roomNames[NUM_ROOMS][15] = {"Studio 1", "Studio 2"};
    int roomLimit[NUM_ROOMS] = {5, 10};
    bool roomIsBooked[NUM_ROOMS][NUM_DAYS][NUM_SLOTS];
    char roomOrganizer[NUM_ROOMS][NUM_DAYS][NUM_SLOTS][50];
    char roomOrgPhone[NUM_ROOMS][NUM_DAYS][NUM_SLOTS][50];
    char roomOrgEmail[NUM_ROOMS][NUM_DAYS][NUM_SLOTS][50];

    // initializing variables
    for (int i = 0; i < NUM_ROOMS; i++){
        for (int j = 0; j < NUM_DAYS; j++){
            for (int k = 0; k < NUM_SLOTS; k++){
                roomIsBooked[i][j][k] = false;
                strcpy(roomOrganizer[i][j][k], "");
                strcpy(roomOrgPhone[i][j][k], "");
                strcpy(roomOrgEmail[i][j][k], "");
            }
        }
    }

    // roomIsBooked[0][0][0] = true;
    // char inputString[50] = "Jennifer";
    // strcpy(roomOrganizer[0][0][0], inputString);
    // printf("%s\n", roomOrganizer[0][0][0]);

    int bookingLimit = 0;
    // choose room for how many people
    printf("How many people would you like to book for? ");
    scanf(" %d", &bookingLimit);

    char selectedDayString[15];
    int selectedDay = 3;
    printf("\nChoose a day to show available times (1-5) (1. Monday, 2. Tuesday, 3. Wednesday, 4. Thursday, 5. Friday): ");

    scanf(" %d", &selectedDay);
    selectedDay--;      // index is 1 lower than selection in menu
    // printf("%d\n", selectedDay);

    // first check if roomLimit >= bookingLimit;

    // check roomSize
    bool validRooms = false;
    bool validRoom[2];
    int selectedRoom = 0;    
    for (int r = 0;r < NUM_ROOMS;r++)
    {
        if (roomLimit[r]>= bookingLimit) 
        {
        validRooms=true;
        validRoom[r] = true;
        printf("%d) %s available\n", r+1, roomNames[r]);
        }
    }
    if (validRooms)
    {
        printf ("Please select a room: ");
        scanf(" %d", &selectedRoom);
        printf("\n");
        selectedRoom--; // index is 1 smaller
    }
    else
    {
        printf ("Sorry, no rooms of that size available\n");
        exit(0);
    }

// print available times
    for (int slot = 0; slot < NUM_SLOTS; slot++)
    {
        if (!roomIsBooked[selectedRoom][selectedDay][slot])
        {
        printf("%d is available to book\n", slotNames[slot]);
        }
    }

    // check roomIsBooked
    

    int selectedSlot = 0;
    printf("Please select a time to book or choose 0 to exit: ");
    scanf("%d", &selectedSlot);
    printf("\n");

    if (selectedSlot >= 9 && selectedSlot <= 17)
    {
        printf("Ok, let's book %s at %d.00 in %s\n", dayNames[selectedDay], selectedSlot, roomNames[selectedRoom]);
        roomIsBooked[selectedRoom][selectedDay][selectedSlot] = true;
    }
    else if (selectedSlot == 0)
    {
        printf("Select another day will soon be possible\n");
    }
    else
    {
        printf("Sorry, that's not an available time\n");
    }

 
    // to Enter booking information yet to be implemented
    char tempOrganizer[50];
    char tempOrgPhone[50];
    char tempOrgEmail[50];
    // enter Name
    // enter Phone
    // enter Email

    // check valid input
    // save info

    // print. You booked ROOMNAME for bookingLimit people. 
    // Note that the room has a maximum capacity of roomLimit people.




    // 






    return 0;
}
