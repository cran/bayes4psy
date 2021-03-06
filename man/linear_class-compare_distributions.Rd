% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/linear_class.R
\name{compare_distributions,linear_class-method}
\alias{compare_distributions,linear_class-method}
\alias{compare_distributions_linear}
\title{compare_distributions}
\usage{
\S4method{compare_distributions}{linear_class}(object, ...)
}
\arguments{
\item{object}{linear_class object.}

\item{...}{fit2 - a second linear_class object, rope_intercept and rope_slope - regions of practical equivalence.}
}
\value{
Comparison results or an error if something went wrong.
}
\description{
\code{compare_distributions} draws samples from distribution of the first group and compares them against samples drawn from the distribution of the second group.
}
\examples{
# to use the function you first have to prepare the data and fit the model
# see class documentation for an example of the whole process
# along with an example of how to use this function
?linear_class

}
