/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/message/fusion/mptctl.c
static int
{
copy_from_user(&karg, uarg, sizeof(struct mpt_ioctl_replace_fw))) {
copy_from_user(ioc->cached_fw, uarg->newImage, newFwSize)) {
}
static int
{
copy_from_user(mf, mfPtr, karg.dataSgeOffset * 4)) {
case of two SGE's - the data out (write) will always
copy_from_user(bufOut.kptr,
}
