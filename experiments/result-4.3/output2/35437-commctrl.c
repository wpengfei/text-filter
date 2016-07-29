/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/scsi/aacraid/commctrl.c
static int ioctl_send_fib(struct aac_dev * dev, void __user *arg)
{
copy_from_user((void *)kfib, arg, sizeof(struct aac_fibhdr))) {
copy_from_user(kfib, arg, size)) {
}
static int aac_send_raw_srb(struct aac_dev* dev, void __user * arg)
{
default:
copy_from_user(p,sg_user[i],upsg->sg[i].count)){
copy_from_user(p,sg_user[i],upsg->sg[i].count)){
copy_from_user(p,sg_user[i],usg->sg[i].count)){
copy_from_user(p, sg_user[i],
}
