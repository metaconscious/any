function(add_examples)
    foreach (SRC_FILE_PATH ${ARGV})
        string(REPLACE ".cpp" "" SRC_FILE_NAME ${SRC_FILE_PATH})
        string(REPLACE "_" "-" TARGET_NAME ${SRC_FILE_NAME})
        add_executable(${TARGET_NAME} ${SRC_FILE_PATH})
        target_link_libraries(${TARGET_NAME} PRIVATE any)
    endforeach ()
endfunction()