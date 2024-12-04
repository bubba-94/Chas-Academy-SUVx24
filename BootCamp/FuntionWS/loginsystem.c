#include <stdio.h>
#include <stdbool.h>
typedef struct Login
{
    char username;
    char password;
}login;
typedef struct Account
{
    char username;
    char password;
    struct AccountInfo info;
}account;

struct AccountInfo
{
    char emailAddress;
    char telephoneNumber;
};
int createAnAccount(account* userAccounts);
int loginToAccount(account* userAccounts, char username, char password);
int printExistingAccounts(account* userAccounts);
int menuSelection();

int main()
{
    int selection = 0;
    account userAccounts;
    bool running = true;
    do
    {
        printf("1) Create an account\n2) Login\n3) Print all accounts\n");
        menuSelection(selection);
        switch (selection)
        {
            case 1:
                createAnAccount(&userAccounts);
            break;
        }

    } while(running = true);
}
int menuSelection(int select)
{
    if(select < 1 || select > 3)
    {
        printf("Try again please.");
    }
    else return select;
}

int createAnAccount(account* userAccounts)
{
    printf("-CREATE A NEW ACCOUNT-\n");
    printf("Username:\n");
    scanf ("%s", userAccounts->username);
    printf("Password:\n");
    scanf ("%s", userAccounts->password);
    printf("Email address:\n");
    scanf ("%s", userAccounts->info.emailAddress);
    printf("Telephone number:\n");
    scanf ("%s", userAccounts->info.telephoneNumber);
}
int loginToAccount(account* userAccounts, char username, char password)
{

}
int printExistingAccounts(account* userAccounts)
{
    for (int i = 0; i < sizeof(userAccounts); i++)
    {
        printf("%s", userAccounts->username);
    }
}