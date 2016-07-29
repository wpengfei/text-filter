/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/s390/crypto/zcrypt_cca_key.h
static inline int zcrypt_type6_mex_key_de(struct ica_rsa_modexpo *mex,
{
copy_from_user(temp, mex->b_key, mex->inputdatalength))
copy_from_user(temp, mex->n_modulus, mex->inputdatalength))
}
static inline int zcrypt_type6_mex_key_en(struct ica_rsa_modexpo *mex,
{
copy_from_user(temp, mex->b_key, mex->inputdatalength))
copy_from_user(temp, mex->n_modulus, mex->inputdatalength))
}
static inline int zcrypt_type6_crt_key(struct ica_rsa_modexpo_crt *crt,
{
copy_from_user(key->key_parts, crt->np_prime, long_len) ||
copy_from_user(key->key_parts + long_len,
copy_from_user(key->key_parts + long_len + short_len,
copy_from_user(key->key_parts + 2*long_len + short_len,
copy_from_user(key->key_parts + 2*long_len + 2*short_len,
}
