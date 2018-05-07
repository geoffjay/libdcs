/*
 * Copyright © the libdcs contributors. All rights reserved.
 *
 * This file is part of libdcs, distributed under the GNU LGPL v3.
 * For full terms see the included LICENSE file.
 */

#ifndef __DCS_OBJECT_H__
#define __DCS_OBJECT_H__

#include "common.h"

DCS_BEGIN_DECLS

/** Base object for inheritance */
typedef struct DcsObject {
    char *uuid;     /**< Random UUID for object */
} DcsObject;

/*! \brief Function prototype for 'free'
 *
 * Valid function prototype for 'free' method
 *
 * \param p Pointer to free
 */
typedef void (*object_free_func)(void *p);

/** Make a new base object */
_dcs_public_ DcsObject * dcs_object_new(void)
    __attribute__((warn_unused_result));

/** Set the object UUID value */
_dcs_public_ void dcs_object_set_uuid(DcsObject *object, const char *uuid);

/** Get the object UUID value */
_dcs_public_ char * dcs_object_get_uuid(DcsObject *object)
     __attribute__((warn_unused_result));

DCS_END_DECLS

#endif /* __DCS_OBJECT_H__ */
