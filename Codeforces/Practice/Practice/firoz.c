#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>

struct User
{
    char name[20];
    char password[20];
};
struct DonorGroup
{
    char group[4];
};
struct DonorInfo
{
    char SL[2];
    char Name[20];
    char Address[50];
    char Phone[12];
    char Available[10];
};
struct EmergencyBlood
{
    char BloodGroup[4];
    char Area[20];
};
struct DonateBlood
{
    char Area[20];
    char B_group[4];
    int age;
    char profession[20];
    char health_problem[20];
};

// Function prototypes


void UserRegistration();
void UserActivities();
void findDonor();
void EmergencyBlood();
void donateBlood();
int userLogin(struct User users[], int numUsers);

int main()
{
    const int numUsers = 3;
    struct User users[numUsers];

    // User data initialization
    strcpy(users[0].name, "user1");
    strcpy(users[0].password, "pass1");

    strcpy(users[1].name, "user2");
    strcpy(users[1].password, "pass2");

    strcpy(users[2].name, "user3");
    strcpy(users[2].password, "pass3");

    int registered = 0;    // Flag to track user registration status
    char loggedInUser[20]; // To store the name of the logged-in user
    char username[20];     // Declare 'username' variable here

    while (1)
    {
        if (!registered)
        {
            system("cls");

            printf("========= WELCOME TO BLOOD DONATION SYSTEM =========");
            printf("\n");
            // options
            printf(" [1] User Registration \n [2] Login \n [3] Donor Finder\n [4] Emergency Blood Finder\n [5] Donate Blood");

            printf("\n===================\n");

            // Prompt user to register if not registered
            if (!registered)
            {
                printf("You need to register first to access certain options.\n");
            }

            printf("Enter Your Choice: ");
            int choice;
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                UserRegistration();
                registered = 1; // Set the registered flag to true after registration
                break;
            case 2:
                if (registered || (userLogin(users, numUsers) && (registered = 1)))
                {
                    // Store the logged-in user's name
                    printf("Enter Your Username: ");
                    scanf("%s", username);
                    printf("Login Successful! Welcome, %s!\n", username);
                    strcpy(loggedInUser, username);
                }
                else
                {
                    printf("Login Failed. Invalid credentials.\n");
                }
                break;
            case 3:
                if (registered)
                {
                    findDonor();
                }
                else
                {
                    printf("You need to register first to access this option.\n");
                }
                break;
            case 4:
                if (registered)
                {
                    EmergencyBlood();
                }
                else
                {
                    printf("You need to register first to access this option.\n");
                }
                break;
            case 5:
                if (registered)
                {
                    donateBlood();
                }
                else
                {
                    printf("You need to register first to access this option.\n");
                }
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
            }
        }
        else
        {
            system("cls");

            printf("========= WELCOME TO BLOOD DONATION SYSTEM =========");
            printf("\n");
            // options
            printf(" [1] User Activities \n [2] Donor Finder\n [3] Emergency Blood Finder\n [4] Donate Blood \n [5] Logout");

            printf("\n===================\n");

            // Prompt user to register if not registered
            if (!registered)
            {
                printf("You need to register first to access certain options.\n");
            }

            printf("Enter Your Choice: ");
            int choice;
            scanf("%d", &choice);

            switch (choice)
            {
            case 1:
                UserActivities();
                break;
            case 2:
                findDonor();
                break;
            case 3:
                EmergencyBlood();
                break;
            case 4:
                donateBlood();
                break;
            case 5:
                registered = 0;
                system("cls");
                printf("Logged out successfully\n");
                printf("Press 0 to return to the main menu...");
                int op;
                scanf("%d", &op);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
            }
        }
    }

    getch();
    return 0;
}

