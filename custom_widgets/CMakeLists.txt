set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Headers Variable
set (example_HEADERS
        "${CMAKE_CURRENT_SOURCE_DIR}/Custom_Widget.h"
        )

# Sources Variable
set (example_CPP
        "${CMAKE_CURRENT_SOURCE_DIR}/Custom_Widget.cpp"
        )

# Create a Library or Header
add_library(example SHARED  ${example_CPP} ${example_HEADERS})

# Link additional libraries
target_link_libraries(example
        Qt5::Core
        Qt5::Widgets
        )

# PUBLIC include directories
target_include_directories(example PUBLIC
        "${CMAKE_SOURCE_DIR}/custom_widgets"
        )

# Install Target
install(TARGETS example
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION lib
        ARCHIVE DESTINATION lib
        )

###################################################################################################

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_INCLUDE_CURRENT_DIR ON)

# Sources Variable
set (using_example_CPP
        "${CMAKE_CURRENT_SOURCE_DIR}/using_custom_widget.cpp"
        )

# Create a Library or Header
add_library(using_example SHARED ${using_example_CPP})

# Link additional libraries
target_link_libraries(using_example
        example
        Qt5::Core
        Qt5::Widgets
        )


# Plugin renaming, if needed
set_target_properties(using_example PROPERTIES PREFIX "" SUFFIX ".po")

# Install Target
install(TARGETS using_example
        RUNTIME DESTINATION bin
        LIBRARY DESTINATION plugin
        ARCHIVE DESTINATION lib
        )

