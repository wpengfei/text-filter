/Users/wpf/Desktop/log/test/linux-2.6.9/include/net/sock.h
static inline int skb_copy_to_page(struct sock *sk, char __user *from,
{
copy_from_user(from,
copy_from_user(page_address(page) + off, from, copy))
}
