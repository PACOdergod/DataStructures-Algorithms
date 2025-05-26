# Resumen — Estructuras de Datos Básicas

Las estructuras de datos nos permiten trabajar con información de manera más eficiente.  
Las más básicas son: **arrays, listas enlazadas, pilas (stacks), colas (queues)** y **tablas hash (hash tables)**.  
Cada una tiene ventajas y limitaciones, por lo que se utilizan en distintos casos según el problema.

---

## Array

Un array es una colección ordenada de datos, normalmente del mismo tipo.  
A nivel de memoria, el array **reserva un bloque contiguo** para todos sus elementos.  
Por ejemplo, si creamos un array de 5 elementos de tipo `int64`, el sistema reservará 5 espacios consecutivos en memoria para almacenar esos valores.

Gracias a esto, **acceder a cualquier elemento es muy rápido**, ya que basta con conocer el índice para calcular directamente su posición en memoria.  
Sin embargo, **no es posible aumentar el tamaño de un array directamente**. Esto se debe a que el siguiente espacio de memoria puede estar ocupado.  

Por lo tanto, si queremos agregar un nuevo elemento, es necesario:

1. Crear un nuevo array más grande.
2. Copiar todos los elementos del original.
3. Agregar el nuevo dato.

Esto hace que **agregar elementos a un array no sea eficiente**, aunque **acceder y modificar valores sí lo es**.

---
