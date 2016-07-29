/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/net/core/sock.c
int sock_setsockopt(struct socket *sock, int level, int optname,
{
get_user(val, (int __user *)optval))
case SO_LINGER:
copy_from_user(&ling, optval, sizeof(ling))) {
case SO_ATTACH_FILTER:
copy_from_user(&fprog, optval, sizeof(fprog)))
case SO_ATTACH_BPF:
copy_from_user(&ufd, optval, sizeof(ufd)))
case SO_ATTACH_REUSEPORT_CBPF:
copy_from_user(&fprog, optval, sizeof(fprog)))
case SO_ATTACH_REUSEPORT_EBPF:
copy_from_user(&ufd, optval, sizeof(ufd)))
}
