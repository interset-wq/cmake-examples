###########
# Library #
###########

add_library(MathFunctions)  # Library

target_sources(MathFunctions                # Library
    PRIVATE
        MathFunctions.cxx
    
    # BASE_DIRS is library folder by default
    # Use `#include <MathFunctions.h>`
    # Not `#include <MathFunctions/MathFunctions.h>`
    PUBLIC
        FILE_SET HEADERS
        # BASE_DIRS
        #     MathFunctions
        FILES 
            MathFunctions.h
)
