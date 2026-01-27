# Fundamentals of Programming with C++

[![C++](https://img.shields.io/badge/C++-100%25-blue)](https://github.com/youssef-hachimi/Fundamentals-Of-Programming-With-cpp)
[![Stars](https://img.shields.io/github/stars/youssef-hachimi/Fundamentals-Of-Programming-With-cpp)](https://github.com/youssef-hachimi/Fundamentals-Of-Programming-With-cpp/stargazers)
[![License: MIT](https://img.shields.io/badge/License-MIT-yellow.svg)](https://opensource.org/licenses/MIT)
[![Code of Conduct](https://img.shields.io/badge/Contributor%20Covenant-2.0-4baaaa.svg)](CODE_OF_CONDUCT.md)
[![Commits](https://img.shields.io/github/commit-activity/m/youssef-hachimi/Fundamentals-Of-Programming-With-cpp)](https://github.com/youssef-hachimi/Fundamentals-Of-Programming-With-cpp/commits/main)

A comprehensive repository for learning C++ programming fundamentals, Object-Oriented Programming concepts, and building practical projects.

## 📋 Table of Contents

- [About](#about)
- [Repository Structure](#repository-structure)
- [Prerequisites](#prerequisites)
- [Usage](#usage)
- [Topics Covered](#topics-covered)
- [Resources](#resources)
- [Code of Conduct](#code-of-conduct)
- [Security](#security)
- [License](#license)

## 🎯 About

This repository contains a collection of C++ programming exercises, examples, and projects designed to help learners master programming fundamentals and Object-Oriented Programming (OOP) principles. From basic syntax to advanced OOP concepts, this repository provides hands-on practice materials.

## 📁 Repository Structure

```
Fundamentals-Of-Programming-With-cpp/
│
├── CPP/                            # Core C++ programming exercises
│                                   # Syntax, basics, and fundamentals
│
├── TD4/                            # Tutorial exercises (Travaux Dirigés)
│                                   # Guided practice problems
│
├── .github/workflows/              # GitHub Actions CI/CD workflows
│
├── test.cpp                        # Test file for quick experiments
├── CODE_OF_CONDUCT.md              # Community guidelines
├── SECURITY.md                     # Security policy
├── LICENSE                         # MIT License
└── README.md                       # This file
```

## 🔧 Prerequisites

To compile and run the C++ programs in this repository, you'll need:

### Required Software

- **C++ Compiler**: Any modern C++ compiler supporting C++11 or later
  - **Windows**: 
    - [MinGW-w64](https://www.mingw-w64.org/)
    - [Visual Studio](https://visualstudio.microsoft.com/) (Community Edition is free)
    - [TDM-GCC](https://jmeubank.github.io/tdm-gcc/)
  - **macOS**: 
    - Xcode Command Line Tools
      ```bash
      xcode-select --install
      ```
    - Or install GCC via Homebrew
      ```bash
      brew install gcc
      ```
  - **Linux**: 
    - GCC/G++
      ```bash
      # Debian/Ubuntu
      sudo apt-get install build-essential
      
      # Fedora
      sudo dnf install gcc-c++
      
      # Arch Linux
      sudo pacman -S gcc
      ```

### Recommended Tools

- **IDE/Text Editor**:
  - [Visual Studio Code](https://code.visualstudio.com/) with C/C++ extension
  - [CLion](https://www.jetbrains.com/clion/)
  - [Code::Blocks](http://www.codeblocks.org/)
  - [Dev-C++](https://sourceforge.net/projects/orwelldevcpp/)

- **Debugger**: GDB (usually included with GCC)
- **Build System**: Make or CMake (optional but useful for larger projects)

## 💻 Usage

### Basic Compilation

```bash
# Simple compilation
g++ filename.cpp -o output_name

# With C++11 standard
g++ -std=c++11 filename.cpp -o output_name

# With all warnings enabled (recommended)
g++ -Wall -Wextra -std=c++11 filename.cpp -o output_name

# With debugging symbols
g++ -g filename.cpp -o output_name

# With optimization
g++ -O2 filename.cpp -o output_name
```

### Running Programs

**Linux/macOS:**
```bash
./output_name
```

**Windows:**
```bash
output_name.exe
```

### Using Different C++ Standards

```bash
# C++11
g++ -std=c++11 program.cpp -o program

# C++14
g++ -std=c++14 program.cpp -o program

# C++17
g++ -std=c++17 program.cpp -o program

# C++20
g++ -std=c++20 program.cpp -o program
```

### Example Workflow

```bash
# Navigate to the CPP directory
cd CPP

# Compile a program
g++ -Wall -std=c++11 hello.cpp -o hello

# Run the program
./hello
```

## 📚 Topics Covered

### 1. C++ Syntax Fundamentals
- Variables and data types
- Input/output operations (cin, cout)
- Operators and expressions
- Control structures (if/else, switch)
- Loops (for, while, do-while)
- Functions and parameter passing

### 2. Object-Oriented Programming (OOP)
- **Classes and Objects**: Definition, instantiation, member functions
- **Encapsulation**: Access specifiers (public, private, protected)
- **Constructors and Destructors**: Default, parameterized, copy constructors
- **Inheritance**: Single, multiple, multilevel inheritance
- **Polymorphism**: Function overloading, operator overloading, virtual functions
- **Abstraction**: Abstract classes and pure virtual functions

### 3. Advanced Topics
- Pointers and references
- Dynamic memory allocation (new/delete)
- Arrays and strings
- File I/O operations
- Standard Template Library (STL) basics
- Exception handling
- Templates

### 4. Simple Projects
- Calculator applications
- Student management systems
- Banking systems
- Game development basics
- Data structure implementations
 - Comprehens

This project follows the [Contributor Covenant Code of Conduct](CODE_OF_CONDUCT.md). By participating in this project, you agree to abide by its terms and maintain a respectful, inclusive environment.

## 🔒 Security

For information about our security policy and how to report vulnerabilities, please see our [Security Policy](SECURITY.md).

## 📝 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

## 👤 Author

**Youssef Hachimi**

- GitHub: [@youssef-hachimi](https://github.com/youssef-hachimi)



---

**Happy Coding! 💻🚀**
