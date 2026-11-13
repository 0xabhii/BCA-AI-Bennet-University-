#include <stdio.h>

int main() {

    int age;
    float ticketPrice, discount, finalPrice;
    float temperature, celsius;

    // Asking person age
    printf("Enter your age");
    scanf("%d", &age);

    // Ticket price
    ticketPrice = 500;

    // Checking whether the person gets a discount
    if (age < 6 || age > 60) {
        discount = ticketPrice * 0.20;
        finalPrice = ticketPrice - discount;

        printf("You get a 20%% discount!\n");
        printf("Discount: Rs. %.2f\n", discount);
        printf("Final ticket price: Rs. %.2f\n", finalPrice);
    }
    else {
        discount = 0;
        finalPrice = ticketPrice;

        printf("No discount.\n");
        printf("Final ticket price: Rs. %.2f\n", finalPrice);
    }

    // Temperature conversion
    printf("\nEnter temperature in Fahrenheit: ");
    scanf("%f", &temperature);

    celsius = (temperature - 32) * 5 / 9;

    printf("Temperature in Celsius: %.2f C\n", celsius);

    return 0;
}