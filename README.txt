An experimental and small ASI loader for Windows games, without
PE/IAT-patching.

Currently implements the following DLLs:
- dinput8.dll

This summons a thread which runs soon after DllMain. It obtains a lock,
which post-pones the original DLL's initialization function. The lock is
only released once all ASIs have been loaded.

NOTE:

Compared to other ASI loaders, this may have a race condition, since the
game's main thread can run other things not related to the main DLL's
initialization. This seems not to be a problem in my limited testing,
but it certainly could be (?), depending on the game and amount of ASIs.
