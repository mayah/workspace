cc_library(
    name = "file",
    srcs = [
        "file.cc",
        "path.cc",
        "scoped_fd.cc",
        "scoped_temp_dir.cc",
        "scoped_temp_file.cc",
    ],
    hdrs = [
        "file.h",
        "path.h",
        "scoped_fd.h",
        "scoped_temp_dir.h",
        "scoped_temp_file.h",
    ],
    visibility = [
        "//visibility:public",
    ],
    deps = [
        "//base",
        "//base/strings",
        "//third_party/glog",
    ],
)

cc_test(
    name = "path_test",
    size = "small",
    srcs = [
        "path_test.cc",
    ],
    deps = [
        ":file",
        "//third_party/glog",
        "//third_party/gtest",
    ],
)
