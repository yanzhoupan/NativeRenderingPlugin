# # 设置CMake的最低版本要求
# cmake_minimum_required(VERSION 3.0)

# # 设置项目名称
# project(YourProjectName)

# # 添加可执行文件，将main.cpp替换为你的源文件
# add_executable(main main.cpp)

# # 设置编译选项
# # target_compile_options(main PRIVATE)
# # set(CMAKE_CXX_COMPILER "path/to/your/compiler")
# message(STATUS "====C++ Compiler: ${CMAKE_CXX_COMPILER}")

# # 添加头文件搜索路径
# target_include_directories(main PRIVATE "C:/Program Files (x86)/glfw-3.3.8/include")

# # 添加库文件搜索路径
# target_link_directories(main PRIVATE "C:/Program Files (x86)/glfw-3.3.8/lib-mingw-w64")
# target_link_directories(main PRIVATE "C:/Program Files (x86)/glfw-3.3.8/lib-vc2019")
# target_link_directories(main PRIVATE "C:/Program Files (x86)/Windows Kits/10/Lib/10.0.18362.0/um/x64")

# # 链接所需的库
# target_link_libraries(main PRIVATE opengl32)
# target_link_libraries(main PRIVATE gdi32)
# target_link_libraries(main PRIVATE glfw3)

