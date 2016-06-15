# Defines a Bazel macro that instantiates a native cc_test rule for an S2 test.
def s2test(name, deps=[], size="small"):
  native.cc_test(
      name=name,
      srcs=["%s.cc" % (name)],
      copts = ["-Iexternal/gtest/include"],
      deps = ["@gtest//:main", ":test"] + deps,
      size = size,
  )