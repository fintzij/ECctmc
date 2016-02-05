#' Sample path from the distribution of an endpoint-conditioned CTMC.
#'
#' @param a,b States at the left and right endpoints of the interval, given as
#'   row numbers of the CTMC rate matrix
#' @param t0,t1 Times for the left and right endpoints of the interval.
#' @param Q CTMC rate matrix.
#' @param method Either "mr" corresponding to modified rejection sampling, or
#'   "unif" for uniformization.
#' @param npaths optional argument for the number of sample paths to simulate.
#' @param eigen_vals optional vector of eigen values of Q.
#' @param eigen_vecs optional matrix of eigen vectors of Q.
#' @param inverse_vecs optional inverse of the eigen vector matrix.
#'
#' @return sample_path returns either a matrix with a sample path or a list of
#'   matrices of sample paths.
#' @export
#'
sample_path <- function(a, b, t0, t1, Q, method = "mr", npaths = 1, eigen_vals = NULL, eigen_vecs = NULL, inverse_vecs = NULL) {

        # check that the simulation method is correctly specified
        if(!method %in% c("mr", "unif")) {
                stop("Simulation method mus be either ",dQuote("mr")," or ", dQuote("unif"))
        }

        # check that the rate matrix is a valid rate matrix
        if(!all(rowSums(Q) == 0)) {
                stop("The rate matrix is not valid. The rates must sum to 0 zero within each row.")
        }

        # check that the times are properly ordered
        if(t0 >= t1) {
                stop("t0 must be less than t1.")
        }

        # check that the endpoints are correctly specified
        if(!all(c(a,b) %in% 1:nrow(Q))) {
                stop("The endpoints must be given in as row numbers in the rate matrix.")
        }

        if(npaths == 1) {
                if(method == "mr") {
                        path <- sample_path.mr(a = a, b = b, t0 = t0, t1 = t1, Q = Q)
                } else {
                        if(is.null(eigen_vals)) {
                                path <- sample_path.unif(a = a, b = b, t0 = t0, t1 = t1, Q = Q)
                        } else {
                                path <- sample_path.unif2(a = a, b = b, t0 = t0, t1 = t1, Q = Q, eigen_vals = eigen_vals, eigen_vecs = eigen_vecs, inverse_vecs = inverse_vecs)
                        }
                }

        } else {

                path <- vector(mode = "list", length = npaths)

                if(method == "mr") {
                        for(k in 1:npaths) {
                                path[[k]] <- sample_path.mr(a = a, b = b, t0 = t0, t1 = t1, Q = Q)
                        }
                } else {
                        if(is.null(eigen_vals)) {
                                for(k in 1:npaths) {
                                        path[[k]] <- sample_path.unif(a = a, b = b, t0 = t0, t1 = t1, Q = Q)
                                }
                        } else {
                                for(k in 1:npaths) {
                                        path[[k]] <- sample_path.unif2(a = a, b = b, t0 = t0, t1 = t1, Q = Q)
                                }
                        }
                }
        }

        return(path)

}