cc_library(
    name = "hex",
    srcs = [
        "hex.cc",
    ],
    hdrs = [
        "hex.h",
    ],
    deps = [
        "//base/strings",
    ],
    visibility = [
        "//visibility:public",
    ]
)

cc_library(
    name = "base64",
    srcs = [
        "base64.cc"
    ],
    hdrs = [
        "base64.h",
    ],
    deps = [
        "//base/strings",
    ],
    visibility = [
        "//visibility:public",
    ],
)

cc_test(
    name = "hex_test",
    size = "small",
    srcs = [
        "hex_test.cc",
    ],
    deps = [
        ":hex",
        "//base",
        "//third_party/gtest",
        "//third_party/glog",
    ],
)

cc_test(
    name = "base64_test",
    size = "small",
    srcs = [
        "base64_test.cc",
    ],
    deps = [
        ":base64",
        "//base",
        "//third_party/gtest",
        "//third_party/glog",
    ],
)
