/Users/wpf/Desktop/log/test/linux-2.6.9/include/linux/skbuff.h
static inline int skb_add_data(struct sk_buff *skb,
{
copy_from_user(from,
copy_from_user(skb_put(skb, copy), from, copy))
}
