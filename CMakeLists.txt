cmake_minimum_required(VERSION 3.30)
project(FourthProject)

set(CMAKE_CXX_STANDARD 20)

add_executable(FourthProject main.cpp Utils/balance_shower.cpp Utils/deposit.cpp Utils/display_card.cpp Utils/first_page.cpp Utils/helper.cpp Utils/loan.cpp Utils/sign_in.cpp Utils/signed_in.cpp Utils/withdrawal.cpp Utils/user.cpp)
