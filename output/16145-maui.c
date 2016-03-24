/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/maui.c
static int maui_load_patch(int dev, int format, const char __user *addr,
{
copy_from_user(&((char *) &header)[offs], &(addr)[offs], hdr_size - offs))
get_user(*(unsigned char *) &data, (unsigned char __user *) &((addr)[hdr_size + i])))
}
