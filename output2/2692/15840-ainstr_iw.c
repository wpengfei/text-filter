/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/sound/core/seq/instr/ainstr_iw.c
static int snd_seq_iwffff_copy_env_from_stream(__u32 req_stype,
{
copy_from_user(&stype, *data, sizeof(stype)))
copy_from_user(&rx, *data, sizeof(rx)))
copy_from_user(&px, *data, sizeof(px)))
}
static int snd_seq_iwffff_put(void *private_data, snd_seq_kinstr_t *instr,
{
copy_from_user(&ix, instr_data, sizeof(ix)))
copy_from_user(&lx, instr_data, sizeof(lx)))
copy_from_user(&stype, instr_data, sizeof(stype)))
}
