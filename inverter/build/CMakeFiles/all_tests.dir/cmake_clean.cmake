file(REMOVE_RECURSE
  "all_tests.pdb"
  "all_tests"
)

# Per-language clean rules from dependency scanning.
foreach(lang )
  include(CMakeFiles/all_tests.dir/cmake_clean_${lang}.cmake OPTIONAL)
endforeach()
