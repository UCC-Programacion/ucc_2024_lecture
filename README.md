# Programacion II

Repositorio para implementar la [guia](https://drive.google.com/drive/folders/1rQNKG2SmDXMIOJX0RBwOWzPoR7CmRuiA?usp=share_link) de trabajos practicos de la materia.

Los ejercicios deben ser implementados en las carpetas correspondientes a cada
unidad de la materia.

Por ejemplo, la respuesta al ejercicio `3` de la unidad `2` debe ser
implementado en la carpeta `ejs/u2e03/`.

Para conocer mas sobre la estructura y contenido del repositorio ver la
[documentacion](./docs/README.md)

# Criterio de aceptacion

- La implementacion de los ejercicios son de produccion propia
- El codigo compila sin errores
- El codigo sigue los lineamientos aprendidos en clase
- El codigo tiene comentarios y documentacion adecuada

# Checklist para cada ejercicio

- calidad de la logica
- programacion modular con funciones (sin mezclar logica con IO `cin`/`cout`)
- seleccion de tipos adecuandos para
  - funciones: parametros y valores de retorno
  - clases: datos miembro y metodos (idem funciones)
- validaciones con `assert` (`#include <cassert>`) en funciones y metodos de clase
- nombres descriptivos para variables, funciones, clases, datos miembro, metodos, etc.
- uso de `cin`/`cout` (`#include <iostream>`) solo para mostrar y pedir datos
- separar en `.h` archivo cabecera (o header) y `.cpp` archivo de implementacion
- conocer como compilar por linea de comando los archivos del ejercicio
- reconocer y probar los limites de la funcion/clase
- en las unidades 1 y 2, no usar funciones de `<cstring> <string>`
  o [STL Containers](https://cplusplus.com/reference/stl/) `<vector>`, `<map>`, `<set>`, etc.
- (opcional) implementar casos de prueba con `assert`
