# CMake

> [!NOTE]
> Don't support Chinese characters.
> warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
> In order to solve it, we should save files using `UTF8 with BOM`

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

