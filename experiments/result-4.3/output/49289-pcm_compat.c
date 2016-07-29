/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/sound/core/pcm_compat.c
static int snd_pcm_ioctl_sw_params_compat(struct snd_pcm_substream *substream,
{
get_user(params.tstamp_mode, &src->tstamp_mode) ||
get_user(params.period_step, &src->period_step) ||
get_user(params.sleep_min, &src->sleep_min) ||
get_user(params.avail_min, &src->avail_min) ||
get_user(params.xfer_align, &src->xfer_align) ||
get_user(params.start_threshold, &src->start_threshold) ||
get_user(params.stop_threshold, &src->stop_threshold) ||
get_user(params.silence_threshold, &src->silence_threshold) ||
get_user(params.silence_size, &src->silence_size) ||
get_user(params.tstamp_type, &src->tstamp_type) ||
get_user(params.proto, &src->proto))
}
static int snd_pcm_ioctl_channel_info_compat(struct snd_pcm_substream *substream,
{
get_user(info.channel, &src->channel) ||
get_user(info.offset, &src->offset) ||
get_user(info.first, &src->first) ||
get_user(info.step, &src->step))
}
static int snd_pcm_ioctl_xferi_compat(struct snd_pcm_substream *substream,
{
get_user(buf, &data32->buf) ||
get_user(frames, &data32->frames))
}
static int snd_pcm_ioctl_xfern_compat(struct snd_pcm_substream *substream,
{
get_user(buf, &data32->bufs) ||
get_user(frames, &data32->frames))
get_user(ptr, bufptr)) {
}
static int snd_pcm_ioctl_sync_ptr_compat(struct snd_pcm_substream *substream,
{
get_user(sflags, &src->flags) ||
get_user(scontrol.appl_ptr, &src->c.control.appl_ptr) ||
get_user(scontrol.avail_min, &src->c.control.avail_min))
}
