/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/scsi/aacraid/commctrl.c
static int ioctl_send_fib(struct aac_dev * dev, void __user *arg)
{
copy_from_user((void *)kfib, arg, sizeof(struct aac_fibhdr))) {
copy_from_user((void *) kfib, arg, le32_to_cpu(kfib->header.Size) + sizeof(struct aac_fibhdr))) {
}
int aac_send_raw_srb(struct aac_dev* dev, void __user * arg)
{
copy_from_user(&fibsize, &user_srb->count,sizeof(u32))){
copy_from_user(srbcmd, user_srb,fibsize)){
copy_from_user(p,sg_user[i],psg->sg[i].count)){
copy_from_user(p,sg_user[i],psg->sg[i].count)){
}
