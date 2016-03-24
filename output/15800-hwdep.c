/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/hwdep.c
static int snd_hwdep_control_ioctl(snd_card_t * card, snd_ctl_file_t * control,
{
get_user(device, (int __user *)arg))
get_user(device, &info->device))
}
