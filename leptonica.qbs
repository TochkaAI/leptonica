import qbs
import qbs.File

Product {
    name: "Leptonica"
    targetName: "leptonica"

    type: "staticlibrary"
    Depends { name: "cpp" }

    cpp.defines: project.cppDefines.concat([
        "HAVE_CONFIG_H",
        "HAVE_LIBJPEG=1",
        "HAVE_LIBPNG=1",
        "HAVE_LIBTIFF=1",
        "HAVE_LIBZ=1",
    ])
    cpp.cFlags: [
        "-Wall",
        "-Wextra",
        "-Wno-sign-compare",
        "-Wno-unused-variable",
        "-Wno-unused-parameter",
        "-Wno-unused-but-set-variable",
        "-Wno-unused-function",
    ]
    cpp.includePaths: [
        "config",
    ]

    files: [
        "config/*.h",
        "src/*.c",
        "src/*.h",
    ]
    Export {
        Depends { name: "cpp" }
        cpp.systemIncludePaths: ["src"]
    }
}
