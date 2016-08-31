#pragma once

#define _bit(x, n) (((x >> n) & 1) != 0)
#define _set(b, n) ((b ? 1 : 0) << n)
