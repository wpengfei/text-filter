/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/telephony/ixj.c
static int ixj_build_cadence(IXJ *j, IXJ_CADENCE __user * cp)
{
copy_from_user(&lcp->elements_used,
copy_from_user(&lcp->termination,
get_user(cep, &cp->ce))
copy_from_user(lcep, cep, sizeof(IXJ_CADENCE_ELEMENT) * lcp->elements_used))
}
static int ixj_ioctl(struct inode *inode, struct file *file_p, unsigned int cmd, unsigned long arg)
{
copy_from_user(&j->cid_send, argp, sizeof(PHONE_CID))) {
copy_from_user(&j->cid_send, argp, sizeof(PHONE_CID))) {
copy_from_user(&pd, argp, sizeof(pd))) {
copy_from_user(&cap, argp, sizeof(cap))) 
copy_from_user(&jf, argp, sizeof(jf))) 
copy_from_user(&jfr, argp, sizeof(jfr))) 
copy_from_user(&ti, argp, sizeof(ti)))
copy_from_user(&j->sigdef, argp, sizeof(IXJ_SIGDEF))) {
}
