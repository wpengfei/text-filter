/Users/wpf/Desktop/log/test/linux-2.6.9/net/xfrm/xfrm_user.c
static struct xfrm_policy *xfrm_policy_construct(struct xfrm_userpolicy_info *p, struct rtattr **xfrma, int *errp)
{
copy_from_user_policy(xp, p);
copy_from_user_tmpl(xp, xfrma);
}
