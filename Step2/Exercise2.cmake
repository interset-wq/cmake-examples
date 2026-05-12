############
# Solution #
############

cmake_minimum_required(VERSION 3.23)


function(FilterFoo OutVar)

  foreach(item IN LISTS ARGN)
    if(item MATCHES Foo)
      list(APPEND ${OutVar} ${item})
    endif()
  endforeach()

  set(${OutVar} ${${OutVar}} PARENT_SCOPE)
endfunction()


########
# Test #
########

function(check_contains var)
  if(NOT var IN_LIST OutList)
    message(WARNING "OutList does not contain: ${var}")
    set(Failed True PARENT_SCOPE)
  endif()
endfunction()

function(check_nonfoo)
  list(FILTER ARGN EXCLUDE REGEX Foo)
  if(NOT ARGN STREQUAL "")
    message(WARNING "OutList contains extra item(s): ${ARGN}")
    set(Failed True PARENT_SCOPE)
  endif()
endfunction()

if(SKIP_TESTS)
  return()
endif()

set(InList FooBar BarBaz FooBaz BazBar QuxFoo BazQux)

FilterFoo(OutList ${InList})

if(NOT DEFINED OutList)
  message("FilterFoo unimplemented or does nothing")
  return()
endif()

set(Failed False)

check_contains(FooBar)
check_contains(FooBaz)
check_contains(QuxFoo)
check_nonfoo(${OutList})

if(NOT Failed)
  message("Success!")
endif()
