/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/char/ipmi/ipmi_devintf.c
static int handle_send_req(ipmi_user_t     user,
{
copy_from_user(&addr, req->addr, req->addr_len))
copy_from_user(msg.data,
}
static long get_compat_ipmi_msg(struct ipmi_msg *p64,
{
get_user(p64->netfn, &p32->netfn) ||
get_user(p64->cmd, &p32->cmd) ||
get_user(p64->data_len, &p32->data_len) ||
get_user(tmp, &p32->data))
}
static long get_compat_ipmi_req(struct ipmi_req *p64,
{
get_user(tmp, &p32->addr) ||
get_user(p64->addr_len, &p32->addr_len) ||
get_user(p64->msgid, &p32->msgid) ||
}
static long get_compat_ipmi_req_settime(struct ipmi_req_settime *p64,
{
get_user(p64->retries, &p32->retries) ||
get_user(p64->retry_time_ms, &p32->retry_time_ms))
}
static long get_compat_ipmi_recv(struct ipmi_recv *p64,
{
get_user(p64->recv_type, &p32->recv_type) ||
get_user(tmp, &p32->addr) ||
get_user(p64->addr_len, &p32->addr_len) ||
get_user(p64->msgid, &p32->msgid) ||
}
