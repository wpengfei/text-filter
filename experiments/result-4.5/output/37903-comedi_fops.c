/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/staging/comedi/comedi_fops.c
static int do_insnlist_ioctl(struct comedi_device *dev,
{
copy_from_user(&insnlist, arg, sizeof(insnlist)))
copy_from_user(insns, insnlist.insns,
copy_from_user failed\n");
copy_from_user(data, insns[i].data,
copy_from_user failed\n");
}
static int do_insn_ioctl(struct comedi_device *dev,
{
copy_from_user(&insn, arg, sizeof(insn))) {
copy_from_user(data,
}
static ssize_t comedi_write(struct file *file, const char __user *buf,
{
copy_from_user(async->prealloc_buf + wp, buf, n1);
copy_from_user(async->prealloc_buf, buf + n1, n2);
}
