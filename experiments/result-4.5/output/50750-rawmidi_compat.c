/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/core/rawmidi_compat.c
static int snd_rawmidi_ioctl_params_compat(struct snd_rawmidi_file *rfile,
{
get_user(params.stream, &src->stream) ||
get_user(params.buffer_size, &src->buffer_size) ||
get_user(params.avail_min, &src->avail_min) ||
get_user(val, &src->no_active_sensing))
}
