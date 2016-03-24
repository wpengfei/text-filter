/Users/wpf/Desktop/log/test/linux-2.6.9/arch/sparc64/solaris/timod.c
static int timod_optmgmt(unsigned int fd, int flag, char __user *opt_buf, int opt_len, int do_ret)
{
copy_from_user(opt, opt_buf, sizeof(struct opthdr)) ||
copy_from_user(buf, opt_buf+sizeof(struct opthdr), opt->len)) {
}
int timod_putmsg(unsigned int fd, char __user *ctl_buf, int ctl_len,
{
get_user(ret, (int __user *)A(ctl_buf)))
copy_from_user(&req, ctl_buf, sizeof(req))) {
copy_from_user(buf, ctl_buf + req.ADDR_offset, req.ADDR_length)) {
copy_from_user(&req, ctl_buf, sizeof(req))) {
copy_from_user(buf, ctl_buf, ctl_len)) {
copy_from_user(&req, ctl_buf, sizeof(req)))
copy_from_user(&req, ctl_buf, sizeof(req))) {
get_user(c,ptr))
}
asmlinkage int solaris_getmsg(unsigned int fd, u32 arg1, u32 arg2, u32 arg3)
{
copy_from_user(&ctl,ctlptr,sizeof(struct strbuf)) || 
copy_from_user(&dat,datptr,sizeof(struct strbuf)) || 
get_user(flags,flgptr))
}
asmlinkage int solaris_putmsg(unsigned int fd, u32 arg1, u32 arg2, u32 arg3)
{
copy_from_user(&ctl,ctlptr,sizeof(ctl)))
copy_from_user(&dat,datptr,sizeof(dat)))
}
