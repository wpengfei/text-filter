/Users/wpf/Desktop/log/test/linux-2.6.9/net/wanrouter/af_wanpipe.c
static int set_ioctl_cmd (struct sock *sk, void *arg)
{
get_user(mbox_ptr->cmd.qdm, &usr_data->hdr.qdm)))
get_user(mbox_ptr->cmd.cause, &usr_data->hdr.cause)))
get_user(mbox_ptr->cmd.diagn, &usr_data->hdr.diagn)))
get_user(mbox_ptr->cmd.length, &usr_data->hdr.length)))
get_user(mbox_ptr->cmd.result, &usr_data->hdr.result)))
copy_from_user(mbox_ptr->data, usr_data->data, mbox_ptr->cmd.length)){
}
