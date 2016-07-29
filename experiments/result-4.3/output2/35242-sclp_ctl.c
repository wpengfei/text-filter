/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/s390/char/sclp_ctl.c
static int sclp_ctl_ioctl_sccb(void __user *user_area)
{
copy_from_user(sccb, u64_to_uptr(ctl_sccb.sccb), sizeof(*sccb))) {
copy_from_user(sccb, u64_to_uptr(ctl_sccb.sccb), sccb->length)) {
}
