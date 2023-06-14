#include <stdio.h>
#define PI 3.1415
int main (){
    float no1, no2, result;
    int choice;
    printf("1.addition\n");
    printf("2.sub \n");
    printf("3.multi\n");
    printf("4.divi\n");
    printf("enter your choice: ");
    scanf("%d",& result);
    printf("print tOW nuber: ");
    scanf("%d %d",&no1,&no2);

    switch (choice){
    case 1:
        result = no1 + no2;
        printf("Result: %.2f\n",result);
        break;
    case 2:
        result = no1 - no2;
        printf("Result: %.2f\n",result);
        break;
    case 3:
        result = no1 * no2;
        printf("Result: %.2f\n",result);
        break;
    case 4:
    if (no2 !=0){
        result= no1/no2;
        printf("Calculation number: %.2f\n",result);
    }

        else{
            printf("Error: diviton zero");
        }
        break;


    }
        //Q3
    int choice;
    float redius, result;
    printf("1.circumference\n");
    printf("2.are \n");
    printf("3.spheree\n");
    printf("4.divi\n");
    printf("enter your choice: ");
    scanf("%d",&choice);

    printf("Enter Redius: ");
    scanf("%f",&redius);

    switch (choice) {
    case 1:
    result= 2*PI*redius;
    printf("Circumference: %.2f\n",result);
    break;
    case 2:
        result= PI*redius*redius;
        printf("Are: %.2f\n",result);
    break;

    case 3:
         result= 4*PI*redius*redius/3;
        printf("Are: %.2f",redius);
    break;
    }

//4
 char letter;
 printf("enter a letter: ");
 scanf("%c",&letter);
 switch (letter) {
     switch
     case 'a'
     case 'A'
     case 'E'
     case 'e'
     case 'I'
     case 'i'
     case 'O'
     case 'o'
     case 'U'
     case 'u'
     printf("%c is vowel",letter);
     break;
     default:
        printf("%c is not vowel",letter)



 }

}






