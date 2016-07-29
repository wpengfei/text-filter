/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/core/pcm_native.c
static int snd_pcm_sync_ptr(struct snd_pcm_substream *substream,
{
get_user(sync_ptr.flags, (unsigned __user *)&(_sync_ptr->flags)))
copy_from_user(&sync_ptr.c.control, &(_sync_ptr->c.control), sizeof(struct snd_pcm_mmap_control)))
}
