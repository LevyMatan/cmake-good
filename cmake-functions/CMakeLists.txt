function(my_function var1 var2)

    # Using ARGN we get all arguments that are not consumed by arguments defined in the function decleration.
    foreach(arg IN LISTS ARGN)
        message(STATUS "USING ARGN - arg=${arg}")
    endforeach()
    # Using ARRV we get ALL arguments
    foreach(arg IN LISTS ARGV)
        message(STATUS "USING ARGV - arg=${arg}")
    endforeach()
    
    message(STATUS "my_function(var1 = ${${var1}}, var2 = ${${var2}})")

endfunction()


set(world "I am a little crazy on the head")
set(my_var Hello_World)
my_function(my_var "world" 1 2 3)