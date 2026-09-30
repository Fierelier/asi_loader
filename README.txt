A small ASI loader for Windows games.

Builds one DLL that exports the union of every supported system DLL:
- d3d8.dll
- d3d9.dll
- ddraw.dll
- dinput8.dll
- opengl32.dll

Rename the resulting DLL into what the game uses.

---

Additional functionality:

* If you place a <name>Hooked.dll next to loader's (like dinput8Hooked.dll),
it will be chainloaded instead of the system DLL.

* If you place a file with the same name as the DLL with a .con extension next
to it (like dinput8.con) a console will be attached to the process. In it, you
will see output of asi_loader, and anything else that might print.

---

How to build:

You need a UNIX shell like provided by busybox-w32, and compiler for Windows
executables, like mingw-lite or tcc, or just plain MinGW, if you're
cross-compiling from Linux.

  ./build.sh          # 32-bit, UNICODE
  ./build-ansi.sh     # 32-bit, WIN9X-friendly (ANSI)
  ./build-x64.sh      # 64-bit, UNICODE

Output is bin/asi_loader.dll.

---

How it works:

The loader can't simply run inside DllMain, since the loader lock would
cause a deadlock on LoadLibrary. So we defer out payload to happen in
the caller's thread by making a trampoline. This is more complicated,
but superior to using a separate thread, as it guarantees our code will
run as soon as possible, with no race conditions.

There is two methods under which this can happen...

Static / implicit load (lpReserved != NULL):

Since the executable hasn't reached its entry point yet, we can patch it
directly, to run our payload.

Dynamic load (lpReserved == NULL):

When our library is loaded dynamically, the approach is different. The
entry point has already been executed, so we can't patch it anymore.
Instead, we follow the stack frame to find a viable return address,
ignoring system DLLs (detected by path), and we patch that instead.
