// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_splitByIndices
List cpp_splitByIndices(std::vector<std::string> strings, List strInfo);
RcppExport SEXP sdcTable_cpp_splitByIndices(SEXP stringsSEXP, SEXP strInfoSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> >::type strings(stringsSEXP);
    Rcpp::traits::input_parameter< List >::type strInfo(strInfoSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_splitByIndices(strings, strInfo));
    return rcpp_result_gen;
END_RCPP
}
// cpp_myPaste
CharacterVector cpp_myPaste(CharacterVector stringvec, int nrKeyVars, CharacterVector seperator);
RcppExport SEXP sdcTable_cpp_myPaste(SEXP stringvecSEXP, SEXP nrKeyVarsSEXP, SEXP seperatorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type stringvec(stringvecSEXP);
    Rcpp::traits::input_parameter< int >::type nrKeyVars(nrKeyVarsSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type seperator(seperatorSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_myPaste(stringvec, nrKeyVars, seperator));
    return rcpp_result_gen;
END_RCPP
}
// cpp_mySplit
CharacterVector cpp_mySplit(CharacterVector stringvec, IntegerVector indices);
RcppExport SEXP sdcTable_cpp_mySplit(SEXP stringvecSEXP, SEXP indicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type stringvec(stringvecSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type indices(indicesSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_mySplit(stringvec, indices));
    return rcpp_result_gen;
END_RCPP
}
// greedyMultDimSuppression
List greedyMultDimSuppression(DataFrame dat, List indices, List subIndices, IntegerVector dimVars, bool verbose);
RcppExport SEXP sdcTable_greedyMultDimSuppression(SEXP datSEXP, SEXP indicesSEXP, SEXP subIndicesSEXP, SEXP dimVarsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< DataFrame >::type dat(datSEXP);
    Rcpp::traits::input_parameter< List >::type indices(indicesSEXP);
    Rcpp::traits::input_parameter< List >::type subIndices(subIndicesSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type dimVars(dimVarsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(greedyMultDimSuppression(dat, indices, subIndices, dimVars, verbose));
    return rcpp_result_gen;
END_RCPP
}
