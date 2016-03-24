/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/wan/sdla_ppp.c
static int wpp_exec(struct sdla *card, void *u_cmd, void *u_data)
{
copy_from_user((void*)&mbox->cmd, u_cmd, sizeof(ppp_cmd_t)))
copy_from_user((void*)&mbox->data, u_data, len))
}
