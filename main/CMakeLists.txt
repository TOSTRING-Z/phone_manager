file(GLOB SOURCES *.c)

list(APPEND SOURCES)
list(APPEND SOURCES "driver/nv6001.c" )

set(MY_INCLUDE_DIRS . driver)

idf_component_register(SRCS ${SOURCES}
                    INCLUDE_DIRS ${MY_INCLUDE_DIRS})

# include_directories(
#     .App
#     .HAL
#     .lv_port
# )
