//
// Copyright 2001 - 2003 Google, Inc.
//

#ifndef S2_BASE_BASICTYPES_H_
#define S2_BASE_BASICTYPES_H_

#include "s2/base/integral_types.h"
#include "s2/base/casts.h"
#include "s2/base/port.h"

// We *do* expect Hash<i> values to collide from time to time
// (although we obviously prefer them not to). Also
// note that there is an illegal hash value for each size hash.
typedef uint32 Hash32;
typedef uint16 Hash16;
typedef unsigned char Hash8;

const Hash32 kIllegalHash32 = static_cast<Hash32>(4294967295UL);    // 2^32-1
const Hash16 kIllegalHash16 = static_cast<Hash16>(65535U);          // 2^16-1
const Hash8  kIllegalHash8 = static_cast<Hash8>(255);               // 2^8-1

#endif  // S2_BASE_BASICTYPES_H_
