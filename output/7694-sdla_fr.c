/Users/wpf/Desktop/log/test/linux-2.6.9/drivers/net/wan/sdla_fr.c
static int wpf_exec (struct sdla* card, void* u_cmd, void* u_data)
{
copy_from_user((void*)&cmd, u_cmd, sizeof(cmd)))
copy_from_user((void*)&mbox->data, u_data, cmd.length))
}
