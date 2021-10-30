set(MY_GLOBAL_VAR "This is a global var")

function(do_cmake_good)
    message(STATUS "do_cmake_good() is printing the variable MY_GLOBAL_VAR = ${MY_GLOBAL_VAR}")
    
    # Let me try to change the value
    set(MY_GLOBAL_VAR "Changed the value" PARENT_SCOPE)
    message(STATUS "do_cmake_good() is printing the variable MY_GLOBAL_VAR = ${MY_GLOBAL_VAR}")
endfunction()
    
do_cmake_good()
    
    # First step, nothing is printed since we did not define the variable MY_GLOBAL_VAR
    # Let us define it:
    
    # Second step, the variable is defined and the value is printed
message(STATUS "do_cmake_good() is printing the variable MY_GLOBAL_VAR = ${MY_GLOBAL_VAR}")

#parent_scope is the easiest way to return values to the caller

function(inc_num num)
    message(STATUS "inc_num() value before inc is: ${${num}}")
    MATH(EXPR value "${${num}} + 1")
    set(value "${value}" PARENT_SCOPE)
    
endfunction(inc_num num)

set(value 10)
inc_num(value)
message(STATUS "value after inc is: ${value}")


function(sum_numbers return_val arg1 arg2)
    MATH(EXPR value "${${arg1}} + ${${arg2}}")
    set("${return_val}" "${value}" PARENT_SCOPE)
endfunction(sum_numbers return_val arg1 arg2)

set(value1 10)
set(value2 20)
sum_numbers(sum_result value1 value2)
message(STATUS "sum_result is: ${sum_result}")
