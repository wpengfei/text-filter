/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/s390/crypto/zcrypt_msgtype50.c
static int ICAMEX_msg_to_type50MEX_msg(struct zcrypt_device *zdev,
{
copy_from_user(mod, mex->n_modulus, mod_len) ||
copy_from_user(exp, mex->b_key, mod_len) ||
copy_from_user(inp, mex->inputdata, mod_len))
}
static int ICACRT_msg_to_type50CRT_msg(struct zcrypt_device *zdev,
{
copy_from_user(p, crt->np_prime + MSGTYPE_ADJUSTMENT, short_len) ||
copy_from_user(q, crt->nq_prime, short_len) ||
copy_from_user(dp, crt->bp_key + MSGTYPE_ADJUSTMENT, short_len) ||
copy_from_user(dq, crt->bq_key, short_len) ||
copy_from_user(u, crt->u_mult_inv + MSGTYPE_ADJUSTMENT, short_len) ||
copy_from_user(inp, crt->inputdata, mod_len))
}
