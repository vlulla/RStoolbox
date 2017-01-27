// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// classQA
IntegerVector classQA(NumericVector& x, NumericMatrix rcl);
RcppExport SEXP RStoolbox_classQA(SEXP xSEXP, SEXP rclSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type rcl(rclSEXP);
    rcpp_result_gen = Rcpp::wrap(classQA(x, rcl));
    return rcpp_result_gen;
END_RCPP
}
// entropyCpp
NumericVector entropyCpp(NumericMatrix& x);
RcppExport SEXP RStoolbox_entropyCpp(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    rcpp_result_gen = Rcpp::wrap(entropyCpp(x));
    return rcpp_result_gen;
END_RCPP
}
// gainOffsetRescale
NumericMatrix gainOffsetRescale(NumericMatrix x, NumericVector g, NumericVector o, LogicalVector clamp);
RcppExport SEXP RStoolbox_gainOffsetRescale(SEXP xSEXP, SEXP gSEXP, SEXP oSEXP, SEXP clampSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type g(gSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type o(oSEXP);
    Rcpp::traits::input_parameter< LogicalVector >::type clamp(clampSEXP);
    rcpp_result_gen = Rcpp::wrap(gainOffsetRescale(x, g, o, clamp));
    return rcpp_result_gen;
END_RCPP
}
// normImageCpp
NumericMatrix normImageCpp(NumericMatrix& x, NumericVector& M, NumericVector& S);
RcppExport SEXP RStoolbox_normImageCpp(SEXP xSEXP, SEXP MSEXP, SEXP SSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type M(MSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type S(SSEXP);
    rcpp_result_gen = Rcpp::wrap(normImageCpp(x, M, S));
    return rcpp_result_gen;
END_RCPP
}
// predKmeansCpp
IntegerVector predKmeansCpp(NumericMatrix x, NumericMatrix centers);
RcppExport SEXP RStoolbox_predKmeansCpp(SEXP xSEXP, SEXP centersSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type centers(centersSEXP);
    rcpp_result_gen = Rcpp::wrap(predKmeansCpp(x, centers));
    return rcpp_result_gen;
END_RCPP
}
// predictMlcCpp
arma::mat predictMlcCpp(NumericMatrix newdata, List model, int nclasses);
RcppExport SEXP RStoolbox_predictMlcCpp(SEXP newdataSEXP, SEXP modelSEXP, SEXP nclassesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type newdata(newdataSEXP);
    Rcpp::traits::input_parameter< List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< int >::type nclasses(nclassesSEXP);
    rcpp_result_gen = Rcpp::wrap(predictMlcCpp(newdata, model, nclasses));
    return rcpp_result_gen;
END_RCPP
}
// pwSimilarityCpp
NumericVector pwSimilarityCpp(NumericMatrix& img, NumericMatrix& ref, int method);
RcppExport SEXP RStoolbox_pwSimilarityCpp(SEXP imgSEXP, SEXP refSEXP, SEXP methodSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type img(imgSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type ref(refSEXP);
    Rcpp::traits::input_parameter< int >::type method(methodSEXP);
    rcpp_result_gen = Rcpp::wrap(pwSimilarityCpp(img, ref, method));
    return rcpp_result_gen;
END_RCPP
}
// rescaleImageCpp
NumericMatrix rescaleImageCpp(NumericMatrix x, NumericVector scal, NumericVector xmin, NumericVector ymin);
RcppExport SEXP RStoolbox_rescaleImageCpp(SEXP xSEXP, SEXP scalSEXP, SEXP xminSEXP, SEXP yminSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type scal(scalSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type xmin(xminSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type ymin(yminSEXP);
    rcpp_result_gen = Rcpp::wrap(rescaleImageCpp(x, scal, xmin, ymin));
    return rcpp_result_gen;
END_RCPP
}
// specSimC
NumericMatrix specSimC(NumericMatrix& x, NumericMatrix& em);
RcppExport SEXP RStoolbox_specSimC(SEXP xSEXP, SEXP emSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericMatrix& >::type em(emSEXP);
    rcpp_result_gen = Rcpp::wrap(specSimC(x, em));
    return rcpp_result_gen;
END_RCPP
}
// spectralIndicesCpp
NumericMatrix spectralIndicesCpp(NumericMatrix x, CharacterVector indices, const int redBand, const int blueBand, const int greenBand, const int nirBand, const int swir1Band, const int swir2Band, const int swir3Band, int maskLayer, const int maskValue, const double L, const double s, const double G, const double C1, const double C2, double Levi, const double swir2ccc, const double swir2cdiff, const double sf);
RcppExport SEXP RStoolbox_spectralIndicesCpp(SEXP xSEXP, SEXP indicesSEXP, SEXP redBandSEXP, SEXP blueBandSEXP, SEXP greenBandSEXP, SEXP nirBandSEXP, SEXP swir1BandSEXP, SEXP swir2BandSEXP, SEXP swir3BandSEXP, SEXP maskLayerSEXP, SEXP maskValueSEXP, SEXP LSEXP, SEXP sSEXP, SEXP GSEXP, SEXP C1SEXP, SEXP C2SEXP, SEXP LeviSEXP, SEXP swir2cccSEXP, SEXP swir2cdiffSEXP, SEXP sfSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< const int >::type redBand(redBandSEXP);
    Rcpp::traits::input_parameter< const int >::type blueBand(blueBandSEXP);
    Rcpp::traits::input_parameter< const int >::type greenBand(greenBandSEXP);
    Rcpp::traits::input_parameter< const int >::type nirBand(nirBandSEXP);
    Rcpp::traits::input_parameter< const int >::type swir1Band(swir1BandSEXP);
    Rcpp::traits::input_parameter< const int >::type swir2Band(swir2BandSEXP);
    Rcpp::traits::input_parameter< const int >::type swir3Band(swir3BandSEXP);
    Rcpp::traits::input_parameter< int >::type maskLayer(maskLayerSEXP);
    Rcpp::traits::input_parameter< const int >::type maskValue(maskValueSEXP);
    Rcpp::traits::input_parameter< const double >::type L(LSEXP);
    Rcpp::traits::input_parameter< const double >::type s(sSEXP);
    Rcpp::traits::input_parameter< const double >::type G(GSEXP);
    Rcpp::traits::input_parameter< const double >::type C1(C1SEXP);
    Rcpp::traits::input_parameter< const double >::type C2(C2SEXP);
    Rcpp::traits::input_parameter< double >::type Levi(LeviSEXP);
    Rcpp::traits::input_parameter< const double >::type swir2ccc(swir2cccSEXP);
    Rcpp::traits::input_parameter< const double >::type swir2cdiff(swir2cdiffSEXP);
    Rcpp::traits::input_parameter< const double >::type sf(sfSEXP);
    rcpp_result_gen = Rcpp::wrap(spectralIndicesCpp(x, indices, redBand, blueBand, greenBand, nirBand, swir1Band, swir2Band, swir3Band, maskLayer, maskValue, L, s, G, C1, C2, Levi, swir2ccc, swir2cdiff, sf));
    return rcpp_result_gen;
END_RCPP
}
