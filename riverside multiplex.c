#include <stdio.h>

int main() {
    int price;
    int age;
    int day;
    while (1) {
        printf("Enter your age: ");
        scanf("%d", &age);

        if (age == 0) {
            break;
        }

        int category;

        printf("=======================\n");
        printf("== TICKETING SYSTEM ===\n");
        printf("=======================\n");
        printf("1. Regular movie\n");
        printf("2. 3D movie\n");
        printf("3. Premiere movie\n");
        printf("Enter your movie category: ");
        scanf("%d", &category);

        switch (category) {
            case 1:
                price = 500;
                break;

            case 2:
                price = 800;
                break;

            case 3:
                price = 1200;
                break;
        }
    if(age<13){
    price=price*0.70;
   printf("child discount of 0.30 applied\n");}
    else if (age>=60){
    price=price*0.80;
    printf("senior discount of 0.20 applied\n");
	}
	else{
	printf("no discount applied\n");
	}
	printf("Enter the day of the month: ");
	scanf("%d",&day);
	if(day%5==0){
		price=price-50;
		printf("Bonus day discount applied\n");}
		if(price<100){
			price=100;

		}
		printf("final price=%d: ", price);
		return 0;
	}
    }

  

