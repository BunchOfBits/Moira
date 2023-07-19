// -----------------------------------------------------------------------------
// This file is part of Moira - A Motorola 68k emulator
//
// Copyright (C) Dirk W. Hoffmann. www.dirkwhoffmann.de
// Published under the terms of the MIT License
// -----------------------------------------------------------------------------

#pragma once

#include "MoiraTypes.h"
#include "StrWriter.h"

namespace moira {

struct Float80 {

    softfloat::floatx80 raw;
};

class FPU {

    Float80 fpr[8];
    u32 fpiar;
    u32 fpsr;
    u32 fpcr;
};

}
