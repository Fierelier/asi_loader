An experimental and small ASI loader for Windows games.

Currently implements the following DLLs:
- d3d8.dll
- d3d9.dll
- ddraw.dll
- dinput8.dll
- opengl32.dll

Set which DLL you want when building, example: DLL=d3d9

If a file with the same name of the DLL but with a .con extension is
created (like dinput8.con), a console will be attached to the process
on startup. This can be useful for debugging.

If you place a <name>Hooked.dll next to loader's (like
dinput8Hooked.dll), it will be chainloaded.

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
