# C Programming Basics for Class 12

This repository contains basic C programming examples prepared for Class 12 learners and might be helpful for others also.

## About This Project

This is a teaching-oriented practice collection, not a full C programming course.

The content was originally created for online classes taken by the author while studying in Class 12. Because of that, the examples are simple, focused, and designed to explain core ideas clearly to beginners.

## Project Goal

- Help students understand function basics in C using small programs
- Show how different function signatures work in practical code
- Keep examples short and easy to read in a classroom setting

## Current Topics Included

At present, this repository includes examples of function types:

1. With arguments and with return value
2. With arguments and without return value
3. Without arguments and with return value

All examples use the same rectangle area problem so students can compare function styles without changing problem complexity.

## Folder Structure

- .vscode/: Workspace settings for running C files in VS Code
- TypesOfFunctions/: Lesson programs on C function types

Inside TypesOfFunctions:

- 01.c: With arguments and with return value
- 02.c: With arguments and without return value
- 03.c: Without arguments and with return value

Note:

- .exe files may appear after compilation and are ignored through .gitignore.

## Requirements

- GCC compiler (MinGW or equivalent)
- VS Code (optional, recommended)

## How to Compile and Run (Terminal)

From the project root:

    cd "C:\Users\MSI\Desktop\C Programming\Class 12"

Universal command (replace `<file>` with any C file name like `01`, `02`, or `03`):

    gcc TypesOfFunctions/<file>.c -o TypesOfFunctions/<file>.exe
    ./TypesOfFunctions/<file>.exe

If you are using PowerShell, run executables with .\ prefix.

## Run with VS Code Code Runner

This workspace includes settings that allow running C files using the Run Code button in VS Code.

If execution does not start correctly:

1. Close all open terminals in VS Code
2. Reload the VS Code window
3. Open a C file and click Run Code

## Teaching Notes

- Programs are intentionally beginner-friendly
- Variable names and logic are kept straightforward for early learners
- Inputs are taken from the user to make lessons interactive

## Scope and Limitations

This repository currently covers only selected basics and is not complete for the entire Class 12 C syllabus.

Possible future additions:

- Arrays and strings
- Loops and pattern programs
- Pointers (intro level)
- Structures and file handling (basic)

## Suggested Learning Flow

1. Read 01.c and understand argument passing plus return values
2. Compare 02.c to see output handling inside function
3. Study 03.c to understand no-argument function style
4. Modify each program and test different inputs

## Contributing

This repository is primarily educational and personal. Small improvements in code clarity, comments, and structure are welcome.

## Acknowledgment

Prepared as part of online teaching efforts for Class 12 students.
