package(default_visibility = ["//visibility:public"])

load("//cpp:rules.bzl", "cc_proto_library")

filegroup(
    name = "protos",
    srcs = ["loginmanager.proto"],
)

cc_proto_library(
    name = "loginProto",
    protos = [":protos"],
    verbose = 0,
    with_grpc = True,
)
