% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/ACF.R
\name{plot.auto_corr}
\alias{plot.auto_corr}
\title{Auto-Covariance and Correlation Functions}
\usage{
\method{plot}{auto_corr}(x, show.ci = TRUE, alpha = 0.05,
  main = NULL, ...)
}
\arguments{
\item{x}{An \code{"ACF"} object from \code{\link{ACF}}.}

\item{show.ci}{A \code{bool} indicating whether to show confidence region}

\item{...}{Additional parameters}

\item{ci}{A \code{double} containing the 1-alpha level. Default is 0.95}
}
\value{
An \code{array} of dimensions \eqn{N \times S \times S}{N x S x S}.
}
\description{
The acf function computes the estimated
autocovariance or autocorrelation for both univariate and multivariate cases.
}
\examples{
# Calculate the Autocorrelation
m = ACF(datasets::AirPassengers)

# Plot with 95\% CI
plot(m) 

# Plot with 90\% CI
plot(m, ci = 0.90) 

# Plot without 95\% CI
plot(m, show.ci = FALSE)
}
\author{
Yunxiang Zhang
}
\keyword{internal}
