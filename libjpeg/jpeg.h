#pragma once

#include <stdio.h>

#include <libjpeg/export.h>

/* Print a greeting for the specified name into the specified
 * stream. On success, return the number of characters printed.
 * On failure, set errno and return a negative value.
 */
LIBJPEG_SYMEXPORT int
say_hello (FILE *, const char *name);
