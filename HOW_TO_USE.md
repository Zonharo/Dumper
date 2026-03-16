# How to use Dumper Tool

Dumper Tool is a command-line utility designed to dump in-memory .NET assemblies from a running `sbox.exe` process.

## Prerequisites

1. **Windows OS**: This tool only works on Windows.
2. **s&box running**: The game must be running with a package (game mode or addon) loaded.
3. **Administrator Privileges**: You **must** run your terminal as an Administrator to allow the tool to read the game's memory.

## Running the Application

Since this is a command-line tool (CLI), do not just double-click the `.exe` file. Follow these steps:

1. Open **PowerShell** or **Command Prompt (CMD)** as **Administrator**.
2. Navigate to the folder containing `dumper.exe`.
3. Run the tool using the following command:

```powershell
.\dumper.exe -o <output_directory>
```

### Examples:

- **Basic dump to a specific folder:**
  ```powershell
  .\dumper.exe -o ./dumps
  ```

- **Verbose mode (see more details during scanning):**
  ```powershell
  .\dumper.exe -o ./dumps -v
  ```

## Understanding the Flags

| Flag | Description |
|------|-------------|
| `-o` | **Required.** The directory where the dumped `.dumped` files will be saved. |
| `-v` | **Optional.** Activates verbose mode for detailed debugging information. |

## What to do with the output?

1. Once the process is finished, look into the folder you specified with the `-o` flag.
2. You will find files with the `.dumped` extension (e.g., `package.author.gamename @ 0xABC123.dumped`).
3. These files are standard .NET assemblies. You can open and inspect them using tools like:
   - **dnSpyEx**
   - **ILSpy**

## Troubleshooting

- **"sbox.exe not found"**: Ensure the game is running before starting the dumper.
- **"OpenProcess failed"**: You forgot to run the terminal as an Administrator.
- **Empty output folder**: Ensure you have actually loaded a game mode or a map in s&box, as the assemblies are only generated when a package is active in memory.
