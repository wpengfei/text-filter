/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/pcm.c
static int snd_pcm_control_ioctl(snd_card_t * card,
{
get_user(device, (int __user *)arg))
get_user(device, &info->device))
get_user(stream, &info->stream))
get_user(subdevice, &info->subdevice))
get_user(val, (int __user *)arg))
}
