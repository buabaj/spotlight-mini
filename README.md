# Spotlight Mini

Spotlight Mini is a simple command-line utility that allows you to search for files within a specified directory and its subdirectories by name. 

## Getting Started

To use Spotlight Mini, simply compile the code and run the executable file. Upon running, you will be prompted to enter the directory path and file name you would like to search for. 

## Prerequisites

To compile and run Spotlight Mini, you will need a C++ compiler and the C++17 standard library.

## Installing

To use Spotlight-Mini, you need to have a C++ compiler that supports C++17 features and the C++17 filesystem library. If you're using a recent version of GCC or Clang, these should be available by default. If you're using a different compiler, you may need to install the library separately.

To build the program, simply run the following commands:

```bash
g++ -std=c++17 main.cpp -o spotlight-mini

```

This will compile the program and create an executable file called "spotlight-mini" in the current directory.

## Usage

To use the program, simply run the "spotlight-mini" executable and follow the prompts. You will be asked to enter the directory you want to search and the search term you want to use.

```bash
./spotlight-mini
Enter the path to search: /path/to/search
Enter the file name to search: filename
```