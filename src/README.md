# Laboratorio 1 IE0624
# Lidia García B83169

Este laboratorio consiste en el desarrollo de un simulador de dado utilizando el microcontrolador **PIC12F675**. Se busca introducir el manejo de **GPIOs** y la generación de **números aleatorios**.  

El sistema enciende **LEDs** para representar una cara del dado (de 1 a 6) y usa una **entrada analógica** para generar valores pseudoaleatorios a partir del ruido utilizando un **convertidor AD**, ya que se usa dentro de un simulador y no en la vida real.  

## Reglas de Compilación

Para compilar el proyecto, se debe utilizar el **compilador adecuado** para microcontroladores PIC. Se proporciona un **Makefile** para facilitar la compilación.  

### Compilación y Generación del HEX

Ejecuta el siguiente comando en la terminal dentro del directorio del proyecto:

```bash
make
```

Esto generará el archivo `dado.hex`, el cual se debe cargar en el **firmware** del microcontrolador.  

### Limpieza del Proyecto

Para eliminar los archivos generados en la compilación, usa:

```bash
make clean
```

## Archivos del Proyecto

- `dado.c`: Código fuente del programa.  
- `Makefile`: Reglas de compilación.  
- `dado.simu`: Archivo de simulación.
- `README.md`: Este documento.  
