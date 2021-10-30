# Valid scopes for set_property are:
# GLOBAL, DIRECTORY, TARGET, SOURCE, TEST, CACHE, INSTALL.
set_directory_properties(
    PROPERTY FOO
    "I am the real FOO"
    )
get_directory_property(foo_value FOO)
message(STATUS "foo_value: ${foo_value}")

get_cmake_property(foo_value FOO)
message(STATUS "foo_value: ${foo_value}")

set_property(
    DIRECTORY
    PROPERTY FOO
    1
    2
    3
)
get_directory_property(foo_value FOO)
message(STATUS "foo_value: ${foo_value}")