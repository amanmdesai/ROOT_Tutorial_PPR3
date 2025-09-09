 
# import necessary packages
import ROOT


#read file
fIn = ROOT.TFile("pph_mumu.root", "READ")
tree = fIn.Get("events")  

# get total number of events
entries = tree.GetEntriesFast()


# to get list of branches in a tree
for branch in tree.GetListOfBranches():
    print(branch.GetName())


#define histogram
xmin = 50.
xmax = 150.
bins = 50

h_higgsmass = ROOT.TH1D("higgs_mass","higgs_mass",bins,xmin,xmax)

# read entries
for entry in range(0,tree.GetEntriesFast()):
    # get the details on a given entry
    tree.GetEntry(entry)

    # define variables
    status = getattr(tree, "status")
    pid = getattr(tree, "pid")
    e = getattr(tree, "energy")
    px = getattr(tree, "px")
    py = getattr(tree, "py")
    pz = getattr(tree, "pz")

    mu1 = ROOT.TLorentzVector(0.,0.,0.,0.)
    mu2 = ROOT.TLorentzVector(0.,0.,0.,0.)

    # particle loop
    for part in range(0,pid.size()):

        if(status[part] != +1):
            continue

        if(pid[part] == 13):
            mu1.SetPxPyPzE(px[part], py[part], pz[part], e[part])
        if(pid[part] == -13):   
            mu2.SetPxPyPzE(px[part], py[part], pz[part], e[part])
        
    higgs = mu1 + mu2
    h_higgsmass.Fill(higgs.M())

# save canvas
c1 = ROOT.TCanvas("c1","c1",800,800)
h_higgsmass.Draw("hist")
c1.SaveAs("higgsmass_pyroot.pdf","pdf")