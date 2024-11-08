cmake_minimum_required(VERSION 3.10)
project(Tuner)

# Указание компиляторов для кросс-компиляции
SET(CMAKE_SYSTEM_NAME Linux)
SET(CMAKE_SYSTEM_VERSION 1)
SET(CMAKE_C_COMPILER aarch64-linux-gnu-gcc)
SET(CMAKE_CXX_COMPILER aarch64-linux-gnu-g++)

# Установка стандарта C++
set(CMAKE_CXX_STANDARD 17)

# Путь к сгенерированным и новым заголовочным файлам
set(GENERATED_AIDL_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src/include/aidl)
set(HARDWARE_TV_TUNER_DIR_1_0 ${CMAKE_CURRENT_SOURCE_DIR}/src/include/android/hardware/tv/tuner/1.0)
set(HARDWARE_TV_TUNER_DIR_1_1 ${CMAKE_CURRENT_SOURCE_DIR}/src/include/android/hardware/tv/tuner/1.1)

# Добавление путей для include
include_directories(src src/include src/tuner ${GENERATED_AIDL_DIR} ${HARDWARE_TV_TUNER_DIR_1_0} ${HARDWARE_TV_TUNER_DIR_1_1})

# Список исходных файлов
file(GLOB_RECURSE tuner_sources src/tuner/*.cpp)

# Добавление сгенерированных файлов в компиляцию
file(GLOB_RECURSE GENERATED_AIDL_HEADERS ${GENERATED_AIDL_DIR}/*.h)
add_library(Tuner ${tuner_sources} ${GENERATED_AIDL_HEADERS})

# Указание флагов компиляции (пример)
target_compile_options(Tuner PRIVATE -Wall -Wextra -D__LINUX__ -D__UBUNTU__ -march=armv8-a)

# Исполняемый файл
add_executable(TunerExec src/Tuner.cpp src/Demux.cpp src/Frontend.cpp src/Descrambler.cpp src/Lnb.cpp src/Filter.cpp src/Dvr.cpp src/TimeFilter.cpp src/service.cpp ${tuner_sources})
target_link_libraries(TunerExec Tuner)
