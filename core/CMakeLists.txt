file(GLOB_RECURSE BOOKER_CORE_SOURCES CONFIGURE_DEPENDS "src/*.cpp")
file(GLOB_RECURSE BOOKER_CORE_HEADERS CONFIGURE_DEPENDS "include/*.hpp")

add_library(${CORE_NAME} ${BOOKER_CORE_SOURCES} ${BOOKER_CORE_HEADERS})
add_library(booker::core ALIAS ${CORE_NAME})

target_include_directories(${CORE_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
target_compile_features(${CORE_NAME} PUBLIC cxx_std_17)
target_link_libraries(${CORE_NAME} PRIVATE poppler-cpp poppler ZLIB::ZLIB PNG::PNG JPEG::JPEG Freetype::Freetype Iconv::Iconv)

add_dependencies(${CORE_NAME} poppler-ext libjpeg-turbo-ext)

if(MSVC)
	target_compile_options(${CORE_NAME} PRIVATE /W4 /permissive-)
else()
	target_compile_options(${CORE_NAME} PRIVATE -Wall -Wextra -Wpedantic -Wconversion -Wshadow)
endif()

if(WIN32)
	target_compile_definitions(${CORE_NAME} PRIVATE NOMINMAX WIN32_LEAN_AND_MEAN)
endif()

set_target_properties(${CORE_NAME} PROPERTIES OUTPUT_NAME "${CORE_NAME}")