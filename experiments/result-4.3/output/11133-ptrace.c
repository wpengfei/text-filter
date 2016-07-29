/Users/wpf/Documents/workspace/text-filter/test/linux-4.3.3/arch/ia64/kernel/ptrace.c
static long
{
get_user(pt->cr_iip, &ppr->cr_iip);
get_user(psr, &ppr->cr_ipsr);
get_user(pt->ar_pfs, &ppr->ar[PT_AUR_PFS]);
get_user(rsc, &ppr->ar[PT_AUR_RSC]);
get_user(pt->ar_bspstore, &ppr->ar[PT_AUR_BSPSTORE]);
get_user(pt->ar_unat, &ppr->ar[PT_AUR_UNAT]);
get_user(pt->ar_ccv, &ppr->ar[PT_AUR_CCV]);
get_user(pt->ar_fpsr, &ppr->ar[PT_AUR_FPSR]);
get_user(ec, &ppr->ar[PT_AUR_EC]);
get_user(lc, &ppr->ar[PT_AUR_LC]);
get_user(rnat, &ppr->ar[PT_AUR_RNAT]);
get_user(bsp, &ppr->ar[PT_AUR_BSP]);
get_user(cfm, &ppr->cfm);
copy_from_user(&pt->r1, &ppr->gr[1], sizeof(long));
copy_from_user(&pt->r2, &ppr->gr[2], sizeof(long) * 2);
get_user(val, &ppr->gr[i]);
copy_from_user(&pt->r8, &ppr->gr[8], sizeof(long) * 4);
copy_from_user(&pt->r12, &ppr->gr[12], sizeof(long) * 2);
copy_from_user(&pt->r14, &ppr->gr[14], sizeof(long));
copy_from_user(&pt->r15, &ppr->gr[15], sizeof(long));
copy_from_user(&pt->r16, &ppr->gr[16], sizeof(long) * 16);
get_user(pt->b0, &ppr->br[0]);
get_user(val, &ppr->br[i]);
get_user(pt->b6, &ppr->br[6]);
get_user(pt->b7, &ppr->br[7]);
copy_from_user(&fpval, &ppr->fr[i], sizeof(fpval));
copy_from_user(&pt->f6, &ppr->fr[6],
copy_from_user(&sw->f12, &ppr->fr[12],
copy_from_user(&fpval, &ppr->fr[i],
copy_from_user(&child->thread.fph, &ppr->fr[32],
get_user(pt->pr, &ppr->pr);
get_user(nat_bits, &ppr->nat);
}
