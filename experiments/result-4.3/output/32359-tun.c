/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/net/tun.c
static int update_filter(struct tap_filter *filter, void __user *arg)
{
copy_from_user(&uf, arg, sizeof(uf)))
copy_from_user(addr, arg + sizeof(uf), alen)) {
}
static long __tun_chr_ioctl(struct file *file, unsigned int cmd,
{
copy_from_user(&ifr, argp, ifreq_len))
copy_from_user(&ifindex, argp, sizeof(ifindex)))
case TUNSETSNDBUF:
copy_from_user(&sndbuf, argp, sizeof(sndbuf))) {
case TUNSETVNETHDRSZ:
copy_from_user(&vnet_hdr_sz, argp, sizeof(vnet_hdr_sz))) {
case TUNSETVNETLE:
get_user(le, (int __user *)argp)) {
case TUNATTACHFILTER:
copy_from_user(&tun->fprog, argp, sizeof(tun->fprog)))
}
