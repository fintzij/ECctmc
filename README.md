# ECctmc
## Simulating sample paths for endpoint-conditioned continuous time Markov chains.
The _ECctmc_ package is a lightweight C++ implementation of the modified rejection sampling and uniformization algorithms detailed in Hobolth and Stone (2009). 
These algorithms allow users to efficiently simulate sample paths for continuous time Markov chains (CTMC) with discrete state spaces conditional on the state of the chain at the endpoints of the sampling interval. 
This implementation assumes that state sojourn times are exponentially distributed, and that the process is time-homogeneous. 
