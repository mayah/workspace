cc_binary(
    name = "blocking_queue",
    srcs = [
        "blocking_queue.cc",
    ],
    deps = [
        "//base/containers",
    ],
)

cc_binary(
    name = "copy_file",
    srcs = [
        "copy_file.cc",
    ],
    deps = [
        "//base/file",
    ],
)

cc_binary(
    name = "read_file",
    srcs = [
        "read_file.cc",
    ],
    deps = [
        "//base/file",
    ],
)

cc_binary(
    name = "write_file",
    srcs = [
        "write_file.cc",
    ],
    deps = [
        "//base/file",
    ],
)

cc_binary(
    name = "rm_tree",
    srcs = [
        "rm_tree.cc",
    ],
    deps = [
        "//base/file",
        "//base/strings",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "cwd",
    srcs = [
        "cwd.cc",
    ],
    deps = [
        "//base/file",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "current_time",
    srcs = [
        "current_time.cc",
    ],
    deps = [
        "//base/time",
    ],
)

cc_binary(
    name = "scoped_temp_dir",
    srcs = [
        "scoped_temp_dir.cc",
    ],
    deps = [
        "//base/file",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "scoped_temp_file",
    srcs = [
        "scoped_temp_file.cc",
    ],
    deps = [
        "//base/file",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "unix_domain_socket_client",
    srcs = [
        "unix_domain_socket_client.cc",
    ],
    deps = [
        "//base/time",
        "//net/socket",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "unix_domain_socket_server",
    srcs = [
        "unix_domain_socket_server.cc",
    ],
    deps = [
        "//net/socket",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "unix_domain_socket_experimental",
    srcs = [
        "unix_domain_socket_experimental.cc",
    ],
    linkopts = [
        "-pthread",
    ],
    deps = [
        "//base/concurrent",
        "//base/strings",
        "//net/socket",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "tcp_socket_client",
    srcs = [
        "tcp_socket_client.cc",
    ],
    deps = [
        "//base/time",
        "//net/socket",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "tcp_socket_server",
    srcs = [
        "tcp_socket_server.cc",
    ],
    linkopts = [
        "-pthread",
    ],
    deps = [
        "//net/socket",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "deps_parser",
    srcs = [
        "deps_parser.cc",
    ],
    deps = [
        "//base/file",
        "//base/strings",
        "//third_party/glog",
    ],
)

cc_binary(
    name = "tree_walk",
    srcs = [
        "tree_walk.cc",
    ],
)
