# Pre-Configured DLL Base (C++)

A solid, pre-configured boilerplate for Windows DLL development. This project is designed for both beginners and experienced developers looking for a clean, reliable starting point for injectable DLLs.

## ✨ Features
- **Multi-Architecture Support:** Fully pre-configured for `Debug` and `Release` builds targeting both **x64** and **x86**.
- **Safe Threading:** Robust `DllMain` implementation using a detached thread to prevent Loader Lock issues.
- **Native Eject System:** Built-in support to safely unload the DLL by pressing the `END` key.
- **Clean Boilerplate:** Minimalist structure—no bloat, just the essential code to get you started.

## 🚀 Getting Started
1. Clone the repository or download the ZIP file.
2. Open the `.sln` file in Visual Studio 2019 or later.
3. Add your custom logic inside the `MainThread` function in `main.cpp`.
4. Select your target architecture (x64 or x86), build the project, and inject it.

## 🛠️ Code Structure
- `DllMain`: The entry point that initializes the primary execution thread.
- `MainThread`: The core loop where your custom logic resides.
- `VK_END`: A pre-defined hotkey to terminate the thread and safely free the library from memory.

---
*Developed by [yoredz](https://github.com/yoredz)*
