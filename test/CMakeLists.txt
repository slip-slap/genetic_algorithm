find_package(GTest REQUIRED)
find_package(Boost 1.72.0 COMPONENTS ALL)

include_directories(TheTest ${Boost_INCLUDE_DIR})
include_directories(TheTest ${GTEST_INCLUDE_DIRS})

add_executable(TheTest test_nsga.cpp test_ga_tool.cpp test_selection_method.cpp
	../src/nsga.cpp ../src/nsga_chromosome.cpp
	../src/ga_problem.cpp ../src/ga_tool.cpp
	../src/selection_method.cpp
	)

target_link_libraries(TheTest ${GTEST_BOTH_LIBRARIES} pthread)
target_link_libraries(TheTest ${Boost_LIBRARIES})

##gtest_discover_tests(testa)
#enable_testing()
#add_test(me TheTest)
#add_test(m2 testb)


	
