/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/drivers/s390/crypto/zcrypt_pcica.c
static int ICAMEX_msg_to_type4MEX_msg(struct zcrypt_device *zdev,
{
copy_from_user(modulus, mex->n_modulus, mod_len) ||
copy_from_user(exponent, mex->b_key, mod_len) ||
copy_from_user(message, mex->inputdata, mod_len))
}
static int ICACRT_msg_to_type4CRT_msg(struct zcrypt_device *zdev,
{
copy_from_user(p, crt->np_prime, long_len) ||
copy_from_user(q, crt->nq_prime, short_len) ||
copy_from_user(dp, crt->bp_key, long_len) ||
copy_from_user(dq, crt->bq_key, short_len) ||
copy_from_user(u, crt->u_mult_inv, long_len) ||
copy_from_user(inp, crt->inputdata, mod_len))
}
