# Dumper Package Tool for S&box

## Background

s&box compiles game packages (e.g. `package.author.gamename`) at runtime using
Roslyn on .NET 10 — the resulting assemblies exist only in process memory and
never touch disk. Dumper Tool scans the memory of a running s&box instance, identifies these
in-memory PE images, and writes them as `.dumped` files you can inspect with
dnSpyEx or ILSpy.

## Usage
```
dumper -o <output_dir>
```

| Flag | Description |
|------|-------------|
| `-o` | Directory where dumped assemblies will be written |
| `-v` | Activate the verbose mode |


**Example**
```
dumper -o ./dumps
```

## Build

Requires CMake 3.20+, LLVM/clang-cl, Ninja, and an x64 MSVC environment.
```bash
cmake --preset default
cmake --build build
```

## Notes

- s&box must be running with a package loaded before dumping
- Run as administrator or ensure sufficient permissions to read sbox.exe memory
- Dumped files are valid PE loadable by dnSpyEx

## Disclaimer

For personal research only. The author is not responsible for any misuse. Respect other developers' work.
