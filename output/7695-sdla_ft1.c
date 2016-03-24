/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/wan/sdla_ft1.c
static int wpft1_exec(sdla_t *card, void *u_cmd, void *u_data)
{
copy_from_user((void*)&mbox->command, u_cmd, sizeof(ft1_exec_cmd_t))){
copy_from_user((void*)&mbox->data, u_data, len)){
}
