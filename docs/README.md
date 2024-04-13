# Documentacion

## Estructura del repositorio

Es un proyecto de [`cmake`](https://es.wikipedia.org/wiki/CMake) (cross platform
make) para automatizar la construccion de los ejecutables de cada ejercicio.

Contenido de las carpetas

- `ejs/`, carpetas para los ejercicios correspondientes a las unidades 1-5.
  Cada ejercicios tiene su carpeta y se denota con la unidad y el numero del ejercicio.
  Por ejemplo, `u2e05` corresponde al ejercicio 5 de la unidad 2.
- `cookbook/`, recetas y ejemplos de codigo
    - `00_cmake/`, codigo de referencia para construir ejecutables de 1 archivo,
      multiples archivos y automatizar pruebas con [`cmake`](https://cmake.org/).
    - `00_make/`, codigo de referencia para construir ejecutables de 1 archivo
      y multiples archivos con [`make`](https://www.gnu.org/software/make/manual/make.html).

Otras carpetas de configuracion

- `.devcontainer`, configuracion para poder crear un entorno de desarrollo con
  [GitHub CodeSpaces](https://docs.github.com/es/codespaces/overview) o
  [Docker](https://www.docker.com)
- `.vscode`, configuracion de
  [Visual Studio Code](https://code.visualstudio.com)
- `.github`, configuracion de
  [GitHub Actions](https://github.com/features/actions) para compilar en cada
  `git push` a `main`

## `CMakeLists.txt`

En este archivo se describe como crear cada `cmake` `target`.

Un `target` puede ser un ejecutable o una libreria.

Por ejemplo

```cmake
cmake_minimum_required(VERSION 3.24)
project(ucc_2024)

set(CMAKE_CXX_STANDARD 20)

add_executable(mi_ejecutable main.cpp utils.cpp)
```

- se necesita al menos la `cmake` v3.24
- el proyecto se llama `ucc_2024`
- el estandar de `C++` es [`C++20`](https://es.wikipedia.org/wiki/C++20)
- el `target` es un ejecutable con nombre `mi_ejecutable` y depende del codigo
  fuente de `main.cpp` y `utils.cpp`

Para configurar un proyecto de `cmake` en la carpeta `build/` en modo `Debug`,
se debe ejecutar en consola

```bash
cmake -B build -DCMAKE_BUILD_TYPE=Debug
```

Luego para construir el `target` `mi_ejecutable` en la carpeta `build/` en modo
`Debug`, se debe ejecutar en consola

```bash
cmake --build build --config Debug --target mi_ejecutable
```

Notas

- `CLion` esta preconfigurado para configurar y construir proyectos con `cmake`
- `Visual Studio Code` se puede configurar con extensiones para configurar y
  construir proyectos con `cmake`
- `GitHub CodeSpaces` esta configurado con `.devcontainer/` para generar un
  entorno de desarrollo

En el repositorio hay varios archivos de `CMakeLists.txt` y se relacionan con
`add_subdirectory(nombre_carpeta)`.

Por ejemplo

```cmake
cmake_minimum_required(VERSION 3.24)
project(ucc_2024)

set(CMAKE_CXX_STANDARD 20)

add_subdirectory(u1)
add_subdirectory(u2)
add_subdirectory(u3)
add_subdirectory(u4)
add_subdirectory(u5)
```

- `add_subdirectory(u1)` agrega el contenido de `u1/CMakeLists.txt`
- `add_subdirectory(u2)` agrega el contenido de `u2/CMakeLists.txt`
- ...

## Links de interes

- https://hackingcpp.com/cpp/beginners_guide.html
- https://www.learncpp.com/
- [`#pragma once`](https://es.wikipedia.org/wiki/Pragma_once)
- [What are ‘Include Guards’ and #pragma once?](https://64.github.io/cpp-faq/include-guards-pragma-once/)
- [Why 'using namespace std' Is A Bad Practice?](https://youtu.be/8gZNFt0YEZI)
- [Why I don't "using namespace std"?](https://youtu.be/4NYC-VU-svE)
- [Copy-and-Swap](https://en.wikibooks.org/wiki/More_C%2B%2B_Idioms/Copy-and-swap)
  idiom

Videos

- [C++ by The Cherno](https://www.youtube.com/playlist?list=PLlrATfBNZ98dudnM48yfGUldqGD0S4FFb)
- [Full C++17 Course by Code for yourself](https://youtube.com/playlist?list=PLwhKb0RIaIS1sJkejUmWj-0lk7v_xgCuT&si=NkA2yJRRr0fmyoDC)
- [C++ Tutorials by Portfolio Courses](https://www.youtube.com/playlist?list=PLA1FTfKBAEX6BdpNaWp2uw-YspHwY7qwW)
- [Configurar CLion en Windows](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-windows.html) ([Youtube](https://www.youtube.com/watch?v=Vj06cfj6LyI))
- [Configurar CLion en macOS](https://www.jetbrains.com/help/clion/quick-tutorial-on-configuring-clion-on-macos.html)
- [Configurar VSCode + compiladores de MSYS2 en Windows](https://youtu.be/-TkoO8Z07hI?t=263)
- [Better CMake by Jefferson Amstutz](https://youtube.com/playlist?list=PL8i3OhJb4FNV10aIZ8oF0AA46HgA2ed8g)

Misc

- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines)
- [31 nooby C++ habits you need to ditch](https://www.youtube.com/watch?v=i_wDa2AS_8w)

IDEs

- [CLion](https://www.jetbrains.com/clion/) que se puede usar con una
  [licencia educativa](https://www.jetbrains.com/community/education/#students/)
- [VSCode](https://code.visualstudio.com/) con videos para
  configurar [C++](https://code.visualstudio.com/docs/cpp/introvideos-cpp)
