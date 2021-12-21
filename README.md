# Modern-languages-and-programming-platforms

в каждой папке находится otchet.txt соответсвующий заданию

logger - Логгер с замером количества запусков и времени работы функций

codogen - генерирует рандомный вызов функций с многопоточностью для тестирования логгера

RGBCube - отображение в крутящемся кубе распределения рандомно сгенерированных точек, в папке лижат скрины работы

для работы необходимо:

Ubuntu:

    $ sudo apt-get update

    $ sudo apt-get install libglu1-mesa-dev freeglut3-dev mesa-common-dev

Windows:

инструкция установки GLUT (архив лежит в RGBCube)

https://w3.cs.jmu.edu/bernstdh/web/common/help/cpp_mingw-glut-setup.php

https://coderoad.ru/12171317/Как-вы-устанавливаете-GLUT-и-OpenGL-в-Visual-Studio-2012#46783705

Для установки Microsoft Visual Studio 2017 Community GLUT -

1. Загрузите файлы заголовка, dll и lib для glutdlls37beta  (архив лежит в RGBCube)

2. Вставьте glut.h в C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\{14.11.25503}\include\GL Создайте папку GL, если ее еще нет. Версия может отличаться.

3. Вставьте glut.lib в C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\{14.11.25503}\lib\x64 . Вставьте glut32.lib в C:\Program Files (x86)\Microsoft Visual Studio\2017\Community\VC\Tools\MSVC\{14.11.25503}\lib\x86 Версия может отличаться.

4. Вставьте glut32.dll в C:\Windows\System32 . Вставьте glut.dll и glut32.dll в C:\Windows\SysWOW64 .

Перейдите в Проект -> Свойства(Все параметры конфигурации)->Компоновщик -> Ввод -> Дополнительные зависимости->редактирование(стрелка вниз справа) Тип-> opengl32.lib glu32.lib glut32.lib Нажмите Ok->применить.
