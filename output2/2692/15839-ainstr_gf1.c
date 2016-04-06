/Users/wpf/Documents/workspace/text-filter/test/linux-2.6.9/sound/core/seq/instr/ainstr_gf1.c
static int snd_seq_gf1_put(void *private_data, snd_seq_kinstr_t *instr,
{
copy_from_user(&ix, instr_data, sizeof(ix)))
copy_from_user(&stype, instr_data, sizeof(stype)))
}
