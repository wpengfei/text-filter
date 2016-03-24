/Users/wpf/Desktop/log/test/linux-2.6.9/sound/oss/sequencer.c
int sequencer_write(int dev, struct file *file, const char __user *buf, int count)
{
copy_from_user((char *) event_rec, &(buf)[p], 4))
copy_from_user((char *)&event_rec[4],
}
int sequencer_ioctl(int dev, struct file *file, unsigned int cmd, void __user *arg)
{
get_user(pending_timer, p))
get_user(midi_dev, p))
get_user(val, p))
get_user(dev, p))
get_user(dev, p))
get_user(dev, p))
get_user(dev, &((struct synth_info __user *)arg)->device))
get_user(dev, &((struct synth_info __user *)arg)->device))
copy_from_user(&event_rec, arg, sizeof(event_rec)))
get_user(dev, &((struct midi_info __user *)arg)->device))
get_user(val, p))
get_user(val, p))
}
