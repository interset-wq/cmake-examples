# cmake最低版本
cmake_minimum_required(VERSION 3.23)

# 项目名称
project(Tutorial)

# 输出的可执行文件（目标文件）
add_executable(hello)

# 目标文件和源文件关联
target_sources(hello     # 目标文件
  PRIVATE                # 私有
    HelloWorld.cxx       # 源文件
)
