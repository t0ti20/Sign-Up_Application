add_test( Database_Test.Adding_Records_More_Maximum /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/Main [==[--gtest_filter=Database_Test.Adding_Records_More_Maximum]==] --gtest_also_run_disabled_tests)
set_tests_properties( Database_Test.Adding_Records_More_Maximum PROPERTIES WORKING_DIRECTORY /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
add_test( Database_Test.Printing_Invalid_Record /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build/Main [==[--gtest_filter=Database_Test.Printing_Invalid_Record]==] --gtest_also_run_disabled_tests)
set_tests_properties( Database_Test.Printing_Invalid_Record PROPERTIES WORKING_DIRECTORY /home/t0ti20/Desktop/VS-Code/GitHub/Sign-Up_Application/Libraries/build SKIP_REGULAR_EXPRESSION [==[\[  SKIPPED \]]==])
set( Main_TESTS Database_Test.Adding_Records_More_Maximum Database_Test.Printing_Invalid_Record)
