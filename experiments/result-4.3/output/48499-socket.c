/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/socket.c
static int copy_msghdr_from_user(struct msghdr *kmsg,
{
get_user(uaddr, &umsg->msg_name) ||
get_user(kmsg->msg_namelen, &umsg->msg_namelen) ||
get_user(uiov, &umsg->msg_iov) ||
get_user(nr_segs, &umsg->msg_iovlen) ||
get_user(kmsg->msg_control, &umsg->msg_control) ||
get_user(kmsg->msg_controllen, &umsg->msg_controllen) ||
get_user(kmsg->msg_flags, &umsg->msg_flags))
}
static const unsigned char nargs[21] = {
{
copy_from_user should be SMP safe. */
copy_from_user(a, args, len))
}
static int dev_ifconf(struct net *net, struct compat_ifconf __user *uifc32)
{
copy_from_user(&ifc32, uifc32, sizeof(struct compat_ifconf)))
copy_from_user(&ifc, uifc, sizeof(struct ifconf)))
}
static int ethtool_ioctl(struct net *net, struct compat_ifreq __user *ifr32)
{
get_user(data, &ifr32->ifr_ifru.ifru_data))
get_user(ethcmd, &compat_rxnfc->cmd))
case ETHTOOL_GRXCLSRLALL:
get_user(rule_cnt, &compat_rxnfc->rule_cnt))
case ETHTOOL_SRXCLSRLDEL:
get_user(actual_rule_cnt, &rxnfc->rule_cnt))
}
static int compat_ifr_data_ioctl(struct net *net, unsigned int cmd,
{
copy_from_user(&tmp_buf[0], &(u_ifreq32->ifr_ifrn.ifrn_name[0]),
get_user(data32, &u_ifreq32->ifr_ifru.ifru_data))
}
static int compat_sioc_ifmap(struct net *net, unsigned int cmd,
{
copy_from_user(&ifr, uifr32, sizeof(ifr.ifr_name));
get_user(ifr.ifr_map.mem_start, &uifmap32->mem_start);
get_user(ifr.ifr_map.mem_end, &uifmap32->mem_end);
get_user(ifr.ifr_map.base_addr, &uifmap32->base_addr);
get_user(ifr.ifr_map.irq, &uifmap32->irq);
get_user(ifr.ifr_map.dma, &uifmap32->dma);
get_user(ifr.ifr_map.port, &uifmap32->port);
}
static int routing_ioctl(struct net *net, struct socket *sock,
{
copy_from_user(&r6.rtmsg_dst, &(ur6->rtmsg_dst),
get_user(r6.rtmsg_type, &(ur6->rtmsg_type));
get_user(r6.rtmsg_dst_len, &(ur6->rtmsg_dst_len));
get_user(r6.rtmsg_src_len, &(ur6->rtmsg_src_len));
get_user(r6.rtmsg_metric, &(ur6->rtmsg_metric));
get_user(r6.rtmsg_info, &(ur6->rtmsg_info));
get_user(r6.rtmsg_flags, &(ur6->rtmsg_flags));
get_user(r6.rtmsg_ifindex, &(ur6->rtmsg_ifindex));
copy_from_user(&r4.rt_dst, &(ur4->rt_dst),
get_user(r4.rt_flags, &(ur4->rt_flags));
get_user(r4.rt_metric, &(ur4->rt_metric));
get_user(r4.rt_mtu, &(ur4->rt_mtu));
get_user(r4.rt_window, &(ur4->rt_window));
get_user(r4.rt_irtt, &(ur4->rt_irtt));
get_user(rtdev, &(ur4->rt_dev));
copy_from_user(devname, compat_ptr(rtdev), 15);
}
