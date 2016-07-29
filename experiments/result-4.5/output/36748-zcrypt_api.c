/Users/wpf/Documents/workspace/text-filter/test/linux-4.5/drivers/s390/crypto/zcrypt_api.c
static long zcrypt_rsa_crt(struct ica_rsa_modexpo_crt *crt)
{
case
copy_from_user(&z1, crt->np_prime, len) ||
copy_from_user(&z2, crt->bp_key, len) ||
copy_from_user(&z3, crt->u_mult_inv, len))
}
