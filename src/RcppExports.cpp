// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// MergeMassAxis
NumericVector MergeMassAxis(NumericVector mz1, NumericVector mz2);
RcppExport SEXP _rMSI_MergeMassAxis(SEXP mz1SEXP, SEXP mz2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mz1(mz1SEXP);
    Rcpp::traits::input_parameter< NumericVector >::type mz2(mz2SEXP);
    rcpp_result_gen = Rcpp::wrap(MergeMassAxis(mz1, mz2));
    return rcpp_result_gen;
END_RCPP
}
// ReduceDataPointsC
List ReduceDataPointsC(NumericVector mass, NumericVector intensity, double massMin, double massMax, int npoints);
RcppExport SEXP _rMSI_ReduceDataPointsC(SEXP massSEXP, SEXP intensitySEXP, SEXP massMinSEXP, SEXP massMaxSEXP, SEXP npointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type mass(massSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type intensity(intensitySEXP);
    Rcpp::traits::input_parameter< double >::type massMin(massMinSEXP);
    Rcpp::traits::input_parameter< double >::type massMax(massMaxSEXP);
    Rcpp::traits::input_parameter< int >::type npoints(npointsSEXP);
    rcpp_result_gen = Rcpp::wrap(ReduceDataPointsC(mass, intensity, massMin, massMax, npoints));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_rMSI_MergeMassAxis", (DL_FUNC) &_rMSI_MergeMassAxis, 2},
    {"_rMSI_ReduceDataPointsC", (DL_FUNC) &_rMSI_ReduceDataPointsC, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_rMSI(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
