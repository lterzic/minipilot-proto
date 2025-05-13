cmake_minimum_required(VERSION 3.13)
project(minipilot-proto VERSION 1.0)

# Set protobuf options
# Building protoc is not necessary since the prebuilt
# binary is part of the repo (lib/protoc)
set(protobuf_INSTALL                    OFF)
set(protobuf_BUILD_TESTS                OFF)
set(protobuf_BUILD_CONFORMANCE          OFF)
set(protobuf_BUILD_EXAMPLES             OFF)
set(protobuf_BUILD_PROTOBUF_BINARIES    ON)
set(protobuf_BUILD_PROTOC_BINARIES      OFF)
set(protobuf_BUILD_LIBPROTOC            OFF)
set(protobuf_BUILD_LIBUPB               OFF)
set(protobuf_DISABLE_RTTI               OFF)
set(protobuf_TEST_XML_OUTDIR            OFF)
set(protobuf_ALLOW_CCACHE               OFF)

# Add the protobuf library
add_subdirectory("lib/protobuf")

# Build the test if working specifically
# on this project
if (PROJECT_IS_TOP_LEVEL)
    add_subdirectory("test")
endif()