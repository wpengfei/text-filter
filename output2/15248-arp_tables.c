/Users/wpf/Desktop/log/test/linux-2.6.9/net/ipv4/netfilter/arp_tables.c

static int do_add_counters(void __user *user, unsigned int len)
{
copy_from_user(&tmp, user, sizeof(tmp)) != 0)
copy_from_user(paddc, user, len) != 0) {
}
static int do_arpt_get_ctl(struct sock *sk, int cmd, void __user *user, int *len)
{
copy_from_user(name, user, sizeof(name)) != 0) {
copy_from_user(&get, user, sizeof(get)) != 0) {
}
