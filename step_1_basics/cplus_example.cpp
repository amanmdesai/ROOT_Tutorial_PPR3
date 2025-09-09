//Example usage
//root cplus_example.cpp

using namespace std; // simplifies code; need not write "std::"


void cplus_example(){ // function name same as file name

  // declare all the variables prior to using them (names of variable are arbitrary)
  Int_t numParticles;
  Float_t         eventweight; 
  vector<int>     *pid = new vector<int>; // unique particle identified (Truth value)
  vector<int>     *status= new vector<int>; //status of the particle - whether its decayed or exists in the final state
  vector<Double_t>   *px = new vector<Double_t>; //x component of the momentum of the particle
  vector<Double_t>   *py= new vector<Double_t>; //y component of the momentum of the particle
  vector<Double_t>   *pz= new vector<Double_t>; //z component of the momentum of the particle
  vector<Double_t>   *e= new vector<Double_t>; //energy of the particle

  // there are more variables, but we stick to the ones we need for this tutorial

  // open file

  TFile *fIn = new TFile("pph_mumu.root","read"); //opens the root file to read it
  TTree *tree = (TTree*)fIn->Get("events"); // get the ttree defined in this file

  // set address to the branches which are defined in this file
  // first entry refers to the name of variable in the root file and second entry is the name you would like to call it
  tree->SetBranchAddress("numParticles", &numParticles);
  tree->SetBranchAddress("eventweight", &eventweight);
  tree->SetBranchAddress("pid", &pid);
  tree->SetBranchAddress("status", &status);
  tree->SetBranchAddress("px", &px);
  tree->SetBranchAddress("py", &py);
  tree->SetBranchAddress("pz", &pz);
  tree->SetBranchAddress("energy", &e);


  Double_t xmin = 50.;
  Double_t xmax = 150.; //GeV
  Int_t bins = 50;

  //declares the histogram
  
  TH1 *h_higgsmass = new TH1D("higgs_mass","higgs_mass",bins,xmin,xmax); // higgs mass
  TH1 *h_higgspt = new TH1D("higgs_pt","higgs_pt",bins,0,xmax); // higgs transverse momentum
  TH1 *h_higgspx = new TH1D("higgs_px","higgs_px",bins,0,xmax); // higgs x component of momentum
  TH1 *h_higgspt_px = new TH1D("higgs_pt_px","higgs_pt_px",bins,-1,1); // ratio of px/pt
  TH1 *h_higgsphi = new TH1D("higgs_phi","higgs_phi",bins,-2,2);
  TH1 *h_higgsphi_o = new TH1D("higgs_phi_o","higgs_phi_o",bins,-2,2);

  TH1 *h_pxmu1 = new TH1D("h_pxmu1","h_pxmu1",bins,0,100); // higgs mass

  
  Int_t total_entries = tree->GetEntriesFast(); // Number of entries/events

  TLorentzVector mu1;// declare a four vector for muon 1, this can store particle momentum, energy, etc. 
  TLorentzVector mu2;// declare a four vector for muon 2, this can store particle momentum, energy, etc. 

  TLorentzVector higgs; 

  for(Int_t entry=0; entry < total_entries; ++entry){ // loop over events
    tree->GetEntry(entry); // access each entry in ttree
    
    mu1.SetPxPyPzE(0,0,0,0);
    mu2.SetPxPyPzE(0,0,0,0);

    for(Int_t i=0; i < pid->size(); ++i){ //loop over particles in a single event

      if(status->at(i) != +1){continue;} //considering only final state stable particles 
      
      // in practice we would need to check if muon actually exists or not, but lets keep things simple for now

      if(pid->at(i) == 13){ // this is the truth ID assigned to muon
        //cout << px->at(i) << endl;
        mu1.SetPxPyPzE(px->at(i),py->at(i),pz->at(i),e->at(i)); // set the value
      }

      if(pid->at(i) == -13){ // this is the truth ID assigned to antimuon
        mu2.SetPxPyPzE(px->at(i),py->at(i),pz->at(i),e->at(i)); // set the value
      }

    } // end loop over particles in a single event
  
    // do event physics here

    higgs = mu1 + mu2; 
    if(higgs.Pt() <= 0){continue;}
    h_higgsmass->Fill(higgs.M()); // .M() function extracts higgs mass
    h_higgspt->Fill(higgs.Pt());
    h_higgspx->Fill(higgs.Px());
    h_higgspt_px->Fill(higgs.Px()/higgs.Pt());
    h_higgsphi->Fill(higgs.Px()/higgs.Pt());
    h_higgsphi_o->Fill(TMath::Cos(higgs.Phi()));

    cout << higgs.Px()/higgs.Pt() << " " << TMath::Cos(higgs.Phi()) << endl;
  } //end of event for loop

  TCanvas *c1 = new TCanvas("c1","c1",800,800); //create a canvas object to draw 
  h_higgsmass->Draw("hist"); //plots the higgs mass
  c1->SaveAs("higgsmass_cplusplus.pdf","pdf"); //save plot
  
  TCanvas *c2 = new TCanvas("c2","c2",800,800); //create a canvas object to draw 
  h_higgspt->Draw("hist"); //plots the higgs mass
  c2->SaveAs("higgspt_cplusplus.pdf","pdf"); //save plot

  TCanvas *c3 = new TCanvas("c3","c3",800,800); //create a canvas object to draw 
  h_higgspt_px->Draw("hist"); //plots the higgs mass
  c3->SaveAs("higgspt_px_cplusplus.pdf","pdf"); //save plot

  TCanvas *c4 = new TCanvas("c4","c4",800,800); //create a canvas object to draw 
  h_higgsphi->Draw("hist"); //plots the higgs mass
  h_higgsphi->SetLineColor(4);
  h_higgsphi->SetLineStyle(9);
  h_higgsphi->SetLineWidth(6);
  h_higgsphi->SetMaximum(h_higgsphi->GetMaximum()*1.4);
  h_higgsphi_o->Draw("hist same");
  h_higgsphi_o->SetLineColor(8);
  h_higgsphi_o->SetLineStyle(7);
  h_higgsphi_o->SetLineWidth(10);
  TLegend* legend = new TLegend(0.2,0.75,0.4,0.85);
  legend->AddEntry(h_higgsphi,"Calculated higgs cos(phi)","l");
  legend->AddEntry(h_higgsphi_o,"Original higgs cos(phi)","l");
  legend->Draw();
  c4->SaveAs("higgsphi_cplusplus.pdf","pdf"); //save plot

} //end of code
