// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/ECctmc.h"
#include <RcppArmadillo.h>
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// sample_path_mr
arma::mat sample_path_mr(const int a, const int b, const double t0, const double t1, const Rcpp::NumericMatrix& Q);
static SEXP _ECctmc_sample_path_mr_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_path_mr(a, b, t0, t1, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ECctmc_sample_path_mr(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ECctmc_sample_path_mr_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sample_path_unif
arma::mat sample_path_unif(const int a, const int b, const double t0, const double t1, const arma::mat& Q);
static SEXP _ECctmc_sample_path_unif_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_path_unif(a, b, t0, t1, Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ECctmc_sample_path_unif(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ECctmc_sample_path_unif_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sample_path_unif2
arma::mat sample_path_unif2(const int a, const int b, const double t0, const double t1, const arma::mat& Q, const arma::vec& eigen_vals, const arma::mat& eigen_vecs, const arma::mat& inverse_vecs);
static SEXP _ECctmc_sample_path_unif2_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP eigen_valsSEXP, SEXP eigen_vecsSEXP, SEXP inverse_vecsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type eigen_vals(eigen_valsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type eigen_vecs(eigen_vecsSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type inverse_vecs(inverse_vecsSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_path_unif2(a, b, t0, t1, Q, eigen_vals, eigen_vecs, inverse_vecs));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ECctmc_sample_path_unif2(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP eigen_valsSEXP, SEXP eigen_vecsSEXP, SEXP inverse_vecsSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ECctmc_sample_path_unif2_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP, eigen_valsSEXP, eigen_vecsSEXP, inverse_vecsSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// sample_path_unif3
arma::mat sample_path_unif3(const int a, const int b, const double t0, const double t1, const arma::mat& Q, const arma::mat& P);
static SEXP _ECctmc_sample_path_unif3_try(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP PSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const int >::type a(aSEXP);
    Rcpp::traits::input_parameter< const int >::type b(bSEXP);
    Rcpp::traits::input_parameter< const double >::type t0(t0SEXP);
    Rcpp::traits::input_parameter< const double >::type t1(t1SEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type P(PSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_path_unif3(a, b, t0, t1, Q, P));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ECctmc_sample_path_unif3(SEXP aSEXP, SEXP bSEXP, SEXP t0SEXP, SEXP t1SEXP, SEXP QSEXP, SEXP PSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ECctmc_sample_path_unif3_try(aSEXP, bSEXP, t0SEXP, t1SEXP, QSEXP, PSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}
// comp_expmat
arma::mat comp_expmat(const arma::mat& Q);
static SEXP _ECctmc_comp_expmat_try(SEXP QSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type Q(QSEXP);
    rcpp_result_gen = Rcpp::wrap(comp_expmat(Q));
    return rcpp_result_gen;
END_RCPP_RETURN_ERROR
}
RcppExport SEXP _ECctmc_comp_expmat(SEXP QSEXP) {
    SEXP rcpp_result_gen;
    {
        Rcpp::RNGScope rcpp_rngScope_gen;
        rcpp_result_gen = PROTECT(_ECctmc_comp_expmat_try(QSEXP));
    }
    Rboolean rcpp_isInterrupt_gen = Rf_inherits(rcpp_result_gen, "interrupted-error");
    if (rcpp_isInterrupt_gen) {
        UNPROTECT(1);
        Rf_onintr();
    }
    bool rcpp_isLongjump_gen = Rcpp::internal::isLongjumpSentinel(rcpp_result_gen);
    if (rcpp_isLongjump_gen) {
        Rcpp::internal::resumeJump(rcpp_result_gen);
    }
    Rboolean rcpp_isError_gen = Rf_inherits(rcpp_result_gen, "try-error");
    if (rcpp_isError_gen) {
        SEXP rcpp_msgSEXP_gen = Rf_asChar(rcpp_result_gen);
        UNPROTECT(1);
        Rf_error("%s", CHAR(rcpp_msgSEXP_gen));
    }
    UNPROTECT(1);
    return rcpp_result_gen;
}

// validate (ensure exported C++ functions exist before calling them)
static int _ECctmc_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
        signatures.insert("arma::mat(*sample_path_mr)(const int,const int,const double,const double,const Rcpp::NumericMatrix&)");
        signatures.insert("arma::mat(*sample_path_unif)(const int,const int,const double,const double,const arma::mat&)");
        signatures.insert("arma::mat(*sample_path_unif2)(const int,const int,const double,const double,const arma::mat&,const arma::vec&,const arma::mat&,const arma::mat&)");
        signatures.insert("arma::mat(*sample_path_unif3)(const int,const int,const double,const double,const arma::mat&,const arma::mat&)");
        signatures.insert("arma::mat(*comp_expmat)(const arma::mat&)");
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP _ECctmc_RcppExport_registerCCallable() { 
    R_RegisterCCallable("ECctmc", "_ECctmc_sample_path_mr", (DL_FUNC)_ECctmc_sample_path_mr_try);
    R_RegisterCCallable("ECctmc", "_ECctmc_sample_path_unif", (DL_FUNC)_ECctmc_sample_path_unif_try);
    R_RegisterCCallable("ECctmc", "_ECctmc_sample_path_unif2", (DL_FUNC)_ECctmc_sample_path_unif2_try);
    R_RegisterCCallable("ECctmc", "_ECctmc_sample_path_unif3", (DL_FUNC)_ECctmc_sample_path_unif3_try);
    R_RegisterCCallable("ECctmc", "_ECctmc_comp_expmat", (DL_FUNC)_ECctmc_comp_expmat_try);
    R_RegisterCCallable("ECctmc", "_ECctmc_RcppExport_validate", (DL_FUNC)_ECctmc_RcppExport_validate);
    return R_NilValue;
}

static const R_CallMethodDef CallEntries[] = {
    {"_ECctmc_sample_path_mr", (DL_FUNC) &_ECctmc_sample_path_mr, 5},
    {"_ECctmc_sample_path_unif", (DL_FUNC) &_ECctmc_sample_path_unif, 5},
    {"_ECctmc_sample_path_unif2", (DL_FUNC) &_ECctmc_sample_path_unif2, 8},
    {"_ECctmc_sample_path_unif3", (DL_FUNC) &_ECctmc_sample_path_unif3, 6},
    {"_ECctmc_comp_expmat", (DL_FUNC) &_ECctmc_comp_expmat, 1},
    {"_ECctmc_RcppExport_registerCCallable", (DL_FUNC) &_ECctmc_RcppExport_registerCCallable, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_ECctmc(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
