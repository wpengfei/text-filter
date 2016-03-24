/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/rawmidi.c

static inline int _snd_rawmidi_ioctl(struct inode *inode, struct file *file,
{
copy_from_user(&params, argp, sizeof(snd_rawmidi_params_t)))
copy_from_user(&status, argp, sizeof(snd_rawmidi_status_t)))
get_user(val, (long __user *) argp))
get_user(val, (long __user *) argp))
}
