// Ejercicio propuesto por ChatGPT
// 1. Crea un array de 5 enteros con los valores: 4, 8, 15, 16, 23.
// 2. Imprime todos los valores del array (sin índices).
// 3. Imprime la suma del primer y último elemento.
// 4. Reemplaza el valor del elemento del medio (índice 2) con la suma anterior.
// 5. Vuelve a imprimir todos los valores del array.

package main

import (
	"fmt"
)

func main() {
	array := [5]int{4, 8, 15, 16, 23}

	// 2. Imprimir todos los valores del array (sin índices)
	for _, val := range array {
		fmt.Print(val, " ")
	}
	fmt.Println()

	// 3. Sumar primer y último elemento
	sum := array[0] + array[len(array)-1]
	fmt.Printf("Suma del primero y último: %d\n", sum)

	// 4. Reemplazar el valor del medio con la suma
	array[2] = sum

	// 5. Volver a imprimir el array
	for _, val := range array {
		fmt.Print(val, " ")
	}
	fmt.Println()
}
