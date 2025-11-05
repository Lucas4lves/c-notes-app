# C Notes App

A simple command-line notes application written in C using SQLite for data persistence.

## Features

- Create and store notes in a SQLite database
- List all stored notes
- Automatic database and table creation

## Prerequisites

- GCC compiler
- SQLite3 development libraries

### Installing SQLite3 on macOS
```bash
brew install sqlite3
```

### Installing SQLite3 on Ubuntu/Debian
```bash
sudo apt-get install libsqlite3-dev
```

## Building

```bash
make build
```

## Running

```bash
make run
```

Or directly:
```bash
./notes
```

## Cleaning

```bash
make clean
```

## Project Structure

```
├── main.c          # Main application entry point
├── database.h      # Database function declarations
├── database.c      # Database implementation using SQLite3
├── ui.h            # User interface function declarations
├── ui.c            # User interface implementation
├── Makefile        # Build configuration
├── notes.db        # SQLite database file (created at runtime)
└── notes           # Compiled executable
```

## Database Schema

The application creates a `notes` table with the following structure:

| Column | Type    | Description           |
|--------|---------|----------------------|
| id     | INTEGER | Primary key (auto-increment) |
| note   | TEXT    | Note content (not null) |

## License

This project is licensed under the terms specified in the LICENSE file.
