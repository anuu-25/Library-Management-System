# Library-Management-System

## 📝 Description

 **Library-Management-System**

This is a professional, CLI-based Library Management System implemented in C. The project is designed with a focus on structural modularity, secure user access control, dynamic memory management, and persistent storage handling to manage books seamlessly across multiple distinct genres.

## ✨ Features
Here are the features of libarary management system.


- **User Authentication & Security:**


   Includes a secure gatekeeping authorize() module requiring a hardcoded admin username and password before allowing access to the main database system.

  
  
- **Dynamic Data Management:**


  Implements dynamic memory allocation (malloc) and pointer arrays to manage books without unnecessary overhead, structuring storage into specific genres (Fictional, Academic, Skills, and Non-Fictional).


- **Full CRUD Functionality:**

   Offers full control over library records, allowing administrators to seamlessly Add, Display, Search (by title), and Delete records using unique ISBN numbers.

  
- **Persistent Storage (File Handling):**

  Built with file serialization capabilities using low-level binary data stream functions (fwrite/fread) to save and load library states across system reboots into a physical project.txt data file.

## 📋 System Overview
- **Add Book**

    Tracks internal global pointers, receives inventory size, allocations, and user strings, safely pruning extra newlines.

- **Display Book**

  Loops systematically through categorical indexes to show currently cataloged text entries.

  
- **Search Book**

  Uses standard string comparison algorithms to fetch dynamic structural indexes on a direct hit.
- **Delete Book**

  Clears structures by matching the key ISBN and resetting active parameters.

  
- **Save Data**

  Serializes tracking arrays and structural pointers safely into external text storage.

  
- **Exit**

  Terminates loop flows cleanly, returning control safely back to the operating host.

## 🛠️ Technical Highlights
- **Language:** C (Standard Input/Output, String, and Utility headers)
  
- **Architecture:** Multi-file structure with modularized operational definitions (add.c, display.c, search.c, delete.c, load.c, save.c).

  
- **Data Structures:** Custom struct book models processing string buffering, identifier mapping via arrays, and a 2D pointer allocation architecture.

  
- **Persistence Mode:** Binary file parsing ("wb" / "rb").


## 📁 Project Structure

```
.
├── add.c
├── delete.c
├── display.c
├── load.c
├── main.c
├── save.c
├── search.c
└── user.c
```

## 👥 Contributing

Contributions are welcome! Here's the standard flow:

1. **Fork** the repository
2. **Clone** your fork: `git clone https://github.com/anuu-25/Library-Management-System.git`
3. **Branch**: `git checkout -b feature/your-feature`
4. **Commit**: `git commit -m 'feat: add some feature'`
5. **Push**: `git push origin feature/your-feature`
6. **Open** a pull request

Please follow the existing code style and include tests for new behavior where applicable.

---
