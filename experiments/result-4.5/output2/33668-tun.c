/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/net/tun.c
static long __tun_chr_ioctl(struct file *file, unsigned int cmd,
{
copy_from_user(&ifr, argp, ifreq_len))
copy_from_user(&ifindex, argp, sizeof(ifindex)))
case TUNSETSNDBUF:
copy_from_user(&sndbuf, argp, sizeof(sndbuf))) {
case TUNSETVNETHDRSZ:
copy_from_user(&vnet_hdr_sz, argp, sizeof(vnet_hdr_sz))) {
case TUNATTACHFILTER:
copy_from_user(&tun->fprog, argp, sizeof(tun->fprog)))
}
