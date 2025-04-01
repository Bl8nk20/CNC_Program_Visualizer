# CNC_Program_Visualizer

This Project was directly inspired by the work of Hubert Klinker with his Palmill and Palturn Programs.

## Vision

This Program should be a helpful tool for young apprentices or students to learn "old school" - CNC Programming.
They should be able to define their own tools, diameter of existing ones and most importantly see, what they coded.

## Features

* Text-Editor for G-Codes
* Visualizer
* Defining Tools (overlay)
* Defining Material and Dimensions (overlay)
* Bug detection and Reloader

## To-Do

* Everything in Feature List.
* Starting by Creating the Docs for the Project

## Things to think about

* Visualisation ? QT ?
* Docker ? -> Nice to enable OS independence
* Multithreaded !!
* Programming Language
  * Rust -> fast / safer than c++
  * C++ -> universally supported -> That's the Language i go with
  * C# -> easier to code
* Design Patterns
  * Creational Patterns
    * Singleton ? -> File Reading / Project Reading / File opening / Project Opening
    * Builder -> Different Parameter for same G-Code
  * Structural Patterns
    * Composite ?
    * Bridge -> Classes and interfaces
    * Proxy -> Database Reading and Writing
    * FlyWeight -> Tools and Material
  * Behavioral Patterns
    * Command -> G-Commands
    * Observer -> Out of bounds / in Material to deep
    * Mediator -> Reduce Chaotic Life
