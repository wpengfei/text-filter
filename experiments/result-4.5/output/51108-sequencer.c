/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/oss/sequencer.c
int sequencer_write(int dev, struct file *file, const char __user *buf, int count)
{
copy_from_user((char *) event_rec, &(buf)[p], 4))
copy_from_user((char *)&event_rec[4],
}
