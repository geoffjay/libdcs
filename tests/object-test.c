/*
 * Copyright © the libdcs contributors. All rights reserved.
 *
 * This file is part of libdcs, distributed under the GNU LGPL v3.
 * For full terms see the included LICENSE file.
 */

#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <cmocka.h>

#include "dcs.h"
#include "util.h"

static void test_object_uuid(void **state)
{
    DcsObject *object = dcs_object_new();
    dcs_object_set_uuid(object, "test");

    (void) state; /* unused */

    assert_int_equal(streq(dcs_object_get_uuid(object), "test"), 0);
}

int main(int argc, char *argv[])
{
    const struct CMUnitTest tests[] = {
        cmocka_unit_test(test_object_uuid),
    };

    return cmocka_run_group_tests(tests, NULL, NULL);
}
