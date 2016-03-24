/Users/wpf/Desktop/log/test/linux-2.6.9/sound/core/pcm_native.c
static int snd_pcm_sync_ptr(snd_pcm_substream_t *substream, struct sndrv_pcm_sync_ptr __user *_sync_ptr)
{
get_user(sync_ptr.flags, (unsigned __user *)&(_sync_ptr->flags)))
copy_from_user(&sync_ptr.c.control, &(_sync_ptr->c.control), sizeof(struct sndrv_pcm_mmap_control)))
}
static int snd_pcm_playback_ioctl1(snd_pcm_substream_t *substream,
{
copy_from_user(&xferi, _xferi, sizeof(xferi)))
copy_from_user(&xfern, _xfern, sizeof(xfern)))
copy_from_user(bufs, xfern.bufs, sizeof(void *) * runtime->channels)) {
get_user(frames, _frames))
get_user(frames, _frames))
}
static int snd_pcm_capture_ioctl1(snd_pcm_substream_t *substream,
{
copy_from_user(&xferi, _xferi, sizeof(xferi)))
copy_from_user(&xfern, _xfern, sizeof(xfern)))
copy_from_user(bufs, xfern.bufs, sizeof(void *) * runtime->channels)) {
get_user(frames, _frames))
get_user(frames, _frames))
}
