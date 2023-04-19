#include <stdio.h>

int main() {

float tempF;
float tempC;
  
printf("Temperature Conversor Farenheit to Celsius: ");
printf("\n-> Enter Temperature in Farenheit (°F): ");
scanf("%f", &tempF);

printf("\n\n-> The temperature of %.f Farenheit (°F) in Celsius (°C) is: ", tempF);

tempC = (tempF-32) * 5/9; // C = (F - 32) × 5/9
printf("%.f Celsius (°C)", tempC);
}
