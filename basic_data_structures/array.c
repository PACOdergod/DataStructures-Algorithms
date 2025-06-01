#include <stdio.h>
#include <inttypes.h>  // Para uintptr_t y PRIuPTR

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    // 1. Imprimir los valores del arreglo (sin índices)
    printf("Valores del arreglo:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // 2. Imprimir las direcciones de memoria (hex y decimal)
    printf("\nDirecciones de memoria:\n");
    for (int i = 0; i < 5; i++) {
        uintptr_t addr = (uintptr_t)&arr[i];
        printf("arr[%d]: dirección (hex) = %p, dirección (decimal) = %" PRIuPTR "\n", i, (void*)&arr[i], addr);
    }

    // 3. Crear un puntero que apunte al primer elemento del arreglo
    int *direction_one = &arr[0];

    // 4. Crear un puntero que apunte al segundo elemento del arreglo,
    //     sumando 1 entero a direction_one (no se suman bytes, se suman posiciones)
    int *direction_two = direction_one + 1;

    // 5. Crear un puntero que apunte al último elemento del arreglo,
    //     sumando 4 posiciones (4 * sizeof(int)) a direction_one
    int *last_direction = direction_one + 4;

    // 6. Modificar los valores en las direcciones direction_one, direction_two y last_direction
    *direction_one = 100;
    *direction_two = 200;
    *last_direction = 999;

    // 7. Volver a imprimir el arreglo original (veremos los cambios reflejados)
    printf("\nValores del arreglo después de modificar las direcciones:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
