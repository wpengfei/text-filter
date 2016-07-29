/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/net/xfrm/xfrm_user.c
static struct xfrm_policy *xfrm_policy_construct(struct net *net, struct xfrm_userpolicy_info *p, struct nlattr **attrs, int *errp)
{
copy_from_user_policy(xp, p);
copy_from_user_policy_type(&xp->type, attrs);
copy_from_user_tmpl(xp, attrs)))
copy_from_user_sec_ctx(xp, attrs);
}
static int xfrm_do_migrate(struct sk_buff *skb, struct nlmsghdr *nlh,
{
copy_from_user_policy_type(&type, attrs);
copy_from_user_migrate((struct xfrm_migrate *)m, kmp, attrs, &n);
}
