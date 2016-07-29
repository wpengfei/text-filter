/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/isa/wavefront/wavefront_synth.c
static int
{
copy_from_user (header, addr, sizeof(wavefront_patch_info) -
case WF_ST_SAMPLE:  /* sample or sample_header, based on patch->size */
copy_from_user (&header->hdr.s, header->hdrptr,
case WF_ST_MULTISAMPLE:
copy_from_user (&header->hdr.s, header->hdrptr,
case WF_ST_ALIAS:
copy_from_user (&header->hdr.a, header->hdrptr,
case WF_ST_DRUM:
copy_from_user (&header->hdr.d, header->hdrptr,
case WF_ST_PATCH:
copy_from_user (&header->hdr.p, header->hdrptr,
case WF_ST_PROGRAM:
copy_from_user (&header->hdr.pr, header->hdrptr,
}
