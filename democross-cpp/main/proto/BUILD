package(default_visibility = ["//visibility:public"])

load("//cpp:rules.bzl", "cc_proto_library")

filegroup(
    name = "protos",
    srcs = [
        "common.proto",
    ],
)

cc_proto_library(
    name = "cpp",
    protos = [":protos"],
)


# This conflicts with outputs from other rules here but demonstrates
# how to generate multiple language outputs simultaneously.
#
# proto_compile(
#     name = "pluriproto",
#     protos = [":protos"],
#     langs = [
#         "//ruby",
#         "//java",
#         "//java:nano",
#         "//python",
#         "//cpp",
#         "//objc",
#         "//closure",
#         "//csharp",
#         "//go",
#         "//node",
#     ],
#     verbose = 2,
#     with_grpc = True,
# )
