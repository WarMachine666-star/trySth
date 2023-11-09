# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)

# 工程名称
project(Demo)

# 设置
set(CMAKE_CXX_STANDARD 11)
#添加math子目录
add_subdirectory(src/math)
#指定生成目标
add_executable(Demo src/main.c)
# 添加链接库
target_link_libraries(Demo my_math)