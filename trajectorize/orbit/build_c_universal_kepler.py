from trajectorize.setup_utils.c_parsing import (include_dir,
                                                read_and_cleanse_many_headers)
from cffi import FFI

ffi = FFI()


ffi.cdef(read_and_cleanse_many_headers(["orbit_math.h",
                                        "universal_kepler.h"]))

ffi.set_source("trajectorize.orbit._c_universal_kepler",
               '''
               #include "orbit_math.h"
               #include "universal_kepler.h"
               ''',
               sources=["trajectorize/orbit/universal_kepler.c",
                        "trajectorize/math_lib/orbit_math.c"],
               include_dirs=[include_dir])

if __name__ == "__main__":
    ffi.compile()
