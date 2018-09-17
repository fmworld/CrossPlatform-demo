package(default_visibility = ["//visibility:public"])
cc_binary(
    name = "mongoTest",
    srcs = ["mongoTest.cpp"],
    deps = [":mongoDriver"],
    copts = ["-Imongo/include"]
)



cc_library(
    name = "mongoDriver",
    srcs = ["libbsoncxx.dylib","libmongocxx.dylib"],
    hdrs = glob(["include/**/*.hpp"]),
)