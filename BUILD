cc_binary(
    name = "main",
    srcs = ["main.c"],
    deps = [":sum"],
)

cc_library(
    name = "sum",
    srcs = ["sum.c"],
    hdrs = ["library.h"],
    deps = [],
)

cc_test(
    name = "sum_test",
    srcs = ["sum_test.cc"],
    copts = ["-Iexternal/gtest/include"],
    linkstatic = 1,
    deps = [
        ":sum",
        "@gtest//:main",
    ],
)
