#include <stdio.h>
int main(void) {
    int n[8] ={0,0,0,0,0,0,0,0};
    while (1) {
        printf("[Enter a , to take patients information.] [Enter b , Find the average for all city.]\n");
        printf("[Enter c , Which city has above average COVID patients.] [Enter q , to quit/exit the menu system.]\n");

        char ch;
        printf("Enter your choice: ");
        scanf("%c", &ch);

        //For Taking input of patients by city.
        if (ch == 'a') {
            printf("\nFor City Type, Dhaka-0, Chittagong- 1, Khulna- 2, Rajshahi-3, Rangpur-4\n");
            printf("For Sylhet-5, For Mymensingh-6, Barishal-7\n");
            int input,patients;
            scanf("%d", &input);
            printf("Enter the patients number: ");
            scanf("%d",&patients);

            //For Dhaka
            if (input == 0) {
                n[0]+=patients;
            }

            //For Chittagong
            else if (input == 1) {
                n[1]+=patients;
            }

            //For Khulna
            else if (input == 2) {
                n[2]+=patients;
            }

            //For Rajshahi
            else if (input == 3) {
                n[3]+=patients;
            }

            //For Rangpur
            else if (input == 4) {
                n[4]+=patients;
            }

            //For Sylhet
            else if (input == 5) {
                n[5]+=patients;
            }

            //For Mymensingh
            else if (input == 6) {
                n[6]+=patients;
            }

            //For Barishal
            else if (input == 7) {
                n[7]+=patients;
            }
            printf("\n");
            fflush(stdin);
            fflush(stdout);
        }


        //For the average patients for all city
        else if (ch == 'b') {
            float sum=0;
            for (int i = 0; i < 8; ++i) {
                sum += n[i];
            }
            printf("The average number of patients of all the cities: %f \n", sum/8);
            fflush(stdin);
            fflush(stdout);
        }


        //For the maximum patients
        else if (ch == 'c') {
            int max = n[0];
            int input = 0;
            for (int i = 1; i < 8; i++){
                if (n[i] > max) {
                    max = n[i];
                    input =i;
                }
            }

//            printf("Hello %d",max);
            //For Dhaka
            if (input == 0) {
                printf("Dhaka have above average COVID patients which is: %d", max);
            }

                //For Chittagong
            else if (input == 1) {
                printf("Chittagong have above average COVID patients which is: %d", max);
            }

                //For Khulna
            else if (input == 2) {
                printf("Khulna have above average COVID patients which is: %d", max);
            }

                //For Rajshahi
            else if (input == 3) {
                printf("Rajshahi have above average COVID patients which is: %d", max);
            }

                //For Rangpur
            else if (input == 4) {
                printf("Rangpur have above average COVID patients which is: %d", max);
            }

                //For Sylhet
            else if (input == 5) {
                printf("Sylhet have above average COVID patients which is: %d", max);
            }

                //For Mymensingh
            else if (input == 6) {
                printf("Mymensingh have above average COVID patients which is: %d", max);
            }

                //For Barishal
            else if (input == 7) {
                printf("Barishal have above average COVID patients which is: %d", max);
            }

            printf("\n");
            fflush(stdin);
            fflush(stdout);
        }

        //For quiting the program
        else if (ch == 'q') {
            break;
        }
    }
}
