cmake_minimum_required(VERSION 3.21)
project(JumpAssistMod)

find_package(Geode REQUIRED)

geode_target(JumpAssistMod)

add_geode_mod(JumpAssistMod
    src/main.cpp
)
