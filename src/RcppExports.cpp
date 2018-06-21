// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// riemann_gradient_cpp
arma::mat riemann_gradient_cpp(arma::mat L, arma::mat D);
RcppExport SEXP _morpca_riemann_gradient_cpp(SEXP LSEXP, SEXP DSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type L(LSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type D(DSEXP);
    rcpp_result_gen = Rcpp::wrap(riemann_gradient_cpp(L, D));
    return rcpp_result_gen;
END_RCPP
}
// orthographic_retraction_cpp
arma::mat orthographic_retraction_cpp(arma::mat L_tmp, arma::mat Q, arma::mat R);
RcppExport SEXP _morpca_orthographic_retraction_cpp(SEXP L_tmpSEXP, SEXP QSEXP, SEXP RSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type L_tmp(L_tmpSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type R(RSEXP);
    rcpp_result_gen = Rcpp::wrap(orthographic_retraction_cpp(L_tmp, Q, R));
    return rcpp_result_gen;
END_RCPP
}
// percentile_threshold_cpp
arma::mat percentile_threshold_cpp(arma::mat A, arma::vec row_pctls, arma::vec col_pctls);
RcppExport SEXP _morpca_percentile_threshold_cpp(SEXP ASEXP, SEXP row_pctlsSEXP, SEXP col_pctlsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type A(ASEXP);
    Rcpp::traits::input_parameter< arma::vec >::type row_pctls(row_pctlsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type col_pctls(col_pctlsSEXP);
    rcpp_result_gen = Rcpp::wrap(percentile_threshold_cpp(A, row_pctls, col_pctls));
    return rcpp_result_gen;
END_RCPP
}
// rank_r_approx_cpp
arma::mat rank_r_approx_cpp(arma::mat Y, int r);
RcppExport SEXP _morpca_rank_r_approx_cpp(SEXP YSEXP, SEXP rSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type r(rSEXP);
    rcpp_result_gen = Rcpp::wrap(rank_r_approx_cpp(Y, r));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_morpca_riemann_gradient_cpp", (DL_FUNC) &_morpca_riemann_gradient_cpp, 2},
    {"_morpca_orthographic_retraction_cpp", (DL_FUNC) &_morpca_orthographic_retraction_cpp, 3},
    {"_morpca_percentile_threshold_cpp", (DL_FUNC) &_morpca_percentile_threshold_cpp, 3},
    {"_morpca_rank_r_approx_cpp", (DL_FUNC) &_morpca_rank_r_approx_cpp, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_morpca(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
