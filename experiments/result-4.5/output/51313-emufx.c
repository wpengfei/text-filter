/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/sound/pci/emu10k1/emufx.c
static int snd_emu10k1_tram_poke(struct snd_emu10k1 *emu,
{
get_user(val, &icode->tram_data_map[tram]) ||
get_user(addr, &icode->tram_addr_map[tram]))
}
static int snd_emu10k1_code_poke(struct snd_emu10k1 *emu,
{
get_user(lo, &icode->code[pc + 0]) ||
get_user(hi, &icode->code[pc + 1]))
}
static unsigned int *copy_tlv(const unsigned int __user *_tlv)
{
copy_from_user(data, _tlv, sizeof(data)))
copy_from_user(tlv + 2, _tlv + 2, data[1])) {
}
static int copy_gctl(struct snd_emu10k1 *emu,
{
copy_from_user(gctl, &_gctl[idx], sizeof(*gctl));
copy_from_user(gctl, &octl[idx], sizeof(*octl)))
}
