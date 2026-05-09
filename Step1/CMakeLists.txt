#########
# BASIC #
#########

cmake_minimum_required(VERSION 3.23)
project(Tutorial)

# add_executable(Tutorial)      # Program
# target_sources(Tutorial       # Program(target)
#     PRIVATE 
#         Tutorial/Tutorial.cxx # Source
# )


###############################
# Link library and executable #
###############################

# target_link_libraries(Tutorial   # Program
#     PRIVATE
#         MathFunctions            # Library
# )

########################
# CMLs on Subdirectory #
########################

add_subdirectory(Tutorial) # Subdirectory name


#################
# Add a Library #
#################

# add_library(MathFunctions)                  # Library
# target_sources(MathFunctions                # Library
#     PRIVATE
#         MathFunctions/MathFunctions.cxx     # Source in Library
    
#     PUBLIC
#         FILE_SET HEADERS
#         BASE_DIRS
#             MathFunctions                   # Library Folder
#             # Use `#include <MathFunctions.h>`
#             # Not `#include <MathFunctions/MathFunctions.h>`
#         FILES 
#             MathFunctions/MathFunctions.h   # Header in Library
# )

########################
# CMLs on Subdirectory #
########################
add_subdirectory(MathFunctions)      # Subdirectory name