cmake_minimum_required(VERSION 3.23)


# 跳过Exercise1.cmake和Exercise2.cmake的测试
set(SKIP_TESTS True)

# 导入
include(Exercise1.cmake)
include(Exercise2.cmake)

# InList = ['FooBar', 'QuxBar']
set(InList FooBar QuxBar)

# InList.append('FooBaz')
# InList.append('QuxBaz')
FuncAppend(InList FooBaz)
FuncAppend(InList QuxBaz)


if(NOT InList STREQUAL "FooBar;QuxBar;FooBaz;QuxBaz")
  message(WARNING "Append failed, InList contains: ${InList}")
endif()


FilterFoo(OutList ${InList})


check_contains(FooBar)
check_contains(FooBaz)
check_nonfoo(${OutList})

if(NOT Failed)
  message("Success!")
endif()
