# IFMO_CPP_programming_20180910
[![from_flaxo with_♥](https://img.shields.io/badge/from_flaxo-with_♥-blue.svg)](https://github.com/tcibinan/flaxo)

## Configuration

Source structure should be the following. All `.cpp` scripts should be located under `src/main/cpp` directory.
All tests for a single cpp file should be located under corresponding directory `src/test/resources/script_name`.
Each test is basically a directory with two txt files `input.txt`  and `output.txt`.

```
src/
    main/
        cpp/
            main.cpp
            script1.h
            script1.cpp
            script2.h
            script2.cpp
    test/
        resources/
            script1/
                some_test_case/
                    input.txt
                    output.txt
            script2/
                test_case/
                    input.txt
                    output.txt
                another_test_case/
                    input.txt
                    output.txt
    run_tests.sh
```

Success output
```
Tests

> script1
PASSED: some_test_case

> script2
PASSED: test_case
PASSED: another_test_case

Summary: SUCCESS
```

Failure output
```
Tests

> script1
PASSED: some_test_case

> script2
FAILED: test_case: On input [-3 -6] was [-9] but expected [-7].
PASSED: another_test_case

Summary: FAIL
```

## Demo

To run tests for scripts `plus` and `minus`
```bash
./run_tests.sh plus minus
```

Expected output
```
Tests:

> plus:
PASSED: negative_numbers
PASSED: positive_numbers

> minus:
PASSED: negative_result

Summary: SUCCESS
<<<<<<< HEAD
=======
```

## Script to run tests (in Git Bash on Windows)
```bash
./run_tests.sh t00_hello t01_squirrels t02_squirrels2 t03_last_number t04_first_number t05_tens_number t06_3digits t07_pies t08_watch t09_snail
>>>>>>> task-1
```