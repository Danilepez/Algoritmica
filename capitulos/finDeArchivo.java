import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone {
    // Declaración de un objeto Scanner para leer desde la entrada estándar
    public static Scanner scan = new Scanner(System.in);

    public static void main(String[] args) throws java.lang.Exception {
        double costo; // Declaración de una variable para almacenar el costo

        // Leer continuamente valores de costo hasta que no se puedan leer más
        while (scan.hasNext()) {
            costo = scan.nextDouble(); // Leer el siguiente valor como un double
            System.out.println(costo); // Imprimir el valor del costo
        }
    }
}
