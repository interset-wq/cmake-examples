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