# CMake

> [!NOTE]
> MSVC don't support Chinese characters.
> 
> warning C4819: 该文件包含不能在当前代码页(936)中表示的字符。请将该文件保存为 Unicode 格式以防止数据丢失
> 
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

## CMakeLang & `.cmake`

### Run the script

```bash
cmake -P CMakeLists.txt
```

`cmake -P` script mode, CMakeLang scripts always end with `.camke`

### True and False

All of cmake variable is string like Bash.

- Truthy:
  - `True`
  - `On`
  - `Yes`
  - non-zero number(in fact this is string)
- Falsy
  - `False`
  - `Off`
  - `No`
  - `0`
  - `Ignore`
  - `NotFound`
  - empty string

Recommand using `True/False` or `On/off` as boolean.

### string

- cmake中一切都是字符串，因此cmake变量可以省略双引号。
- 字符串中有空格时需要使用双引号包裹，否则会被识别为列表

### 比较运算符和逻辑运算符

- `STREQUAL` 比较字符串相等
- `DEFINED` 变量是否有定义
- `MATCHES` 包含
- 逻辑运算符 `AND` `OR` `NOT`