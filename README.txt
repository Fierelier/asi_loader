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

The DLL looks at the stack frame of the main executable, and puts a
trampoline after its current execution pointer. Result: The ASI loader's
payload is executed right after the game's LoadLibrary call, inside the
main thread. The instructions are restored to their default, and then
the ASIs are loaded. After all that, we jump back into the game.
