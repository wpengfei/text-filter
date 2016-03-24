/Users/wpf/Desktop/log/test/linux-2.6.9/sound/drivers/opl3/opl3_synth.c
int snd_opl3_ioctl(snd_hwdep_t * hw, struct file *file,
{
copy_from_user(&note, argp, sizeof(snd_dm_fm_note_t)))
copy_from_user(&voice, argp, sizeof(snd_dm_fm_voice_t)))
copy_from_user(&params, argp, sizeof(snd_dm_fm_params_t)))
}
