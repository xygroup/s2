cc_library(
    name = "s2",
    srcs = [
        "base/logging.cc",
        "strings/split.cc",
        "strings/stringprintf.cc",
        "strings/strtoint.cc",
        "strings/strutil.cc",
        # "util/math/exactfloat/exactfloat.cc",
        "util/math/mathlimits.cc",
        "util/math/mathutil.cc",
        "s1angle.cc",
        "s1interval.cc",
        "s2.cc",
        "s2cap.cc",
        "s2cell.cc",
        "s2cellid.cc",
        "s2cellunion.cc",
        "s2edgeindex.cc",
        "s2edgeutil.cc",
        "s2latlng.cc",
        "s2latlngrect.cc",
        "s2loop.cc",
        "s2pointregion.cc",
        "s2polygon.cc",
        "s2polygonbuilder.cc",
        "s2polyline.cc",
        "s2r2rect.cc",
        "s2region.cc",
        "s2regioncoverer.cc",
        "s2regionintersection.cc",
        "s2regionunion.cc",
    ],
    hdrs = glob(["*.h", "base/*.h", "strings/*.h", "util/math/*.h"]) + ["util/hash/hash_jenkins_lookup2.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "test",
    srcs = ["s2testing.h", "s2testing.cc"],
    deps = [":s2"],
)

load("s2test", "s2test")

s2test("r1interval_test")
s2test("s1angle_test")
s2test("s1interval_test")
s2test("s2_test")
s2test("s2cap_test")
s2test("s2cellid_test")
s2test("s2cellunion_test")
s2test("s2edgeindex_test")
s2test("s2edgeutil_test")
s2test("s2latlng_test")
s2test("s2latlngrect_test")
s2test("s2loop_test")
s2test("s2pointregion_test")
s2test("s2polygon_test")
s2test("s2polygonbuilder_test")
s2test("s2polyline_test")
s2test("s2r2rect_test")
s2test("s2regioncoverer_test")
s2test("s2regionunion_test")
