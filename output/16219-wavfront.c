/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/wavfront.c
static int
{
copy_from_user (&header, addr, sizeof(wavefront_patch_info) -
copy_from_user((unsigned char *) &header.hdr.s,
copy_from_user(&header.hdr.s, header.hdrptr,
copy_from_user(&header.hdr.a, header.hdrptr,
copy_from_user(&header.hdr.d, header.hdrptr,
copy_from_user(&header.hdr.p, header.hdrptr,
copy_from_user(&header.hdr.pr, header.hdrptr,
}
