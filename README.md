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

Now To set up graphics.h in vs code:

## files

- [Graphics](./graphics.h)
- [Winbgim](./winbgim.h)
- [libbgi](./libbgi.a)

## Setup

 Get all the files needed `graphics.h`, `winbgim.h` and `libbgi.a`

 If you don't have MinGW installed get it from official and follow the steps.

 Know the difference between MINGW, Mingw-w64 && TDM [learn more go, go, go...](https://github.com/ullaskunder3/cpp-setup-vsCode#setup)

- Copy `graphics.h` and `winbgim.h` files to MinGW/`include` folder.

location might be **("C:\MinGW\include\")**

- Copy `libbgi.a` to file to MinGW/`lib` folder.

location might be **("C:\MinGW\lib\")**

Open Vs Code Smart way:

- Select a folder and open Terminal

```bash
   mkdir turbographics
   cd turbographics
   code .
```
if you are using template with task and c_cpp_properties json file then you directory should look like this:

- All you code should o inside `src` and the task.json will build the .exe in `build` folder

```cmd
turbographics
├───.vscode
└───Home
    ├───build
    └───src
```

- Create or Add `.vscode` folder in that workspace which will contain `task.json`, `c_cpp_properties.json`

  - [Alternative] OR just get the template from the repo => [.vscode config ❤](https://github.com/ullaskunder3/graphics.h-project-template)

![image](https://user-images.githubusercontent.com/66258652/133919065-0f524b26-cb2f-4aef-a19c-367a329188cd.png)

```cpp
//create a file name it example.cpp or any other name with .cpp extension

#include <graphics.h> 
    int main()
    {
        int gd = DETECT, gm;
        char data[] = "C:\\MinGW\\lib\\libbgi.a";
    
        initgraph(&gd, &gm, data);
       //you can also pass NULL for third parameter if you did above setup successfully
       //example: initgraph(&gd, &gm, NULL);
       
        circle(200, 200, 100);
        getch();
        closegraph();
        return 0;
    }
```

Running the file using command in termainl:

```cmd
    g++ -o example hut.cpp -lbgi -lgdi32 -lcomdlg32 -luuid -loleaut32 -lole32

    //after u'll get example.exe run using command: .\example
```
![image](https://user-images.githubusercontent.com/66258652/133919476-09225201-68a4-46b8-9220-1a6244a0488c.png)

 OR => 👌🤩
 
 - Just `Ctrl+Shift+B` to run the build task you will get the executable file in build folder

![graphics example2](https://user-images.githubusercontent.com/66258652/133919626-3cd671e5-36e4-4315-b4bf-951563fc6913.png)
![graphics example3](https://user-images.githubusercontent.com/66258652/133919648-c5745fd9-4fb4-49f5-9ca2-2d7b5f54fd85.png)

  Easy run template for graphics.h [=> repo](https://github.com/ullaskunder3/graphics.h-project-template)
  If your dont want to write that command again and again you can create [task.json](https://github.com/ullaskunder3/graphics.h-setup/tree/main/.vscode)
