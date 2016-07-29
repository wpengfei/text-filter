/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/core/seq/seq_compat.c
static int snd_seq_call_port_info_ioctl(struct snd_seq_client *client, unsigned int cmd,
{
get_user(data->flags, &data32->flags) ||
get_user(data->time_queue, &data32->time_queue))
}
