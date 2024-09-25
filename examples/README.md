/workspaces/build_release/bin/shermes -typed -exec fib.ts

/workspaces/build_release/bin/shermes -typed -emit-c fib.ts

Edit generated fib.c to export _1_fib by adding `__attribute__((used, visibility("default")))` and removing `static`

emcc -I../include/ -I/workspaces/build_release/lib/config -sERROR_ON_UNDEFINED_SYMBOLS=0 -Oz fib.c -o fib.js

```
emcc -I/workspaces/hermes/include/ -I/workspaces/build_release/lib/config -I/workspaces/hermes/external/llvh/include/ -I/workspaces/build_release/external/llvh/include/ -I/workspaces/hermes/public/ -I/workspaces/hermes/external/llvh/gen/include/ -I/workspaces/hermes/API/ -I/workspaces/hermes/API/jsi/ -I/workspaces/hermes/external/ -Oz fib.c /workspaces/hermes/lib/VM/*.cpp /workspaces/hermes/lib/VM/gcs/MallocGC.cpp /workspaces/hermes/lib/Support/*.cpp /workspaces/hermes/tools/shermes/ConsoleBindings.cpp /workspaces/hermes/lib/Platform/*.cpp /workspaces/hermes/public/hermes/Public/*.cpp /workspaces/hermes/external/llvh/lib/Support/raw_ostream.cpp /workspaces/hermes/external/llvh/lib/Support/SmallVector.cpp /workspaces/hermes/external/llvh/lib/Support/Debug.cpp /workspaces/hermes/lib/VM/detail/IdentifierHashTable.cpp /workspaces/hermes/external/llvh/lib/Support/ErrorHandling.cpp /workspaces/hermes/external/dtoa/dtoa.c /workspaces/hermes/API/hermes/*.cpp /workspaces/hermes/external/llvh/lib/Support/CommandLine.cpp /workspaces/hermes/lib/VM/gcs/FillerCell.cpp /workspaces/hermes/lib/BCGen/*.cpp  -o fib.js -DHERMESVM_GC_MALLOC -DIEEE_8087 -DLong=int -DNO_HEX_FP -DNO_INFNAN_CHECK -DMULTIPLE_THREADS
```

CC=emcc /workspaces/build_release/bin/shermes -typed -c fib.ts -o fib.wasm