# CMake

## Build

### Create `build` folder

```bash
cmake -B build
```

### Build

```bash
cmake --build build
```

The executable file(target) will be placed on `build/Debug/`

### Build and Reconfigure

```bash
cmake --build build --clean-first
```

