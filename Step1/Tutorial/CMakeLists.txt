########
# main #
########

add_executable(Tutorial)    # Program

target_sources(Tutorial     # Program
    PRIVATE 
        Tutorial.cxx
)

target_link_libraries(Tutorial   # Program
    PRIVATE
        MathFunctions            # Library
)