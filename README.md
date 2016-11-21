# travis_qmake_gcc_cpp14_ubsan

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_ubsan.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_ubsan)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL` only
 * Code coverage: none
 * Undefined bahavior sanitizer: `UBSAN`
 * Source: one single file, `main.cpp`

More complex builds:
 * (none)

Less complex builds:
 * No `UBSAN`: [travis_qmake_gcc_cpp14](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14)
 * Use C++98: [travis_qmake_gcc_cpp98_ubsan](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_ubsan)
 * Use C++11: [travis_qmake_gcc_cpp11_ubsan](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_ubsan)
