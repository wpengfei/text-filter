/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/awe_wave.c
static int
{
copy_from_user((char*)&hdr, addr + offset, AWE_VOICE_REC_SIZE))
copy_from_user(&rec->v, addr + offset, AWE_VOICE_INFO_SIZE)) {
}
static unsigned short
{
get_user(cc, (unsigned char __user *)(readbuf_addr + readbuf_offs + pos));
get_user(c, (unsigned short __user *)(readbuf_addr + readbuf_offs + pos * 2));
}
