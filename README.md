# Coursera week 2 assignment
learning make from alex fosdik via coursera intro to embedded systems
# Learning Make & Build Systems 🛠️
**Automating the Build Process for Embedded Systems**

![Build](https://img.shields.io/badge/Build-GNU_Make-blue?style=for-the-badge&logo=gnu)
![Toolchain](https://img.shields.io/badge/Toolchain-GCC_/_ARM--GCC-orange?style=for-the-badge)
![Course](https://img.shields.io/badge/Course-Alex_Fosdick_/_Coursera-red?style=for-the-badge)
![Author](https://img.shields.io/badge/Author-Abdelrahman--Elnahrawy-blue?style=for-the-badge&logo=github)

This repository contains my progress and lab work from the **"Introduction to Embedded Systems Software and Development Environments"** course by Alex Fosdick. It focuses on mastering the GNU Make utility, cross-compilation toolchains, and the multi-stage compilation process.

---

## 🎯 Learning Objectives
The core of this repository is focused on transitioning from manual compilation to automated build systems:
* **The Compilation Flow:** Understanding Preprocessing (`.i`), Compilation (`.s`), Assembly (`.o`), and Linking (`.out`/`.elf`).
* **Cross-Compilation:** Building software for the **ARM Cortex-M4 (MSP432)** while developing on an x86 host.
* **Makefiles:** Writing scalable rules, managing dependencies, and using automatic variables ($@, $<, $^).
* **Memory Analysis:** Using tools like `nm`, `size`, and `objdump` to analyze the binary footprint.

---

## 🏗️ The Build System Architecture
A professional Makefile is designed to be platform-agnostic. This project implements a system that can switch between **HOST (Linux/x86)** and **PLATFORM (MSP432)** targets dynamically.



### Key Features:
* **Conditional Switches:** Support for multiple platforms using the `PLATFORM` flag.
* **Compiler Flags:** Precise control over optimization (`-O`), debugging (`-g`), and warning levels (`-Wall`).
* **Dependency Generation:** Automatically generating `.d` files to track header changes.

---

## 🛠️ Toolchain Integration
The scripts and Makefiles in this repo utilize:
* **Native Toolchain:** `gcc` for local testing.
* **Cross Toolchain:** `arm-none-eabi-gcc` for embedded deployment.
* **Binary Utilities:** `size` to monitor `.text`, `.data`, and `.bss` segment usage.

---

## 📂 Repository Structure
```text
/Coursera_learning_make
  ├── Makefile             # The master build script
  ├── sources.mk           # Source file definitions
  ├── /src                 # Implementation files (.c)
  ├── /include             # Header files (.h)
  ├── /bin                 # (Generated) Compiled binaries
  └── README.md
```
🚀 Usage
To build the project for the host machine:

```Bash
make build PLATFORM=HOST
```
To build for the ARM MSP432 target:
```Bash
make build PLATFORM=MSP432
```


## 👤 Author
Abdelrahman Elnahrawy Embedded Systems Engineer

## 📄 License
This project is open-source and intended for educational purposes based on the Coursera Embedded Systems track.
