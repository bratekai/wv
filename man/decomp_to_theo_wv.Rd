% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/RcppExports.R
\name{decomp_to_theo_wv}
\alias{decomp_to_theo_wv}
\title{Decomposed WV to Single WV}
\usage{
decomp_to_theo_wv(decomp)
}
\arguments{
\item{decomp}{A \code{mat} with scales as rows and processes as columns}
}
\value{
A \code{vec} containing the wavelet variance of the process for the overall model
}
\description{
This function computes the combined processes to WV (haar) in a given model.
}
\keyword{internal}
