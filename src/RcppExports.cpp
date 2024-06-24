// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// rnewt
Rcpp::List rnewt(const Eigen::VectorXd& x0, Rcpp::Function fn, Rcpp::Function gr, Rcpp::Function he, const Eigen::MatrixXd& gr0, const Eigen::MatrixXd& d0, const bool& quasi, const int& method, const int& maxit, const int& m, double& mu0, const double& sigma1, const double& sigma2, const double& c1, const double& c2, const double& pmin, const double& tolg, const double& tolgamma, const double& tolobj, const double& tolmu, const double& tolmu2, const double& tolc, const int& maxreject, const bool& grdre, const bool& verbose, const int& riter, const bool& returnhess);
RcppExport SEXP _minic_rnewt(SEXP x0SEXP, SEXP fnSEXP, SEXP grSEXP, SEXP heSEXP, SEXP gr0SEXP, SEXP d0SEXP, SEXP quasiSEXP, SEXP methodSEXP, SEXP maxitSEXP, SEXP mSEXP, SEXP mu0SEXP, SEXP sigma1SEXP, SEXP sigma2SEXP, SEXP c1SEXP, SEXP c2SEXP, SEXP pminSEXP, SEXP tolgSEXP, SEXP tolgammaSEXP, SEXP tolobjSEXP, SEXP tolmuSEXP, SEXP tolmu2SEXP, SEXP tolcSEXP, SEXP maxrejectSEXP, SEXP grdreSEXP, SEXP verboseSEXP, SEXP riterSEXP, SEXP returnhessSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Eigen::VectorXd& >::type x0(x0SEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type fn(fnSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type gr(grSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type he(heSEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type gr0(gr0SEXP);
    Rcpp::traits::input_parameter< const Eigen::MatrixXd& >::type d0(d0SEXP);
    Rcpp::traits::input_parameter< const bool& >::type quasi(quasiSEXP);
    Rcpp::traits::input_parameter< const int& >::type method(methodSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxit(maxitSEXP);
    Rcpp::traits::input_parameter< const int& >::type m(mSEXP);
    Rcpp::traits::input_parameter< double& >::type mu0(mu0SEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma1(sigma1SEXP);
    Rcpp::traits::input_parameter< const double& >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const double& >::type c1(c1SEXP);
    Rcpp::traits::input_parameter< const double& >::type c2(c2SEXP);
    Rcpp::traits::input_parameter< const double& >::type pmin(pminSEXP);
    Rcpp::traits::input_parameter< const double& >::type tolg(tolgSEXP);
    Rcpp::traits::input_parameter< const double& >::type tolgamma(tolgammaSEXP);
    Rcpp::traits::input_parameter< const double& >::type tolobj(tolobjSEXP);
    Rcpp::traits::input_parameter< const double& >::type tolmu(tolmuSEXP);
    Rcpp::traits::input_parameter< const double& >::type tolmu2(tolmu2SEXP);
    Rcpp::traits::input_parameter< const double& >::type tolc(tolcSEXP);
    Rcpp::traits::input_parameter< const int& >::type maxreject(maxrejectSEXP);
    Rcpp::traits::input_parameter< const bool& >::type grdre(grdreSEXP);
    Rcpp::traits::input_parameter< const bool& >::type verbose(verboseSEXP);
    Rcpp::traits::input_parameter< const int& >::type riter(riterSEXP);
    Rcpp::traits::input_parameter< const bool& >::type returnhess(returnhessSEXP);
    rcpp_result_gen = Rcpp::wrap(rnewt(x0, fn, gr, he, gr0, d0, quasi, method, maxit, m, mu0, sigma1, sigma2, c1, c2, pmin, tolg, tolgamma, tolobj, tolmu, tolmu2, tolc, maxreject, grdre, verbose, riter, returnhess));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_minic_rnewt", (DL_FUNC) &_minic_rnewt, 27},
    {NULL, NULL, 0}
};

RcppExport void R_init_minic(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
