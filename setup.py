import os, sys

from distutils.core import setup
from distutils.command import build_ext

from distutils.core import Extension

ext_name = "ISOBMFF"

py_ver = sys.version_info[:2]

include_dirs = [
    "./include",
    "./src/ISOBMFF/ISOBMFF/include",
    "./src/ISOBMFF/Submodules/PIMPL/PIMPL/include",
]
libraries = [
    "boost_python{}".format(py_ver[0]),
]

library_dirs = []

sources = []

# python-ISOBMFF sources
for dirname, dirs, filenames in os.walk("./src"):
    for filename in sorted(filenames):
        sources.append(os.path.join(dirname, filename))
    break

# ISOBMFF sources
for dirname, dirs, filenames in os.walk("./src/ISOBMFF/ISOBMFF/source"):
    for filename in sorted(filenames):
        sources.append(os.path.join(dirname, filename))

extras = [
    "-std=c++14",
]

ext = Extension(name="{0}.__{0}".format(ext_name),
                include_dirs=include_dirs,
                libraries=libraries,
                library_dirs=library_dirs,
                sources=sources,
                extra_compile_args=extras)


setup(name=ext_name,
      packages=[ext_name],
      ext_modules=[ext])
