/*
 * Copyright © the libdcs contributors. All rights reserved.
 *
 * This file is part of libdcs, distributed under the GNU LGPL v3.
 * For full terms see the included LICENSE file.
 */

#pragma once

#include "common.h"

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

/*! \brief Create DcsObject
 *
 * Create a new DcsObject
 *
 * \return DcsObject a newly allocated DcsObject
 */
_dcs_public_ DcsObject * dcs_object_new(void)
    __attribute__((warn_unused_result));

/*! \brief Set UUID
 *
 * Assign a UUID to the object
 *
 * \param object Object to assign UUID to
 * \param uuid Value to use for the UUID
 */
_dcs_public_ void dcs_object_set_uuid(DcsObject *object, const char *uuid);

/*! \brief Get UUID
 *
 * Retrieve the UUID value
 *
 * \param object Object to return the UUID of
 * \return char * UUID string, NULL if not set
 */
_dcs_public_ char * dcs_object_get_uuid(DcsObject *object)
     __attribute__((warn_unused_result));
