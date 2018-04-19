/*
 * Copyright © the libdcs contributors. All rights reserved.
 *
 * This file is part of libdcs, distributed under the GNU LGPL v3.
 * For full terms see the included LICENSE file.
 */

#include "object.h"

static void
dcs_object_init(DcsObject *object)
{
    /* FIXME: This is just for early testing */
    dcs_object_set_uuid(object, "obj0");
}

DcsObject *
dcs_object_new()
{
    DcsObject *object = (DcsObject *)calloc(1, sizeof(DcsObject));
    dcs_object_init(object);
    return object;
}

void
dcs_object_free(DcsObject *object)
{
    assert(object != NULL);
    free(object);
}

void
dcs_object_set_uuid(DcsObject *object, const char *uuid)
{
    if (!object) {
        return;
    }

    if (object->uuid != NULL) {
        free(object->uuid);
    }

    int len = strlen(uuid);
    object->uuid = (char *)calloc(len, sizeof(char));
    strlcpy(object->uuid, uuid, len);
}

char *
dcs_object_get_uuid(DcsObject *object)
{
    if (!object) {
        return NULL;
    }
    return object->uuid;
}
