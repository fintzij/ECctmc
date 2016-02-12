# ECctmc
[![Travis-CI Build Status](https://travis-ci.org/fintzij/ECctmc.svg?branch=master)](https://travis-ci.org/fintzij/ECctmc)
## Simulating sample paths for endpoint-conditioned continuous time Markov chains.
The __ECctmc__ R package is a lightweight C++ implementation of the modified rejection sampling and uniformization algorithms detailed in Hobolth and Stone (2009). 
These algorithms allow users to efficiently simulate sample paths for continuous time Markov chains (CTMC) with discrete state spaces conditional on the state of the chain at the endpoints of the sampling interval. 
This implementation assumes that state sojourn times are exponentially distributed, and that the process is time-homogeneous. 

## Getting started
This package may be installed directly from GitHub using the __devtools__ package:

```
library(devtools)
install_github("fintzij/ECctmc",build_vignettes=TRUE) 
library(ECctmc)
vignette("ECctmc")
```

## References
Asger Hobolth and Eric A Stone. *Simulation from endpoint-conditioned, continuous-time Markov chains on a finite state space, with applications to molecular evolution.* The Annals of Applied Statistics, 3(3):1204, 2009.
