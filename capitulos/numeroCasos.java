/* package whatever; // No coloques el nombre del paquete */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone {
    // Declaración de un objeto Scanner para leer desde la entrada estándar
    static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws java.lang.Exception {
        int cases = scan.nextInt(); // Leer el número de casos desde la entrada estándar

        // Iterar sobre cada caso
        for (int i = 0; i < cases; i++) {
            int a, b, c; // Declarar variables para almacenar los valores de entrada para cada caso
            a = scan.nextInt(); // Leer el valor de a para el caso actual
            b = scan.nextInt(); // Leer el valor de b para el caso actual
            c = scan.nextInt(); // Leer el valor de c para el caso actual
            System.out.println(a + " " + b + " " + c); // Imprimir los valores de entrada para el caso actual
        }
    }
}
