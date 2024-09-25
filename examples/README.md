/workspaces/build_release/bin/shermes -typed -exec fib.ts

/workspaces/build_release/bin/shermes -typed -emit-c fib.ts

Edit generated fib.c to export _1_fib by adding `__attribute__((used, visibility("default")))` and removing `static`

emcc -I../include/ -I/workspaces/build_release/lib/config -sERROR_ON_UNDEFINED_SYMBOLS=0 -Oz fib.c -o fib.js

emcc -I/workspaces/hermes/include/ -I/workspaces/build_release/lib/config -I/workspaces/hermes/external/llvh/include/ -I/workspaces/build_release/external/llvh/include/ -I/workspaces/hermes/public/ -I/workspaces/hermes/external/llvh/gen/include/ -I/workspaces/hermes/API/ -I/workspaces/hermes/API/jsi/ -Oz fib.c /workspaces/hermes/lib/VM/StaticH.cpp /workspaces/hermes/lib/VM/StaticHInit.cpp /workspaces/hermes/lib/VM/StaticHUnit.cpp -o fib.js -DHERMESVM_GC_MALLOC