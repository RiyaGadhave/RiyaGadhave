#include <stdio.h>
#include <string.h>
#include <time.h>
int main() {
    char gender[10];
    int age,ticket_no;
    float price_nagpur =500,price_yavatmal=100,price_wardha=300;
    float total;
    int i=1;

    time_t t;
    struct tm *currentTime;

    // Get current time
    time(&t);
    currentTime = localtime(&t);

    // Display current time
    printf("Current Date and Time: %s", asctime(currentTime));

    
    
    char destination_from[70], destination_to[50];
  printf("Enter destination_from= "); 
  scanf("%s", destination_from);

printf("Enter destination_to: ");
 scanf("%s", destination_to);
    printf("Enter gender (Male/Female/AM/AF/Children): ");
    scanf("%s", gender);

    printf("Enter age: ");
    scanf("%d", &age);

    if ((age >= 70 && strcmp(gender, "Female") == 0) || age <= 5 || strcmp(gender, "AF") == 0) {
        printf (" price_nqgpur  =0\n");
    } else if ((age >= 5 && age <= 12 && age>=70) || strcmp(gender, "AM") == 0) {
       printf(" price_nagpur = 250\n");
    } else if ((age >= 12 && age <= 70) && strcmp(gender, "Male") == 0) {
       printf ("price_nagpur = 500\n");
    } else if ((age >= 12 && age <= 70) && strcmp(gender, "Female") == 0) {
     printf  (" price_nagpur = 250\n");
       
    } else {
        printf("Please choose a valid condition\n");
        
    }
    
    printf (" enter ticket_no=");
    scanf ("%d",ticket_no);
    for (i=1;i<=10;i++)

    printf("Happy Journey!\n");

    return 0;
}

