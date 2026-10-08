// PKZLib shim, not part of ReXGlue. The SDK's rex/memory.h pulls in its whole memory system (arenas, mapped
// memory, guest xmemory); the vendored texture code only needs memory/utils.h from it (make_fourcc in xenos.h).
#pragma once

#include <rex/memory/utils.h>
