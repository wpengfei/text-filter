/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/staging/comedi/comedi_fops.c
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
