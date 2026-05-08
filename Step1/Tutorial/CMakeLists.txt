# TODO10: Move all the Tutorial target commands to this CMakeLists.txt. Ensure
#          that all paths are updated to be relative to this new location.
add_executable(Tutorial)    # Program

target_sources(Tutorial     # Program
    PRIVATE 
        # Tutorial/Tutorial.cxx
        Tutorial.cxx
)

target_link_libraries(Tutorial   # Program
    PRIVATE
        MathFunctions            # Library
)