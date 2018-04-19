#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <dcs/dcs.h>

int main(int argc, char *argv[])
{
    const char *uuid = "027466e5-f385-4d02-971e-c1856a4afd51";
    DcsObject *object = dcs_object_new();

    dcs_object_set_uuid(object, uuid);
    printf("UUID: %s\n", dcs_object_get_uuid(object));

    return 0;
}
