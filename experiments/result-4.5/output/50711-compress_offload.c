/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/core/compress_offload.c
static int snd_compr_write_data(struct snd_compr_stream *stream,
{
copy_from_user(dstn, buf, count))
copy_from_user(dstn, buf, copy))
copy_from_user(runtime->buffer, buf + copy, count - copy))
}
