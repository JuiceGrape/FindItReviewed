cmake_minimum_required(VERSION ${CMakeMinimumVersion})

set(Headers
    Communication.hpp
)

set(Sources
    Communication.cpp
)

set(GlobalIncludeDirs
    ${GlobalIncludeDirs}
    ${CMAKE_CURRENT_LIST_DIR}
    PARENT_SCOPE
)

add_library(Communication STATIC ${Sources} ${Headers})

add_subdirectory(ProtocolParser)
target_link_libraries(Communication PRIVATE ProtocolParser)

add_subdirectory(ClusterConnection)
target_link_libraries(Communication PRIVATE ClusterConnection)
