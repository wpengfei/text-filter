/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/gus_wave.c
static int guswave_load_patch(int dev, int format, const char __user *addr,
{
copy_from_user(&((char *) &patch)[offs], &(addr)[offs],
get_user(*(unsigned char *) &data, (unsigned char __user *) &((addr)[sizeof_patch + i]));
copy_from_user(audio_devs[gus_devnum]->dmap_out->raw_buf,
}
static int gus_audio_ioctl(int dev, unsigned int cmd, void __user *arg)
{
get_user(val, (int __user*)arg))
get_user(val, (int __user *)arg))
get_user(val, (int __user *)arg))
get_user(val, (int __user *)arg))
}
