# ROOT_Tutorial_for_PPR3


## Running the files on Local Cluster

`cd /remote/nas00-0/users/<username>/`

and then 

`git clone https://github.com/amanmdesai/ROOT_Tutorial_PPR3`

```
setupATLAS
lsetup root
```

to setup software and hopefully it should work 



## Tasks for this exercise: 

### Read the ROOT File and make plot for the invariant mass of muon pair using:

1. C++

A. SETUP 

```
setupATLAS
lsetup "root 6.34.04-x86_64-el9-gcc13-opt"
```

To run the code on LXPLUS, use: 

1 Using C++ `root cplus_example.cpp`

and 

2 Using Python `python pyroot_example.py`

This will produce histograms.


Notice the difference in the results. This is not expected. But could be due to the significant figures after decimal that are considered for C++/Python.  


## Additional Information

1. Getting a list of variables from ROOT file:

To Open ROOT file:

use 

`root <name of file>`

2. Use `.ls` to view contents

3. The name of TTree in this case is `events`

4. use `events->Print()` to view contents of the ttree

