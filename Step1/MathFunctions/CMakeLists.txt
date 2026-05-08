# TODO12: Move all the MathFunctions target commands to this CMakeLists.txt.
#         Ensure that all paths are updated to be relative to this new location.
add_library(MathFunctions)  # Library

target_sources(MathFunctions                # Library
    PRIVATE
        # MathFunctions/MathFunctions.cxx
        MathFunctions.cxx
    
    PUBLIC
        FILE_SET HEADERS
        # BASE_DIRS
        #     MathFunctions
            # Use `#include <MathFunctions.h>`
            # Not `#include <MathFunctions/MathFunctions.h>`
        FILES 
            # MathFunctions/MathFunctions.h
            MathFunctions.h
)
