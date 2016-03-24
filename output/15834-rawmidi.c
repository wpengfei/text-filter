/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/rawmidi.c
static int snd_rawmidi_info_select_user(snd_card_t *card,
{
get_user(info.device, &_info->device))
get_user(info.stream, &_info->stream))
get_user(info.subdevice, &_info->subdevice))
}
static inline int _snd_rawmidi_ioctl(struct inode *inode, struct file *file,
{
get_user(stream, &info->stream))
copy_from_user(&params, argp, sizeof(snd_rawmidi_params_t)))
copy_from_user(&status, argp, sizeof(snd_rawmidi_status_t)))
get_user(val, (long __user *) argp))
get_user(val, (long __user *) argp))
}
int snd_rawmidi_control_ioctl(snd_card_t * card, snd_ctl_file_t * control,
{
get_user(device, (int __user *)argp))
get_user(val, (int __user *)argp))
}
