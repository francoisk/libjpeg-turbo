/* As per upstream/example.txt. Required for sizeof and FILE used in the
 * library headers.
 */
#include <stdio.h>

#include <jpeglib.h>

int
main ()
{
  struct jpeg_compress_struct cinfo;
  struct jpeg_error_mgr jerr;
  cinfo.err = jpeg_std_error(&jerr);
  jpeg_create_compress(&cinfo);
  jpeg_destroy_compress(&cinfo);
  return 0;
}