void UserRegistration()
{
    system("cls");
    struct User newUser;
    printf("Enter Your name: ");
    scanf("%s", newUser.name);
    printf("Enter Your Password: ");
    scanf("%s", newUser.password);
    printf("User Registration Successful\n");
    printf("Press 0 to return to the main menu...");
    int op;
    scanf("%d", &op);
    if (op == 0)
    {
        return;
    }
}
void UserActivities()
{
    system("cls");
    char n[100];
    printf("Enter Your name: ");
    scanf("%s", n);
    char x[100]="Firoz";

    if(strcmp(n,"Firoz")==0 )
    {
        printf("Your activiies are here.\n");

        printf("|==========|====================|==============================|========================|=============|\n");
        printf("|    ID    |   Blood Donate     |            Address           |      Recieve Blood     |    Phone    |\n");
        printf("|==========|====================|==============================|========================|=============|\n");

        printf("|   0403   |    2times(O+)      |  Uttra sector 13,Uttra,Dhaka | 1 times for patient(A-)| 01877732440 |\n");
        printf("Press 0 to return to the main menu...");
        int op;
        scanf("%d", &op);
        if (op == 0)
        {
            return;

        }
    }

}

int userLogin(struct User users[], int numUsers)
{
    char username[20];
    char password[20];

    printf("Enter Your Username: ");
    scanf("%s", username);
    printf("Enter Your Password: ");
    scanf("%s", password);

    for (int i = 0; i < numUsers; i++)
    {
        if (strcmp(users[i].name, username) == 0 && strcmp(users[i].password, password) == 0)
        {
            return 1; // Login successful
        }
    }

    return 0; // Login failed
}

