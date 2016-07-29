/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/arch/cris/arch-v32/drivers/cryptocop.c
static int cryptocop_ioctl_process(struct inode *inode, struct file *filp, unsigned int cmd, unsigned long arg)
{
copy_from_user(&oper, crp_oper, sizeof(struct strcop_crypto_op))) {
copy_from_user\n"));
get_user_pages(current,
get_user_pages indata\n"));
get_user_pages(current,
get_user_pages outdata\n"));
}
static int cryptocop_ioctl_create_session(struct inode *inode, struct file *filp, unsigned int cmd, unsigned long arg)
{
copy_from_user(&sop, sess_op, sizeof(struct strcop_session_op));
default:
copy_from_user(ti_cipher.key, sop.key, sop.keylen/8);
}
