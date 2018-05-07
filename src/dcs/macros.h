/*
 * Copyright © the libdcs contributors. All rights reserved.
 *
 * This file is part of libdcs, distributed under the GNU LGPL v3.
 * For full terms see the included LICENSE file.
 */

#pragma once

#ifdef  __cplusplus
# define DCS_BEGIN_DECLS  extern "C" {
# define DCS_END_DECLS    }
#else
# define DCS_BEGIN_DECLS
# define DCS_END_DECLS
#endif

#define _GNU_SOURCE

#define _dcs_public_ __attribute__((visibility("default")))
