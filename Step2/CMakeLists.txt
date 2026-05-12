# Compare CMakeLang with Python

############
# Variable #
############

# var = 'World!'
# print(f'Hello {var}')
set(var "World!")
message("Hello ${var}")


############
# for loop #
############

# stooges = ['Moe', 'Larry']
# stooges.append('Curly')
# print(f'Stooges contains: {stooges}')
# for stooge in stooges:
#     print(f'Hello, {stooge}')
set(stooges "Moe;Larry")
list(APPEND stooges "Curly")
message("Stooges contains: ${stooges}")

foreach(stooge IN LISTS stooges)
    message("Hello, ${stooge}")
endforeach()


##################
# Macro and Func #
##################

# Compare with C, `main.c`
# Compare with C++, `main.cpp`

macro(MyMacro MacroArgument)
    message("${MacroArgument}\n\t\tFrom Macro")
endmacro()

function(MyFunc FuncArgument)
    MyMacro("${FuncArgument}\n\tFrom Function")
endfunction()

MyFunc("From TopLevel")


#############
# Condition #
#############
cmake_policy(SET CMP0012 NEW) # 自动识别TRUE等布尔常量

# True是布尔常量(不考虑大小写)
if (True) 
    message("Constant Value: True")
else()
    message("Constant Value: False")
endif()

# 未定义变量(默认为FALSE)
if (ConditonalValue) 
    message("Undefined Value: True")
else()
    message("Undefined Value: False")
endif()

set(ConditonalValue True)
if (ConditonalValue) 
    message("Undefined Value: True")
else()
    message("Undefined Value: False")
endif()
