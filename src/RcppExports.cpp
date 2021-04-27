// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// initlslinreg
Rcpp::List initlslinreg(const arma::vec& y, const arma::mat& x);
RcppExport SEXP _LinGxEScanR_initlslinreg(SEXP ySEXP, SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(initlslinreg(y, x));
    return rcpp_result_gen;
END_RCPP
}
// lslinreg
int lslinreg(const arma::vec& y, const arma::mat& xl, const arma::mat& xr, arma::mat& xtx, arma::mat& bt, arma::mat& bb, const arma::mat& ql, arma::mat& qr, const arma::mat& rtl, arma::mat& rtr, arma::mat& rbr, arma::mat& h, const arma::mat& k, arma::mat& t, arma::mat& zb, arma::vec& res, arma::vec& s2, arma::mat& xtxinv, arma::vec& std_err, arma::mat& xrS2, arma::vec& xrChi2);
RcppExport SEXP _LinGxEScanR_lslinreg(SEXP ySEXP, SEXP xlSEXP, SEXP xrSEXP, SEXP xtxSEXP, SEXP btSEXP, SEXP bbSEXP, SEXP qlSEXP, SEXP qrSEXP, SEXP rtlSEXP, SEXP rtrSEXP, SEXP rbrSEXP, SEXP hSEXP, SEXP kSEXP, SEXP tSEXP, SEXP zbSEXP, SEXP resSEXP, SEXP s2SEXP, SEXP xtxinvSEXP, SEXP std_errSEXP, SEXP xrS2SEXP, SEXP xrChi2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xl(xlSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type xr(xrSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xtx(xtxSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type bt(btSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type bb(bbSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type ql(qlSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type qr(qrSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type rtl(rtlSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type rtr(rtrSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type rbr(rbrSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type t(tSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type zb(zbSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type res(resSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type s2(s2SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xtxinv(xtxinvSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type std_err(std_errSEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type xrS2(xrS2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type xrChi2(xrChi2SEXP);
    rcpp_result_gen = Rcpp::wrap(lslinreg(y, xl, xr, xtx, bt, bb, ql, qr, rtl, rtr, rbr, h, k, t, zb, res, s2, xtxinv, std_err, xrS2, xrChi2));
    return rcpp_result_gen;
END_RCPP
}
// initreg
Rcpp::List initreg(const arma::mat& X, const arma::colvec& y);
RcppExport SEXP _LinGxEScanR_initreg(SEXP XSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::colvec& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(initreg(X, y));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_LinGxEScanR_initlslinreg", (DL_FUNC) &_LinGxEScanR_initlslinreg, 2},
    {"_LinGxEScanR_lslinreg", (DL_FUNC) &_LinGxEScanR_lslinreg, 21},
    {"_LinGxEScanR_initreg", (DL_FUNC) &_LinGxEScanR_initreg, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_LinGxEScanR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
