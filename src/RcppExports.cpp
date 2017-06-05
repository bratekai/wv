// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// dwt_cpp
arma::field<arma::vec> dwt_cpp(arma::vec x, std::string filter_name, unsigned int nlevels);
RcppExport SEXP wv_dwt_cpp(SEXP xSEXP, SEXP filter_nameSEXP, SEXP nlevelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter_name(filter_nameSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    rcpp_result_gen = Rcpp::wrap(dwt_cpp(x, filter_name, nlevels));
    return rcpp_result_gen;
END_RCPP
}
// modwt_cpp
arma::field<arma::vec> modwt_cpp(arma::vec x, std::string filter_name, unsigned int nlevels);
RcppExport SEXP wv_modwt_cpp(SEXP xSEXP, SEXP filter_nameSEXP, SEXP nlevelsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::vec >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string >::type filter_name(filter_nameSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    rcpp_result_gen = Rcpp::wrap(modwt_cpp(x, filter_name, nlevels));
    return rcpp_result_gen;
END_RCPP
}
// ci_eta3
arma::mat ci_eta3(const arma::vec& y, const arma::vec& dims, double alpha_ov_2);
RcppExport SEXP wv_ci_eta3(SEXP ySEXP, SEXP dimsSEXP, SEXP alpha_ov_2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type dims(dimsSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_ov_2(alpha_ov_2SEXP);
    rcpp_result_gen = Rcpp::wrap(ci_eta3(y, dims, alpha_ov_2));
    return rcpp_result_gen;
END_RCPP
}
// ci_eta3_robust
arma::mat ci_eta3_robust(const arma::vec& wv_robust, const arma::mat& wv_ci_class, double alpha_ov_2, double eff);
RcppExport SEXP wv_ci_eta3_robust(SEXP wv_robustSEXP, SEXP wv_ci_classSEXP, SEXP alpha_ov_2SEXP, SEXP effSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type wv_robust(wv_robustSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type wv_ci_class(wv_ci_classSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_ov_2(alpha_ov_2SEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    rcpp_result_gen = Rcpp::wrap(ci_eta3_robust(wv_robust, wv_ci_class, alpha_ov_2, eff));
    return rcpp_result_gen;
END_RCPP
}
// ci_wave_variance
arma::mat ci_wave_variance(const arma::field<arma::vec>& signal_modwt_bw, const arma::vec& wv, std::string type, double alpha_ov_2, bool robust, double eff);
RcppExport SEXP wv_ci_wave_variance(SEXP signal_modwt_bwSEXP, SEXP wvSEXP, SEXP typeSEXP, SEXP alpha_ov_2SEXP, SEXP robustSEXP, SEXP effSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type signal_modwt_bw(signal_modwt_bwSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type wv(wvSEXP);
    Rcpp::traits::input_parameter< std::string >::type type(typeSEXP);
    Rcpp::traits::input_parameter< double >::type alpha_ov_2(alpha_ov_2SEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    rcpp_result_gen = Rcpp::wrap(ci_wave_variance(signal_modwt_bw, wv, type, alpha_ov_2, robust, eff));
    return rcpp_result_gen;
END_RCPP
}
// wave_variance
arma::vec wave_variance(const arma::field<arma::vec>& signal_modwt_bw, bool robust, double eff);
RcppExport SEXP wv_wave_variance(SEXP signal_modwt_bwSEXP, SEXP robustSEXP, SEXP effSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type signal_modwt_bw(signal_modwt_bwSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    rcpp_result_gen = Rcpp::wrap(wave_variance(signal_modwt_bw, robust, eff));
    return rcpp_result_gen;
END_RCPP
}
// wvar_cpp
arma::mat wvar_cpp(const arma::field<arma::vec>& signal_modwt_bw, bool robust, double eff, double alpha, std::string ci_type);
RcppExport SEXP wv_wvar_cpp(SEXP signal_modwt_bwSEXP, SEXP robustSEXP, SEXP effSEXP, SEXP alphaSEXP, SEXP ci_typeSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::field<arma::vec>& >::type signal_modwt_bw(signal_modwt_bwSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type ci_type(ci_typeSEXP);
    rcpp_result_gen = Rcpp::wrap(wvar_cpp(signal_modwt_bw, robust, eff, alpha, ci_type));
    return rcpp_result_gen;
END_RCPP
}
// modwt_wvar_cpp
arma::mat modwt_wvar_cpp(const arma::vec& signal, unsigned int nlevels, bool robust, double eff, double alpha, std::string ci_type, std::string strWavelet, std::string decomp);
RcppExport SEXP wv_modwt_wvar_cpp(SEXP signalSEXP, SEXP nlevelsSEXP, SEXP robustSEXP, SEXP effSEXP, SEXP alphaSEXP, SEXP ci_typeSEXP, SEXP strWaveletSEXP, SEXP decompSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type signal(signalSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type ci_type(ci_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type strWavelet(strWaveletSEXP);
    Rcpp::traits::input_parameter< std::string >::type decomp(decompSEXP);
    rcpp_result_gen = Rcpp::wrap(modwt_wvar_cpp(signal, nlevels, robust, eff, alpha, ci_type, strWavelet, decomp));
    return rcpp_result_gen;
END_RCPP
}
// batch_modwt_wvar_cpp
arma::field<arma::mat> batch_modwt_wvar_cpp(const arma::mat& signal, unsigned int nlevels, bool robust, double eff, double alpha, std::string ci_type, std::string strWavelet, std::string decomp);
RcppExport SEXP wv_batch_modwt_wvar_cpp(SEXP signalSEXP, SEXP nlevelsSEXP, SEXP robustSEXP, SEXP effSEXP, SEXP alphaSEXP, SEXP ci_typeSEXP, SEXP strWaveletSEXP, SEXP decompSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type signal(signalSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type nlevels(nlevelsSEXP);
    Rcpp::traits::input_parameter< bool >::type robust(robustSEXP);
    Rcpp::traits::input_parameter< double >::type eff(effSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< std::string >::type ci_type(ci_typeSEXP);
    Rcpp::traits::input_parameter< std::string >::type strWavelet(strWaveletSEXP);
    Rcpp::traits::input_parameter< std::string >::type decomp(decompSEXP);
    rcpp_result_gen = Rcpp::wrap(batch_modwt_wvar_cpp(signal, nlevels, robust, eff, alpha, ci_type, strWavelet, decomp));
    return rcpp_result_gen;
END_RCPP
}
// scales_cpp
arma::vec scales_cpp(unsigned int nb_level);
RcppExport SEXP wv_scales_cpp(SEXP nb_levelSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type nb_level(nb_levelSEXP);
    rcpp_result_gen = Rcpp::wrap(scales_cpp(nb_level));
    return rcpp_result_gen;
END_RCPP
}
// compute_cov_cpp
arma::mat compute_cov_cpp(arma::field<arma::vec> coef1, arma::field<arma::vec> coef2, arma::vec variance, arma::vec lower, arma::vec upper);
RcppExport SEXP wv_compute_cov_cpp(SEXP coef1SEXP, SEXP coef2SEXP, SEXP varianceSEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::field<arma::vec> >::type coef1(coef1SEXP);
    Rcpp::traits::input_parameter< arma::field<arma::vec> >::type coef2(coef2SEXP);
    Rcpp::traits::input_parameter< arma::vec >::type variance(varianceSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(compute_cov_cpp(coef1, coef2, variance, lower, upper));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"wv_dwt_cpp", (DL_FUNC) &wv_dwt_cpp, 3},
    {"wv_modwt_cpp", (DL_FUNC) &wv_modwt_cpp, 3},
    {"wv_ci_eta3", (DL_FUNC) &wv_ci_eta3, 3},
    {"wv_ci_eta3_robust", (DL_FUNC) &wv_ci_eta3_robust, 4},
    {"wv_ci_wave_variance", (DL_FUNC) &wv_ci_wave_variance, 6},
    {"wv_wave_variance", (DL_FUNC) &wv_wave_variance, 3},
    {"wv_wvar_cpp", (DL_FUNC) &wv_wvar_cpp, 5},
    {"wv_modwt_wvar_cpp", (DL_FUNC) &wv_modwt_wvar_cpp, 8},
    {"wv_batch_modwt_wvar_cpp", (DL_FUNC) &wv_batch_modwt_wvar_cpp, 8},
    {"wv_scales_cpp", (DL_FUNC) &wv_scales_cpp, 1},
    {"wv_compute_cov_cpp", (DL_FUNC) &wv_compute_cov_cpp, 5},
    {NULL, NULL, 0}
};

RcppExport void R_init_wv(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