void findDonor()
{

    system("cls");
    struct DonorGroup DF;
    printf("\nWhich blood group donor you want to find: ");
    scanf("%3s", DF.group);

    printf("Your needed blood group is %s", DF.group);
    printf("Here is the Donor List\n");
    printf("|==========|====================|==============================|====================|=============|\n");
    printf("|    SL    |        Name        |            Address           |       Phone        |  Available  |\n");
    printf("|==========|====================|==============================|====================|=============|\n");
    if (strcmp(DF.group, "A+") == 0)
    {
        struct DonorInfo first[] =
        {
            {"1", "Estiak", "Sherpur Bogura", "01302814545", "Sunday"},
            {"2", "Taslim", "jhenaidah", "01367565875", "Sunday"},
            {"3", "Ramim", "Shirajganj tarash", "01302814545", "Monday"},
            {"4", "Tanvir", "Sherpur Bogura", "01302814545", "Tuesday"},
            {"5", "Zim", "Sherpur Bogura", "0130281453", "Sunday"},
            {"6", "Soumik", "Sherpur Bogura", "0166814545", "Saturday"},
            {"7", "Ashik", "Tangail", "0130356455", "Sunday"},
            {"8", "Mridul", "Kustiya", "01302867545", "Friday"}

        };
        for (int i = 0; i < sizeof(first) / sizeof(first[0]); i++)
        {
            printf("|    %-2s    | %-18s | %-28s | %-18s | %-11s |\n", first[i].SL, first[i].Name, first[i].Address, first[i].Phone, first[i].Available);
        }
    }
    else if (strcmp(DF.group, "A-") == 0)
    {
        struct DonorInfo second[] =
        {
            {"1", "Estiak", "Sherpur Bogura", "01302814545", "Sunday"},
            {"2", "Taslim", "jhenaidah", "01367565875", "Sunday"},
            {"3", "Ramim", "Shirajganj tarash", "01302814545", "Monday"},
            {"4", "Tanvir", "Sherpur Bogura", "01302814545", "Tuesday"}
        };
        for (int i = 0; i < sizeof(second) / sizeof(second[0]); i++)
        {
            printf("|    %-2s    | %-18s | %-28s | %-18s | %-11s |\n", second[i].SL, second[i].Name, second[i].Address, second[i].Phone, second[i].Available);
        }
    }
    else
    {
        printf("Sorry, Your Blood Group Donor is unavailable! When found any doner we will inform you");
        printf("\n");
        int op;
        printf("Press 0 to return to the main menu...");
        scanf("%d", &op);
        if (op == 0)
        {
            return;
        }
    };
    printf("\n");
    printf("Press 0 to return to the main menu...");
    int op;
    scanf("%d", &op);
    if (op == 0)
    {
        return;
    }
}
void EmergencyBlood()
{
    system("cls");
    struct EmergencyBlood EGB;
    printf("Enter Your Emergency Blood Group: ");
    scanf("%3s", EGB.BloodGroup);
    printf("Enter Your Area : ");
    scanf("%18s", EGB.Area);
    printf("Your Emergency Blood Group is %s and Your Area is %s \n Here is the list :", EGB.BloodGroup, EGB.Area);
    printf("\n|==========|====================|==============================|====================|=============|\n");
    printf("|    SL    |        Name        |            Address           |       Phone        |  Available  |\n");
    printf("|==========|====================|==============================|====================|=============|\n");
    if (strcmp(EGB.BloodGroup, "O+") == 0)
    {
        struct DonorInfo Opositive[] =
        {
            {"1", "Estiak", "Sherpur Bogura", "01302814545", "Sunday"},
            {"2", "Taslim", "jhenaidah", "01367565875", "Sunday"},
            {"3", "Ramim", "Shirajganj tarash", "01302814545", "Monday"},
            {"4", "Tanvir", "Sherpur Bogura", "01302814545", "Tuesday"}
        };
        for (int i = 0; i < sizeof(Opositive) / sizeof(Opositive[0]); i++)
        {
            printf("|    %-2s    | %-18s | %-28s | %-18s | %-11s |\n", Opositive[i].SL, Opositive[i].Name, Opositive[i].Address, Opositive[i].Phone, Opositive[i].Available);
        }
        printf("\n");
        int op;
        printf("Press 0 to return to the main menu...");
        scanf("%d", &op);
        if (op == 0)
        {
            return;
        }
    }
    else
    {
        printf("Sorry, Your Blood Group Donor is unavailable! When found any doner we will inform you");
        printf("\n");
        int op;
        printf("Press 0 to return to the main menu...");
        scanf("%d", &op);
        if (op == 0)
        {
            return;
        }
    }
}
void donateBlood()
{
    system("cls");
    struct User n;
    struct DonateBlood person;
    printf("Enter Your Name: ");
    scanf("%s", n.name);
    printf("What is your Blood Group? -> ");
    scanf("%3s", person.B_group);
    printf("Enter Your Age: ");
    scanf("%d", &person.age);
    printf("Enter Your Profession: ");
    scanf(" %[^\n]", person.profession); // Use %[^\n] to read the entire line
    printf("Do you have any Health Problem: ");
    scanf("%18s", person.health_problem, stdin);

    if (strcmp(person.health_problem, "Cancer") == 0)
    {
        printf("You are not able to donate blood due to Cancer\n");
        int op;
        printf("Press 0 to return to the main menu...");
        scanf("%d", &op);
        if (op == 0)
        {
            return;
        }
    }
    else
    {
        printf("Enter Your Area:");
        scanf("%18s", person.Area);
        printf("Your Info: \n");
        printf("Name: %s\nBlood Group: %s\nAge: %d\nProfession: %s\nHealth Problem: %s\nArea: %s\n", n.name, person.B_group, person.age, person.profession, person.health_problem, person.Area);
        printf("Hospital List where you can donate your blood:");
        printf("\n|==========|==============================|==============================|====================|=============|\n");
        printf("|    SL    |        Name                  |            Location          |       Phone        |  Available  |\n");
        printf("|==========|==============================|==============================|====================|=============|\n");
        struct DonorInfo HospitalList[] =
        {
            {"1", "Apollo Hospital", "Dhaka", "01302814545", "Sunday"},
            {"2", "Square Hospital", "Dhaka", "01367565875", "Tuesday"},
            {"3", "United Hospital", "Dhaka", "01302814545", "Monday"},
            {"4", "Labaid Hospital", "Dhaka", "01302814545", "Tuesday"}
        };
        for (int i = 0; i < sizeof(HospitalList) / sizeof(HospitalList[0]); i++)
        {
            printf("|    %-2s    | %-28s | %-28s | %-18s | %-11s |\n", HospitalList[i].SL, HospitalList[i].Name, HospitalList[i].Address, HospitalList[i].Phone, HospitalList[i].Available);
        }
        printf("\n");
    }

    int op;
    printf("Press 0 to return to the main menu...");
    scanf("%d", &op);
    if (op == 0)
    {
        return;
    }
}


