#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Welcome back, Coder!\n");
    //     char input;
    //     float kmsToMiles = 0.621371;
    //     float inchesToFoot = 0.0833333;
    //     float cmsToInches = 0.393701;
    //     float poundToKgs = 0.453592;
    //     float inchesToMeters = 0.0254;

    //     float first, second;

    //     while (1) // while(1) will keep the loop on replay until someone breaks it
    //     {
    //         // alt + shift to move multiple lines of codes at once
    //         printf("Enter the input character. Press q to quit.\n        1. kms to miles\n        2. inches to foot\n        3. cms to inches\n        4. pound to kgs\n        5. inches to meters\n");
    //         scanf(" %c", &input);
    //         printf("The character is %c", input);

    //         switch (input)
    //         {
    //         case 'q':
    //             printf("Quitting the program...");
    //             goto end;
    //             break;

    //         case '1':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf("%f", &first);

    //             second = first * kmsToMiles;
    //             printf("\n%f kms is equal to %f miles \n\n", first, second);
    //             break;

    //         case '2':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf("%f", &first);

    //             second = first * inchesToFoot;
    //             printf("\n%f incs is equal to %f ft \n\n", first, second);
    //             break;

    //         case '3':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf("%f", &first);

    //             second = first * cmsToInches;
    //             printf("\n%f cms is equal to %f incs \n\n", first, second);
    //             break;

    //         case '4':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf("%f", &first);

    //             second = first * poundToKgs;
    //             printf("\n%f pnds is equal to %f kgs \n\n", first, second);
    //             break;

    //         case '5':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf("%f", &first);

    //             second = first * inchesToMeters;
    //             printf("\n%f incs is equal to %f mtrs \n\n", first, second);
    //             break;

    //         default:
    //             break;
    //         }
    //     }
    // end:

    //     char input;

    //     // fixed price only
    //     int sushi = 30;
    //     int butter_chicken = 70;
    //     int taco_bells = 30;
    //     int chinese_noodles = 50;
    //     int biryani = 100;

    //     int first_value, second_value;

    //     while (1) // while(1) keeps the loop on replay until someone breaks it
    //     {
    //         // alt + shift keys to move multiple lines of code at once? yeah.
    //         printf("Enter the input character. Press q to quit the program.\n Select your choices:\n        1. Sushi \n\n        2. Butter Chicken \n\n        3. Taco Bells \n\n        4. Chinese Noodles \n\n        5. Biryani \n\n");

    //         scanf(" %c", &input);
    //         printf("The character is %c\n", input);

    //         switch (input)
    //         {
    //         case 'q':
    //             printf("Program terminated...");
    //             goto end;
    //             break;

    //         case '1':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf(" %d", &first_value);

    //             second_value = first_value * sushi;
    //             printf("%d\nThe sum of price is %d \n\n", first_value, second_value, sushi);
    //             break;

    //         case '2':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf(" %d", &first_value);

    //             second_value = first_value * butter_chicken;
    //             printf("%d\nThe sum of price is %d \n\n", first_value, second_value, butter_chicken);
    //             break;

    //         case '3':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf(" %d", &first_value);

    //             second_value = first_value * taco_bells;
    //             printf("%d\nThe sum of price is %d \n\n", first_value, second_value, taco_bells);
    //             break;

    //         case '4':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf(" %d", &first_value);

    //             second_value = first_value * chinese_noodles;
    //             printf("%d\nThe sum of price is %d \n\n", first_value, second_value, chinese_noodles);
    //             break;

    //         case '5':
    //             printf("\nEnter quantity in terms of first unit\n");
    //             scanf(" %d", &first_value);

    //             second_value = first_value * biryani;
    //             printf("%d\nThe sum of price is %d \n\n", first_value, second_value, biryani);
    //             break;

    //         default:
    //             break;
    //         }
    //     }
    // end:

    char inp;

    int lamborghini = 300000;
    int porsche = 400000;
    int bughatti = 500000;
    int ferrari = 600000;
    int bmw = 700000;
    int koenigsegg = 800000;

    int first_val, second_val;

    while (1)
    {
        printf("Enter the input character. Press Q to exit to the program.        \n Select any cars below:\n         1. Lamborghini \n\n         2. Porsche \n\n         3. Bughatti \n\n         4. Ferrari \n\n         5. BMW \n\n         6. Koenigsegg \n\n");

        scanf(" %c\n", &inp);
        printf("The character is %c\n", inp);

        switch (inp)
        {
        case 'q':
            printf("Terminating the program...");
            goto end;
            break;

        case '1':
            printf("\nEnter quantity of the lamborghinis in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * lamborghini;
            printf("%dThe quantity of lamborghinis sold is %d \n\n", first_val, second_val, lamborghini);
            break;

        case '2':
            printf("\nEnter quantity of the porsches in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * porsche;
            printf("%dThe quantity of porsches sold is %d \n\n", first_val, second_val, porsche);
            break;

        case '3':
            printf("\nEnter quantity of the bughattis in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * bughatti;
            printf("%dThe quantity of bughatti sold is %d \n\n", first_val, second_val, bughatti);
            break;

        case '4':
            printf("\nEnter quantity of the ferrari in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * ferrari;
            printf("%dThe quantity of ferrari sold is %d \n\n", first_val, second_val, ferrari);
            break;

        case '5':
            printf("\nEnter quantity of the bmw in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * bmw;
            printf("%dThe quantity of bmw sold is %d \n\n", first_val, second_val, bmw);
            break;

        case '6':
            printf("\nEnter quantity of the koenigsegg in first unit\n");
            scanf(" %d", &first_val);

            second_val = first_val * koenigsegg;
            printf("%dThe quantity of koenigsegg sold is %d \n\n", first_val, second_val, koenigsegg);
            break;

        default:
            break;
        }
    }
end:

    return 0;
}
