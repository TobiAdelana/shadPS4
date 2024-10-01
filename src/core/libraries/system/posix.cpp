// SPDX-FileCopyrightText: Copyright 2024 shadPS4 Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#include "core/libraries/system/posix.h"
#include "common/logging/log.h"
#include "core/libraries/libs.h"
#include <process.h>

namespace Libraries::Posix {

int PS4_SYSV_ABI internal_getpid() {
    return _getpid();
}

void Registerlibsceposix(Core::Loader::SymbolsResolver* sym) {

	LIB_FUNCTION("HoLVWNanBBc", "libScePosix", 1, "libkernel", 1, 1, internal_getpid);
}

} // namespace Libraries::Posix
