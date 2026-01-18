#include<stdio.h>
int main()
{ float mass_g, velocity_kmh, radius_km;
    float mass_kg, velocity_ms, radius_m, force;
     printf("Enter mass (grams): ");
    scanf("%f", &mass_g);

printf("Enter velocity (km/h): ");
    scanf("%f", &velocity_kmh);

 printf("Enter radius (km): ");
    scanf("%f", &radius_km);

 mass_kg = mass_g / 1000.0;
    velocity_ms = velocity_kmh / 3.6;
    radius_m = radius_km * 1000.0;

 force = (mass_kg * velocity_ms * velocity_ms) / radius_m;

    printf("Centripetal Force = %.2f N\n", force);
