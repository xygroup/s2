# Defines a Bazel macro that instantiates a native cc_test rule for an S2 test.
def s2test(name, deps=[], size="small"):
    native.cc_test(
        name=name,
        srcs=["%s.cc" % (name)],
        copts = [
            "-stdlib=libc++",
            "-std=c++11",
            "-Iexternal/gtest/include",
            "-DS2_TEST_DEGENERACIES",
        ],
        deps = ["@gtest//:gtest_main", ":test"] + deps,
        size = size,
    )