include_directories(util)

file(GLOB_RECURSE GL_SOURCES gl/*.c)

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    include_directories(glx)
    aux_source_directory(glx GLX_SOURCES)
    list(APPEND GL_SOURCES ${GLX_SOURCES})
else()
    message(STATUS "Not on Linux: building without GLX support.")
endif()

add_library(GL SHARED ${GL_SOURCES})
target_link_libraries(GL EGL)

add_library(GL2 SHARED ${GL_SOURCES})
target_link_libraries(GL2 EGL)
SET_TARGET_PROPERTIES(GL2 PROPERTIES COMPILE_FLAGS -DUSE_ES2)

if(BCMHOST)
    set(PI_LIBS bcm_host vcos pthread)
    target_link_libraries(GL ${PI_LIBS} GLESv1_CM)
    target_link_libraries(GL2 ${PI_LIBS} GLESv2)
endif()

if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_link_libraries(GL X11)
    target_link_libraries(GL2 X11)
endif()

if(CMAKE_SHARED_LIBRARY_SUFFIX MATCHES ".so")
    set_target_properties(GL PROPERTIES SUFFIX ".so.1")
    set_target_properties(GL2 PROPERTIES SUFFIX ".so.1")
endif()

aux_source_directory(preload PRELOAD_SOURCES)
add_library(preload SHARED ${PRELOAD_SOURCES})
if(${CMAKE_SYSTEM_NAME} MATCHES "Linux")
    target_link_libraries(preload X11)
endif()

aux_source_directory(proxy PROXY_SOURCES)
add_library(proxy SHARED ${PROXY_SOURCES})

aux_source_directory(tests TEST_SOURCES)
add_executable(test ${TEST_SOURCES})
target_link_libraries(test proxy)
