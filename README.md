# [![Author](https://img.shields.io/badge/Auther---Ullas-blu)](https://img.shields.io/badge/Auther---Ullas-blu?utm_source=github.com&utm_medium=campaign&utm_content=button&utm_campaign=dmhendricks%2Ffile-icon-vectors)

## Setting up graphics library (graphics.h) in Visual Studio Code (c++)

### Table Of Content

- [General info](#general-info)
- [files](#files)
- [Setup](#setup)
- [.vscode config file](https://github.com/ullaskunder3/graphics.h-setup)

My Workspace Dir and code example

![graphics example](https://user-images.githubusercontent.com/66258652/133918954-18751ba6-5487-4b38-9842-e5fce2dcf482.png)

## General information

It like a tradition to use Turbo in our Indian CS sector.
Its because the syllabus haven't been changed since long time.

The graphics. h header file provides access to a simple graphics library that makes it possible to draw lines, rectangles, ovals, arcs, polygons, images, and strings on a graphical window. The second step is initialize the graphics drivers on the computer using initgraph method of graphics. h library.

- To know More [Stanford](https://web.stanford.edu/class/archive/cs/cs106b/cs106b.1126/materials/cppdoc/graphics.html) !!old

`<graphics.h> is very old library. It's better to use something that is new.`

Trust Me **There are much better option**

Allegro or SDL libraries may be for you.
You could also try SFML. It has quite a following. You'll have a large community behind you if you needed any help.

--------------------------------------------------

## files

- [Graphics](./graphics.h)
- [Winbgim](./winbgim.h)
- [libbgi](./libbgi.a)

## Setup

Know the difference between MINGW, Mingw-w64 && TDM [learn more go, go, go...](https://github.com/ullaskunder3/cpp-setup-vsCode#setup)

UPDATE:
switching from `MinGW` to `TDM-GCC-32`

Install `TDM-GCC-32` from their [official site link](https://jmeubank.github.io/tdm-gcc/)

|![step1](./step1.png)|![step1](./step2.png)|
|--|--|

- after that default step that's all

## Get all the files needed `graphics.h`, `winbgim.h` and `libbgi.a`

- Copy `graphics.h` and `winbgim.h` files to `TDM-GCC-32/include` folder.

location might be **("C:/TDM-GCC-32/include/")**

- Copy `libbgi.a` to file to `TDM-GCC-32/lib` folder.

location might be **("C:/TDM-GCC-32/lib")**

Open Vs Code Smart way:

- Select a folder and open Terminal

```bash
   mkdir cppGraphics
   cd cppGraphics
   code .
```

if you are using template with task and c_cpp_properties json file then you directory should look like this:

- All your code should be inside `src` and the task.json will build the .exe in `build` folder

```cmd
cppGraphics
├───.vscode
└───Home
    ├───build
    └───src
```

- `.vscode` folder in that workspace which will contain `task.json`, `c_cpp_properties.json`

![image](https://user-images.githubusercontent.com/66258652/133919065-0f524b26-cb2f-4aef-a19c-367a329188cd.png)

```cpp
//create a file name it example.cpp inside src or any other name with .cpp extension

#include <graphics.h>

int main(){
    int gdrive = DETECT;
    int gmode;

    initgraph(&gdrive, &gmode, NULL);
    // you can also pass NULL for third parameter if you did above setup successfully
    // example: initgraph(&gd, &gm, NULL);

    arc(200, 200, 0, 360, 100);
    arc(150, 150, 0, 360, 20);
    arc(250, 150, 0, 360, 20);

    arc(200, 200, 0, 360, 5);
    arc(200, 250, 180, 360, 30);

    getch();
    closegraph();
}
```

### Just `Ctrl+Shift+B` to run the build task you will get the executable file in build folder

![image](./output.png)

![graphics example2](https://user-images.githubusercontent.com/66258652/133919626-3cd671e5-36e4-4315-b4bf-951563fc6913.png)
![graphics example3](https://user-images.githubusercontent.com/66258652/133919648-c5745fd9-4fb4-49f5-9ca2-2d7b5f54fd85.png)

## Manual

Running the file using command in termainl:

```cmd
    g++ -o example day3.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

    //after u'll get example.exe run using command: .\example
```

---

Now To set up graphics.h in vs code using MINGW:

alternative video instruction in `hindi` to setup graphics.h lib in vscode

[<img src="https://i.imgur.com/P8xiypZ.png" alt="How to setup graphic.h library in Visual Studio Code | Computer Graphics in VS Code | CGMA " width="50%" />](https://www.youtube.com/embed/ijrNSHwXDAc "How to setup graphic.h library in Visual Studio Code | Computer Graphics in VS Code | CGMA" )

 Alternative step wise instruction to setup MinGW along with graphics library (graphics.h)

- ReadME [MinGW & graphics.h setup](https://github.com/sagargoswami2001/Setup-Graphics.h-for-Visual-Studio-Code/blob/main/README.md)

## Contributors ✨

Thanks to these wonderful people:

<!-- ALL-CONTRIBUTORS-LIST:START - Do not remove or modify this section -->
<!-- prettier-ignore-start -->
<!-- markdownlint-disable -->
<table>
  <tr>
    <td align="center"><a href="https://github.com/Prakash4844"><img src="https://avatars.githubusercontent.com/u/81550376?v=4" width="100px;" alt=""/><br /><sub><b>Prakash4844</b></sub></a><br />
    <a href="#question-Prakash4844" title="Answering Questions">💬</a> <a href="https://github.com/ullaskunder3/Solution-to-graphics.h/commits?author=Prakash4844" title="Documentation">📖</a>
     <td align="center"><a href="https://github.com/sagargoswami2001"><img src="https://avatars.githubusercontent.com/u/88379870?v=4" width="100px;" alt=""/><br /><sub><b>sagargoswami2001</b></sub></a><br />
    <a href="#question-sagargoswami2001" title="Answering Questions">💬</a> <a href="https://github.com/ullaskunder3/Solution-to-graphics.h/commits?author=sagargoswami2001" title="Documentation">📖</a>
  </tr>

</table>
