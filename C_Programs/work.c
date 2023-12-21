#include <stdio.h>

int main() {
    int totalHoursNeeded, numDays, numWorkers;

    
    printf("Enter the total number of hours needed: ");
    scanf("%d", &totalHoursNeeded);

    printf("Enter the number of days: ");
    scanf("%d", &numDays);

    printf("Enter the number of workers: ");
    scanf("%d", &numWorkers);

    int totalWorkingHours = numDays * 8;  
    int trainingDays = numDays / 10;      
    int totalTrainingHours = trainingDays * 8;  

    totalWorkingHours -= totalTrainingHours;

    int totalProjectHours = totalHoursNeeded + (numDays * numWorkers * 2);

    if (totalProjectHours <= totalWorkingHours) {
        int hoursLeft = totalWorkingHours - totalProjectHours;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHours = totalProjectHours - totalWorkingHours;
        printf("Not enough time! %d hours needed.\n", additionalHours);
    }

    return 0;
}

