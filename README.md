# C Programming Basics for Class 12

![Language](https://img.shields.io/badge/Language-C-00599C)
![Level](https://img.shields.io/badge/Level-Beginner-2EA44F)
![Status](https://img.shields.io/badge/Status-Learning%20Project-1F6FEB)
![Focus](https://img.shields.io/badge/Focus-Class%2012%20Basics-F39C12)

This repository contains basic C programming examples prepared for Class 12 learners and can also be helpful for other beginners.

## About This Project

This is a teaching-oriented practice collection, not a complete C programming course.

The content was originally created for online classes taught by the author while studying in Class 12. Because of that, the examples are simple, focused, and designed to explain core ideas clearly.

## Project Goal

- Help students understand function basics in C using small programs
- Show how different function signatures work in practical code
- Keep examples short and easy to read in a classroom setting

## Current Topics Included

At present, this repository includes:

### 1) Types of Functions

1. With arguments and with return value
2. With arguments and without return value
3. Without arguments and with return value

All examples use the same rectangle area problem so students can compare function styles without changing the problem complexity.

### 2) Structure-Based Programs

1. Student records filtered by address
2. Book data sorted by price (ascending)
3. Student data sorted by percentage (ascending)
4. Dynamic student result entry and GPA filtering
5. Employee records filtered by salary range
6. Student records filtered by address (ID/Class version)

### 3) File Handling Basics

1. Write student records to a text file
2. Read stored records from a text file and display them

### 4) Recursion Basics

1. Factorial of a number using a recursive function

## Folder Structure

- .vscode/: Workspace settings for running C files in VS Code
- TypesOfFunctions/: Lesson programs on C function types
- Structure/: Practice programs using structures (records, sorting, filtering)
- FileHandling/: Basic programs for file input/output in C
- Recursion/: Basic recursive programming examples

### Repository Overview (Table)

| Folder/File       | Description                                    |
| ----------------- | ---------------------------------------------- |
| .vscode/          | VS Code workspace settings for running C files |
| TypesOfFunctions/ | Basic examples showing function types          |
| Structure/        | Structure-based practice programs              |
| FileHandling/     | Basic file handling practice in C              |
| Recursion/        | Introductory recursion practice in C           |
| .gitignore        | Ignores compiled binaries and build artifacts  |
| README.md         | Project documentation                          |

### Key Program Files

| Path                        | Topic                                            |
| --------------------------- | ------------------------------------------------ |
| TypesOfFunctions/01.c       | With arguments and with return value             |
| TypesOfFunctions/02.c       | With arguments and without return value          |
| TypesOfFunctions/03.c       | Without arguments and with return value          |
| Structure/structure01.c     | Filter student records by address                |
| Structure/structure02.c     | Sort books by price (ascending)                  |
| Structure/structure03.c     | Sort student records by percentage (ascending)   |
| Structure/structure04.c     | Enter dynamic student records and filter GPA > 3 |
| Structure/Structure.c       | Filter employee records by salary range          |
| Structure/kathmandu.c       | Filter student records by Kathmandu address      |
| FileHandling/filehandling.c | Store and read student records using text files  |
| Recursion/recursion.c       | Find factorial using recursion                   |

Note:

- .exe files may appear after compilation and are ignored by .gitignore.

## Requirements

- GCC compiler (MinGW or equivalent)
- VS Code (optional, recommended)

## How to Compile and Run (Terminal)

From the project root:

    cd "C:\Users\MSI\Desktop\C Programming\Class 12"

Universal command (replace `<path/to/file.c>` and `<path/to/output.exe>` as needed):

    gcc <path/to/file.c> -o <path/to/output.exe>
    ./<path/to/output.exe>

Examples:

    gcc TypesOfFunctions/01.c -o TypesOfFunctions/01.exe
    ./TypesOfFunctions/01.exe

    gcc Structure/structure04.c -o Structure/structure04.exe
    ./Structure/structure04.exe

    gcc FileHandling/filehandling.c -o FileHandling/filehandling.exe
    ./FileHandling/filehandling.exe

    gcc Recursion/recursion.c -o Recursion/recursion.exe
    ./Recursion/recursion.exe

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
- Structures and file handling (advanced)

## Suggested Learning Flow

1. Read 01.c and understand argument passing plus return values
2. Compare 02.c to see output handling inside function
3. Study 03.c to understand no-argument function style
4. Move to structure01.c for record input and filtering
5. Practice sorting logic using structure02.c and structure03.c
6. Try dynamic input and condition-based output in structure04.c
7. Compare address-filtering logic in structure01.c and kathmandu.c
8. Practice text file I/O with filehandling.c
9. Learn recursion basics through recursion.c (factorial)
10. Modify each program and test different inputs

## Contributing

This repository is primarily educational and personal. Small improvements in code clarity, comments, and structure are welcome.

## Author

- Prepared by a Class 12 student while teaching online C programming basics
- Audience: Class 12 learners and beginner C programmers

## Acknowledgment

Prepared as part of online teaching efforts for Class 12 students.
