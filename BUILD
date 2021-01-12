cc_library(
    name = "static_lib",
    srcs = ["lib.cc"],
    hdrs = ["lib.hpp"]
)

cc_binary(
    name = "libshared.dylib",
    srcs = ["lib.cc", "lib.hpp"],
    linkstatic = True,
    linkshared = True,
    copts = ["-fvisibility=hidden"],
)

cc_import(
    name = "shared_lib",
    hdrs = ["lib.hpp"],
    shared_library = "libshared.dylib",
)

cc_library(
    name = "consumer",
    hdrs = ["consumer.hpp"],
)

cc_binary(
    name = "static_usage",
    srcs = ["usage.cc"],
    deps = [":static_lib", ":consumer"],
)

cc_binary(
    name = "shared_usage",
    srcs = ["usage.cc"],
    deps = [":shared_lib", ":consumer"],
)
