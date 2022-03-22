#include <cstdio>

int main()
{
    const float g = 9.81f;
    float mass, drag_coefficient, air_density, area, k;
    float x_0, y_0, z_0, u_0, v_0, w_0;

    printf("Mass: ");
    scanf_s("%f", &mass);
    printf("Drag Coefficient: ");
    scanf_s("%f", &drag_coefficient);
    printf("Air density: ");
    scanf_s("%f", &air_density);
    printf("Cross-sectional Area: ");
    scanf_s("%f", &area);

    printf("x_0: ");
    scanf_s("%f", &x_0);
    printf("y_0: ");
    scanf_s("%f", &y_0);
    printf("z_0: ");
    scanf_s("%f", &z_0);
    printf("u_0: ");
    scanf_s("%f", &u_0);
    printf("v_0: ");
    scanf_s("%f", &v_0);
    printf("w_0: ");
    scanf_s("%f", &w_0);

    k = 0.5f * drag_coefficient * air_density * area;

    return 0;
}