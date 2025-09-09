//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Mar 28 15:07:17 2025 by ROOT version 6.32.04
// from TTree reco/xAOD->NTuple tree
// found on file: user.ivyoung.42466021._000003.single_lepton_GN2.root
//////////////////////////////////////////////////////////

#ifndef reco_h
#define reco_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "vector"
#include "vector"
#include "vector"
#include "Math/GenVector/LorentzVector.h"
#include "Math/GenVector/PtEtaPhiM4D.h"

class reco {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.

   // Declaration of leaf types
   Float_t         actualInteractionsPerCrossing;
   Float_t         averageInteractionsPerCrossing;
   Float_t         weight_beamspot;
   ULong64_t       eventNumber;
   UInt_t          mcChannelNumber;
   UInt_t          runNumber;
   Bool_t          trigPassed_HLT_e120_lhloose;
   Bool_t          trigPassed_HLT_e140_lhloose_L1EM22VHI;
   Bool_t          trigPassed_HLT_e140_lhloose_nod0;
   Bool_t          trigPassed_HLT_e24_lhmedium_L1EM20VH;
   Bool_t          trigPassed_HLT_e26_lhtight_ivarloose_L1EM22VHI;
   Bool_t          trigPassed_HLT_e26_lhtight_nod0_ivarloose;
   Bool_t          trigPassed_HLT_e60_lhmedium;
   Bool_t          trigPassed_HLT_e60_lhmedium_L1EM22VHI;
   Bool_t          trigPassed_HLT_e60_lhmedium_nod0;
   vector<float>   *ufo_jet_eta;
   vector<float>   *ufo_jet_phi;
   vector<int>     *el_IFFClass;
   vector<float>   *el_charge;
   vector<float>   *el_eta;
   vector<float>   *el_phi;
   vector<float>   *jet_GN2v01;
   vector<float>   *jet_GN2v01_pb;
   vector<float>   *jet_GN2v01_pc;
   vector<float>   *jet_GN2v01_ptau;
   vector<float>   *jet_GN2v01_pu;
   vector<float>   *jet_eta;
   vector<char>    *jet_GN2v01_FixedCutBEff_65_select;
   vector<char>    *jet_GN2v01_FixedCutBEff_70_select;
   vector<char>    *jet_GN2v01_FixedCutBEff_77_select;
   vector<char>    *jet_GN2v01_FixedCutBEff_85_select;
   vector<float>   *jet_phi;
   vector<int>     *mu_IFFClass;
   vector<float>   *mu_charge;
   vector<float>   *mu_eta;
   vector<float>   *mu_phi;
   Float_t         spin_D_cos_phi_NOSYS;
   Float_t         spin_D_opthadpol_cos_phi_NOSYS;
   Float_t         weight_pileup_NOSYS;
   Float_t         spin_SDM_cos_phi_plus_NOSYS;
   Float_t         spin_SDM_cos_theta_helicity_m_NOSYS;
   Float_t         spin_SDM_cos_theta_helicity_p_NOSYS;
   Float_t         spin_SDM_cos_theta_raxis_m_NOSYS;
   Float_t         spin_SDM_cos_theta_raxis_p_NOSYS;
   Float_t         spin_SDM_cos_theta_top_NOSYS;
   Float_t         spin_SDM_cos_theta_transverse_m_NOSYS;
   Float_t         spin_SDM_cos_theta_transverse_p_NOSYS;
   Float_t         spin_SDM_cos_theta_x_m_NOSYS;
   Float_t         spin_SDM_cos_theta_x_p_NOSYS;
   Float_t         spin_SDM_cos_theta_y_m_NOSYS;
   Float_t         spin_SDM_cos_theta_y_p_NOSYS;
   Float_t         spin_SDM_cos_theta_z_m_NOSYS;
   Float_t         spin_SDM_cos_theta_z_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_phi_plus_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_helicity_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_helicity_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_raxis_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_raxis_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_top_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_transverse_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_transverse_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_x_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_x_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_y_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_y_p_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_z_m_NOSYS;
   Float_t         spin_SDM_opthadpol_cos_theta_z_p_NOSYS;
   Float_t         spin_SDM_opthadpol_theta_p_NOSYS;
   Float_t         spin_SDM_theta_p_NOSYS;
   Float_t         weight_mc_NOSYS;
   Float_t         globalTriggerEffSF_NOSYS;
   Char_t          globalTriggerMatch_NOSYS;
   Float_t         weight_jvt_effSF_NOSYS;
   Float_t         weight_leptonSF_tight_NOSYS;
   Char_t          pass_SUBcommon2_NOSYS;
   Char_t          pass_SUBcommon_NOSYS;
   Char_t          pass_ejets_NOSYS;
   Char_t          pass_mujets_NOSYS;
   Char_t          pass_mujets_FF_NOSYS;
   Int_t           pass_ljet_analysis_NOSYS;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_W_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_W_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_Wdecay1_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_Wdecay1_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_Wdecay2_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_Wdecay2_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
   Float_t         reco_b_beta_opt_NOSYS;
   Float_t         reco_b_beta_tbar_NOSYS;
   Float_t         reco_b_beta_top_NOSYS;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_b_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_b_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_b_jet_selected_FF_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
   Int_t           reco_bjet_in_ljet_NOSYS;
   Float_t         reco_deltaR_closest_jet_largeR_jet_NOSYS;
   Float_t         reco_deltaR_largeR_jet_bjet_NOSYS;
   Float_t         reco_deltaR_lepton_closest_jet_NOSYS;
   Int_t           reco_dilepton_event_NOSYS;
   Int_t           reco_event_type_NOSYS;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_hadronic_W_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_high_pt_jet_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_jet_spin_analyser_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_lepton_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_lepton_spin_analyser_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_leptonic_W_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_low_pt_jet_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_opthadpol_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_opthadpol_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_softestdecay_from_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_softestdecay_from_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_tbar_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_tbar_decay_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_top_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
 //ROOT::Math::LorentzVector<ROOT::Math::PtEtaPhiM4D<Double32_t> > *reco_top_decay_4vect_NOSYS;
   Double32_t      fCoordinates_fPt;
   Double32_t      fCoordinates_fEta;
   Double32_t      fCoordinates_fPhi;
   Double32_t      fCoordinates_fM;
   vector<float>   *ufo_jet_m_NOSYS;
   vector<float>   *ufo_jet_pt_NOSYS;
   vector<char>    *el_select_tight_NOSYS;
   vector<float>   *el_e_NOSYS;
   vector<float>   *el_pt_NOSYS;
   vector<char>    *jet_select_GN2v01_FixedCutBEff_65_NOSYS;
   vector<char>    *jet_select_GN2v01_FixedCutBEff_70_NOSYS;
   vector<char>    *jet_select_GN2v01_FixedCutBEff_77_NOSYS;
   vector<char>    *jet_select_GN2v01_FixedCutBEff_85_NOSYS;
   vector<char>    *jet_select_baselineJvt_NOSYS;
   vector<float>   *jet_e_NOSYS;
   vector<float>   *jet_pt_NOSYS;
   vector<char>    *mu_select_tight_NOSYS;
   vector<float>   *mu_e_NOSYS;
   vector<float>   *mu_TTVA_effSF_tight_NOSYS;
   vector<float>   *mu_isol_effSF_tight_NOSYS;
   vector<float>   *mu_reco_effSF_tight_NOSYS;
   vector<float>   *mu_pt_NOSYS;
   vector<char>    *rc_jet_select_passed_sel_NOSYS;
   vector<float>   *rc_jet_e_NOSYS;
   vector<float>   *rc_jet_eta_NOSYS;
   vector<float>   *rc_jet_m_NOSYS;
   vector<float>   *rc_jet_phi_NOSYS;
   vector<float>   *rc_jet_pt_NOSYS;
   vector<vector<int> > *rc_jet_small_r_jet_indices_NOSYS;
   Float_t         met_met_NOSYS;
   Float_t         met_phi_NOSYS;
   Float_t         met_significance_NOSYS;
   Float_t         met_sumet_NOSYS;

   // List of branches
   TBranch        *b_actualInteractionsPerCrossing;   //!
   TBranch        *b_averageInteractionsPerCrossing;   //!
   TBranch        *b_weight_beamspot;   //!
   TBranch        *b_eventNumber;   //!
   TBranch        *b_mcChannelNumber;   //!
   TBranch        *b_runNumber;   //!
   TBranch        *b_trigPassed_HLT_e120_lhloose;   //!
   TBranch        *b_trigPassed_HLT_e140_lhloose_L1EM22VHI;   //!
   TBranch        *b_trigPassed_HLT_e140_lhloose_nod0;   //!
   TBranch        *b_trigPassed_HLT_e24_lhmedium_L1EM20VH;   //!
   TBranch        *b_trigPassed_HLT_e26_lhtight_ivarloose_L1EM22VHI;   //!
   TBranch        *b_trigPassed_HLT_e26_lhtight_nod0_ivarloose;   //!
   TBranch        *b_trigPassed_HLT_e60_lhmedium;   //!
   TBranch        *b_trigPassed_HLT_e60_lhmedium_L1EM22VHI;   //!
   TBranch        *b_trigPassed_HLT_e60_lhmedium_nod0;   //!
   TBranch        *b_ufo_jet_eta;   //!
   TBranch        *b_ufo_jet_phi;   //!
   TBranch        *b_el_IFFClass;   //!
   TBranch        *b_el_charge;   //!
   TBranch        *b_el_eta;   //!
   TBranch        *b_el_phi;   //!
   TBranch        *b_jet_GN2v01;   //!
   TBranch        *b_jet_GN2v01_pb;   //!
   TBranch        *b_jet_GN2v01_pc;   //!
   TBranch        *b_jet_GN2v01_ptau;   //!
   TBranch        *b_jet_GN2v01_pu;   //!
   TBranch        *b_jet_eta;   //!
   TBranch        *b_jet_GN2v01_FixedCutBEff_65_select;   //!
   TBranch        *b_jet_GN2v01_FixedCutBEff_70_select;   //!
   TBranch        *b_jet_GN2v01_FixedCutBEff_77_select;   //!
   TBranch        *b_jet_GN2v01_FixedCutBEff_85_select;   //!
   TBranch        *b_jet_phi;   //!
   TBranch        *b_mu_IFFClass;   //!
   TBranch        *b_mu_charge;   //!
   TBranch        *b_mu_eta;   //!
   TBranch        *b_mu_phi;   //!
   TBranch        *b_spin_D_cos_phi_NOSYS;   //!
   TBranch        *b_spin_D_opthadpol_cos_phi_NOSYS;   //!
   TBranch        *b_weight_pileup_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_phi_plus_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_helicity_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_helicity_p_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_raxis_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_raxis_p_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_top_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_transverse_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_transverse_p_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_x_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_x_p_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_y_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_y_p_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_z_m_NOSYS;   //!
   TBranch        *b_spin_SDM_cos_theta_z_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_phi_plus_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_helicity_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_helicity_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_raxis_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_raxis_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_top_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_transverse_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_transverse_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_x_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_x_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_y_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_y_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_z_m_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_cos_theta_z_p_NOSYS;   //!
   TBranch        *b_spin_SDM_opthadpol_theta_p_NOSYS;   //!
   TBranch        *b_spin_SDM_theta_p_NOSYS;   //!
   TBranch        *b_weight_mc_NOSYS;   //!
   TBranch        *b_globalTriggerEffSF_NOSYS;   //!
   TBranch        *b_globalTriggerMatch_NOSYS;   //!
   TBranch        *b_weight_jvt_effSF_NOSYS;   //!
   TBranch        *b_weight_leptonSF_tight_NOSYS;   //!
   TBranch        *b_pass_SUBcommon2_NOSYS;   //!
   TBranch        *b_pass_SUBcommon_NOSYS;   //!
   TBranch        *b_pass_ejets_NOSYS;   //!
   TBranch        *b_pass_mujets_NOSYS;   //!
   TBranch        *b_pass_mujets_FF_NOSYS;   //!
   TBranch        *b_pass_ljet_analysis_NOSYS;   //!
   TBranch        *b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_W_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_W_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_W_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_W_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_b_beta_opt_NOSYS;   //!
   TBranch        *b_reco_b_beta_tbar_NOSYS;   //!
   TBranch        *b_reco_b_beta_top_NOSYS;   //!
   TBranch        *b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_b_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_b_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_b_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_b_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_bjet_in_ljet_NOSYS;   //!
   TBranch        *b_reco_deltaR_closest_jet_largeR_jet_NOSYS;   //!
   TBranch        *b_reco_deltaR_largeR_jet_bjet_NOSYS;   //!
   TBranch        *b_reco_deltaR_lepton_closest_jet_NOSYS;   //!
   TBranch        *b_reco_dilepton_event_NOSYS;   //!
   TBranch        *b_reco_event_type_NOSYS;   //!
   TBranch        *b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_lepton_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_lepton_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_lepton_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_lepton_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_tbar_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_tbar_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_tbar_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_tbar_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_top_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_top_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_top_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_top_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_reco_top_decay_4vect_NOSYS_fCoordinates_fPt;   //!
   TBranch        *b_reco_top_decay_4vect_NOSYS_fCoordinates_fEta;   //!
   TBranch        *b_reco_top_decay_4vect_NOSYS_fCoordinates_fPhi;   //!
   TBranch        *b_reco_top_decay_4vect_NOSYS_fCoordinates_fM;   //!
   TBranch        *b_ufo_jet_m_NOSYS;   //!
   TBranch        *b_ufo_jet_pt_NOSYS;   //!
   TBranch        *b_el_select_tight_NOSYS;   //!
   TBranch        *b_el_e_NOSYS;   //!
   TBranch        *b_el_pt_NOSYS;   //!
   TBranch        *b_jet_select_GN2v01_FixedCutBEff_65_NOSYS;   //!
   TBranch        *b_jet_select_GN2v01_FixedCutBEff_70_NOSYS;   //!
   TBranch        *b_jet_select_GN2v01_FixedCutBEff_77_NOSYS;   //!
   TBranch        *b_jet_select_GN2v01_FixedCutBEff_85_NOSYS;   //!
   TBranch        *b_jet_select_baselineJvt_NOSYS;   //!
   TBranch        *b_jet_e_NOSYS;   //!
   TBranch        *b_jet_pt_NOSYS;   //!
   TBranch        *b_mu_select_tight_NOSYS;   //!
   TBranch        *b_mu_e_NOSYS;   //!
   TBranch        *b_mu_TTVA_effSF_tight_NOSYS;   //!
   TBranch        *b_mu_isol_effSF_tight_NOSYS;   //!
   TBranch        *b_mu_reco_effSF_tight_NOSYS;   //!
   TBranch        *b_mu_pt_NOSYS;   //!
   TBranch        *b_rc_jet_select_passed_sel_NOSYS;   //!
   TBranch        *b_rc_jet_e_NOSYS;   //!
   TBranch        *b_rc_jet_eta_NOSYS;   //!
   TBranch        *b_rc_jet_m_NOSYS;   //!
   TBranch        *b_rc_jet_phi_NOSYS;   //!
   TBranch        *b_rc_jet_pt_NOSYS;   //!
   TBranch        *b_rc_jet_small_r_jet_indices_NOSYS;   //!
   TBranch        *b_met_met_NOSYS;   //!
   TBranch        *b_met_phi_NOSYS;   //!
   TBranch        *b_met_significance_NOSYS;   //!
   TBranch        *b_met_sumet_NOSYS;   //!

   reco(TTree *tree=0);
   virtual ~reco();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   virtual void     Loop();
   virtual bool     Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef reco_cxx
reco::reco(TTree *tree) : fChain(0) 
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.
   if (tree == 0) {
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("user.ivyoung.42466021._000003.single_lepton_GN2.root");
      if (!f || !f->IsOpen()) {
         f = new TFile("user.ivyoung.42466021._000003.single_lepton_GN2.root");
      }
      f->GetObject("reco",tree);

   }
   Init(tree);
}

reco::~reco()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t reco::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t reco::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void reco::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   ufo_jet_eta = 0;
   ufo_jet_phi = 0;
   el_IFFClass = 0;
   el_charge = 0;
   el_eta = 0;
   el_phi = 0;
   jet_GN2v01 = 0;
   jet_GN2v01_pb = 0;
   jet_GN2v01_pc = 0;
   jet_GN2v01_ptau = 0;
   jet_GN2v01_pu = 0;
   jet_eta = 0;
   jet_GN2v01_FixedCutBEff_65_select = 0;
   jet_GN2v01_FixedCutBEff_70_select = 0;
   jet_GN2v01_FixedCutBEff_77_select = 0;
   jet_GN2v01_FixedCutBEff_85_select = 0;
   jet_phi = 0;
   mu_IFFClass = 0;
   mu_charge = 0;
   mu_eta = 0;
   mu_phi = 0;
   ufo_jet_m_NOSYS = 0;
   ufo_jet_pt_NOSYS = 0;
   el_select_tight_NOSYS = 0;
   el_e_NOSYS = 0;
   el_pt_NOSYS = 0;
   jet_select_GN2v01_FixedCutBEff_65_NOSYS = 0;
   jet_select_GN2v01_FixedCutBEff_70_NOSYS = 0;
   jet_select_GN2v01_FixedCutBEff_77_NOSYS = 0;
   jet_select_GN2v01_FixedCutBEff_85_NOSYS = 0;
   jet_select_baselineJvt_NOSYS = 0;
   jet_e_NOSYS = 0;
   jet_pt_NOSYS = 0;
   mu_select_tight_NOSYS = 0;
   mu_e_NOSYS = 0;
   mu_TTVA_effSF_tight_NOSYS = 0;
   mu_isol_effSF_tight_NOSYS = 0;
   mu_reco_effSF_tight_NOSYS = 0;
   mu_pt_NOSYS = 0;
   rc_jet_select_passed_sel_NOSYS = 0;
   rc_jet_e_NOSYS = 0;
   rc_jet_eta_NOSYS = 0;
   rc_jet_m_NOSYS = 0;
   rc_jet_phi_NOSYS = 0;
   rc_jet_pt_NOSYS = 0;
   rc_jet_small_r_jet_indices_NOSYS = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("actualInteractionsPerCrossing", &actualInteractionsPerCrossing, &b_actualInteractionsPerCrossing);
   fChain->SetBranchAddress("averageInteractionsPerCrossing", &averageInteractionsPerCrossing, &b_averageInteractionsPerCrossing);
   fChain->SetBranchAddress("weight_beamspot", &weight_beamspot, &b_weight_beamspot);
   fChain->SetBranchAddress("eventNumber", &eventNumber, &b_eventNumber);
   fChain->SetBranchAddress("mcChannelNumber", &mcChannelNumber, &b_mcChannelNumber);
   fChain->SetBranchAddress("runNumber", &runNumber, &b_runNumber);
   fChain->SetBranchAddress("trigPassed_HLT_e120_lhloose", &trigPassed_HLT_e120_lhloose, &b_trigPassed_HLT_e120_lhloose);
   fChain->SetBranchAddress("trigPassed_HLT_e140_lhloose_L1EM22VHI", &trigPassed_HLT_e140_lhloose_L1EM22VHI, &b_trigPassed_HLT_e140_lhloose_L1EM22VHI);
   fChain->SetBranchAddress("trigPassed_HLT_e140_lhloose_nod0", &trigPassed_HLT_e140_lhloose_nod0, &b_trigPassed_HLT_e140_lhloose_nod0);
   fChain->SetBranchAddress("trigPassed_HLT_e24_lhmedium_L1EM20VH", &trigPassed_HLT_e24_lhmedium_L1EM20VH, &b_trigPassed_HLT_e24_lhmedium_L1EM20VH);
   fChain->SetBranchAddress("trigPassed_HLT_e26_lhtight_ivarloose_L1EM22VHI", &trigPassed_HLT_e26_lhtight_ivarloose_L1EM22VHI, &b_trigPassed_HLT_e26_lhtight_ivarloose_L1EM22VHI);
   fChain->SetBranchAddress("trigPassed_HLT_e26_lhtight_nod0_ivarloose", &trigPassed_HLT_e26_lhtight_nod0_ivarloose, &b_trigPassed_HLT_e26_lhtight_nod0_ivarloose);
   fChain->SetBranchAddress("trigPassed_HLT_e60_lhmedium", &trigPassed_HLT_e60_lhmedium, &b_trigPassed_HLT_e60_lhmedium);
   fChain->SetBranchAddress("trigPassed_HLT_e60_lhmedium_L1EM22VHI", &trigPassed_HLT_e60_lhmedium_L1EM22VHI, &b_trigPassed_HLT_e60_lhmedium_L1EM22VHI);
   fChain->SetBranchAddress("trigPassed_HLT_e60_lhmedium_nod0", &trigPassed_HLT_e60_lhmedium_nod0, &b_trigPassed_HLT_e60_lhmedium_nod0);
   fChain->SetBranchAddress("ufo_jet_eta", &ufo_jet_eta, &b_ufo_jet_eta);
   fChain->SetBranchAddress("ufo_jet_phi", &ufo_jet_phi, &b_ufo_jet_phi);
   fChain->SetBranchAddress("el_IFFClass", &el_IFFClass, &b_el_IFFClass);
   fChain->SetBranchAddress("el_charge", &el_charge, &b_el_charge);
   fChain->SetBranchAddress("el_eta", &el_eta, &b_el_eta);
   fChain->SetBranchAddress("el_phi", &el_phi, &b_el_phi);
   fChain->SetBranchAddress("jet_GN2v01", &jet_GN2v01, &b_jet_GN2v01);
   fChain->SetBranchAddress("jet_GN2v01_pb", &jet_GN2v01_pb, &b_jet_GN2v01_pb);
   fChain->SetBranchAddress("jet_GN2v01_pc", &jet_GN2v01_pc, &b_jet_GN2v01_pc);
   fChain->SetBranchAddress("jet_GN2v01_ptau", &jet_GN2v01_ptau, &b_jet_GN2v01_ptau);
   fChain->SetBranchAddress("jet_GN2v01_pu", &jet_GN2v01_pu, &b_jet_GN2v01_pu);
   fChain->SetBranchAddress("jet_eta", &jet_eta, &b_jet_eta);
   fChain->SetBranchAddress("jet_GN2v01_FixedCutBEff_65_select", &jet_GN2v01_FixedCutBEff_65_select, &b_jet_GN2v01_FixedCutBEff_65_select);
   fChain->SetBranchAddress("jet_GN2v01_FixedCutBEff_70_select", &jet_GN2v01_FixedCutBEff_70_select, &b_jet_GN2v01_FixedCutBEff_70_select);
   fChain->SetBranchAddress("jet_GN2v01_FixedCutBEff_77_select", &jet_GN2v01_FixedCutBEff_77_select, &b_jet_GN2v01_FixedCutBEff_77_select);
   fChain->SetBranchAddress("jet_GN2v01_FixedCutBEff_85_select", &jet_GN2v01_FixedCutBEff_85_select, &b_jet_GN2v01_FixedCutBEff_85_select);
   fChain->SetBranchAddress("jet_phi", &jet_phi, &b_jet_phi);
   fChain->SetBranchAddress("mu_IFFClass", &mu_IFFClass, &b_mu_IFFClass);
   fChain->SetBranchAddress("mu_charge", &mu_charge, &b_mu_charge);
   fChain->SetBranchAddress("mu_eta", &mu_eta, &b_mu_eta);
   fChain->SetBranchAddress("mu_phi", &mu_phi, &b_mu_phi);
   fChain->SetBranchAddress("spin_D_cos_phi_NOSYS", &spin_D_cos_phi_NOSYS, &b_spin_D_cos_phi_NOSYS);
   fChain->SetBranchAddress("spin_D_opthadpol_cos_phi_NOSYS", &spin_D_opthadpol_cos_phi_NOSYS, &b_spin_D_opthadpol_cos_phi_NOSYS);
   fChain->SetBranchAddress("weight_pileup_NOSYS", &weight_pileup_NOSYS, &b_weight_pileup_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_phi_plus_NOSYS", &spin_SDM_cos_phi_plus_NOSYS, &b_spin_SDM_cos_phi_plus_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_helicity_m_NOSYS", &spin_SDM_cos_theta_helicity_m_NOSYS, &b_spin_SDM_cos_theta_helicity_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_helicity_p_NOSYS", &spin_SDM_cos_theta_helicity_p_NOSYS, &b_spin_SDM_cos_theta_helicity_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_raxis_m_NOSYS", &spin_SDM_cos_theta_raxis_m_NOSYS, &b_spin_SDM_cos_theta_raxis_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_raxis_p_NOSYS", &spin_SDM_cos_theta_raxis_p_NOSYS, &b_spin_SDM_cos_theta_raxis_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_top_NOSYS", &spin_SDM_cos_theta_top_NOSYS, &b_spin_SDM_cos_theta_top_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_transverse_m_NOSYS", &spin_SDM_cos_theta_transverse_m_NOSYS, &b_spin_SDM_cos_theta_transverse_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_transverse_p_NOSYS", &spin_SDM_cos_theta_transverse_p_NOSYS, &b_spin_SDM_cos_theta_transverse_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_x_m_NOSYS", &spin_SDM_cos_theta_x_m_NOSYS, &b_spin_SDM_cos_theta_x_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_x_p_NOSYS", &spin_SDM_cos_theta_x_p_NOSYS, &b_spin_SDM_cos_theta_x_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_y_m_NOSYS", &spin_SDM_cos_theta_y_m_NOSYS, &b_spin_SDM_cos_theta_y_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_y_p_NOSYS", &spin_SDM_cos_theta_y_p_NOSYS, &b_spin_SDM_cos_theta_y_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_z_m_NOSYS", &spin_SDM_cos_theta_z_m_NOSYS, &b_spin_SDM_cos_theta_z_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_cos_theta_z_p_NOSYS", &spin_SDM_cos_theta_z_p_NOSYS, &b_spin_SDM_cos_theta_z_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_phi_plus_NOSYS", &spin_SDM_opthadpol_cos_phi_plus_NOSYS, &b_spin_SDM_opthadpol_cos_phi_plus_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_helicity_m_NOSYS", &spin_SDM_opthadpol_cos_theta_helicity_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_helicity_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_helicity_p_NOSYS", &spin_SDM_opthadpol_cos_theta_helicity_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_helicity_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_raxis_m_NOSYS", &spin_SDM_opthadpol_cos_theta_raxis_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_raxis_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_raxis_p_NOSYS", &spin_SDM_opthadpol_cos_theta_raxis_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_raxis_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_top_NOSYS", &spin_SDM_opthadpol_cos_theta_top_NOSYS, &b_spin_SDM_opthadpol_cos_theta_top_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_transverse_m_NOSYS", &spin_SDM_opthadpol_cos_theta_transverse_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_transverse_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_transverse_p_NOSYS", &spin_SDM_opthadpol_cos_theta_transverse_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_transverse_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_x_m_NOSYS", &spin_SDM_opthadpol_cos_theta_x_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_x_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_x_p_NOSYS", &spin_SDM_opthadpol_cos_theta_x_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_x_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_y_m_NOSYS", &spin_SDM_opthadpol_cos_theta_y_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_y_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_y_p_NOSYS", &spin_SDM_opthadpol_cos_theta_y_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_y_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_z_m_NOSYS", &spin_SDM_opthadpol_cos_theta_z_m_NOSYS, &b_spin_SDM_opthadpol_cos_theta_z_m_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_cos_theta_z_p_NOSYS", &spin_SDM_opthadpol_cos_theta_z_p_NOSYS, &b_spin_SDM_opthadpol_cos_theta_z_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_opthadpol_theta_p_NOSYS", &spin_SDM_opthadpol_theta_p_NOSYS, &b_spin_SDM_opthadpol_theta_p_NOSYS);
   fChain->SetBranchAddress("spin_SDM_theta_p_NOSYS", &spin_SDM_theta_p_NOSYS, &b_spin_SDM_theta_p_NOSYS);
   fChain->SetBranchAddress("weight_mc_NOSYS", &weight_mc_NOSYS, &b_weight_mc_NOSYS);
   fChain->SetBranchAddress("globalTriggerEffSF_NOSYS", &globalTriggerEffSF_NOSYS, &b_globalTriggerEffSF_NOSYS);
   fChain->SetBranchAddress("globalTriggerMatch_NOSYS", &globalTriggerMatch_NOSYS, &b_globalTriggerMatch_NOSYS);
   fChain->SetBranchAddress("weight_jvt_effSF_NOSYS", &weight_jvt_effSF_NOSYS, &b_weight_jvt_effSF_NOSYS);
   fChain->SetBranchAddress("weight_leptonSF_tight_NOSYS", &weight_leptonSF_tight_NOSYS, &b_weight_leptonSF_tight_NOSYS);
   fChain->SetBranchAddress("pass_SUBcommon2_NOSYS", &pass_SUBcommon2_NOSYS, &b_pass_SUBcommon2_NOSYS);
   fChain->SetBranchAddress("pass_SUBcommon_NOSYS", &pass_SUBcommon_NOSYS, &b_pass_SUBcommon_NOSYS);
   fChain->SetBranchAddress("pass_ejets_NOSYS", &pass_ejets_NOSYS, &b_pass_ejets_NOSYS);
   fChain->SetBranchAddress("pass_mujets_NOSYS", &pass_mujets_NOSYS, &b_pass_mujets_NOSYS);
   fChain->SetBranchAddress("pass_mujets_FF_NOSYS", &pass_mujets_FF_NOSYS, &b_pass_mujets_FF_NOSYS);
   fChain->SetBranchAddress("pass_ljet_analysis_NOSYS", &pass_ljet_analysis_NOSYS, &b_pass_ljet_analysis_NOSYS);
   fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fPt);
   fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fEta);
   fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
   fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_W_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_W_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_W_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_W_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_W_from_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_Wdecay1_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_Wdecay1_from_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_Wdecay2_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_Wdecay2_from_top_4vect_NOSYS_fCoordinates_fM);
   fChain->SetBranchAddress("reco_b_beta_opt_NOSYS", &reco_b_beta_opt_NOSYS, &b_reco_b_beta_opt_NOSYS);
   fChain->SetBranchAddress("reco_b_beta_tbar_NOSYS", &reco_b_beta_tbar_NOSYS, &b_reco_b_beta_tbar_NOSYS);
   fChain->SetBranchAddress("reco_b_beta_top_NOSYS", &reco_b_beta_top_NOSYS, &b_reco_b_beta_top_NOSYS);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_b_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_b_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_b_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_b_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_b_from_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_b_jet_selected_FF_4vect_NOSYS_fCoordinates_fM);
   fChain->SetBranchAddress("reco_bjet_in_ljet_NOSYS", &reco_bjet_in_ljet_NOSYS, &b_reco_bjet_in_ljet_NOSYS);
   fChain->SetBranchAddress("reco_deltaR_closest_jet_largeR_jet_NOSYS", &reco_deltaR_closest_jet_largeR_jet_NOSYS, &b_reco_deltaR_closest_jet_largeR_jet_NOSYS);
   fChain->SetBranchAddress("reco_deltaR_largeR_jet_bjet_NOSYS", &reco_deltaR_largeR_jet_bjet_NOSYS, &b_reco_deltaR_largeR_jet_bjet_NOSYS);
   fChain->SetBranchAddress("reco_deltaR_lepton_closest_jet_NOSYS", &reco_deltaR_lepton_closest_jet_NOSYS, &b_reco_deltaR_lepton_closest_jet_NOSYS);
   fChain->SetBranchAddress("reco_dilepton_event_NOSYS", &reco_dilepton_event_NOSYS, &b_reco_dilepton_event_NOSYS);
   fChain->SetBranchAddress("reco_event_type_NOSYS", &reco_event_type_NOSYS, &b_reco_event_type_NOSYS);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_hadronic_W_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_high_pt_jet_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_jet_spin_analyser_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_lepton_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_lepton_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_lepton_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_lepton_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_lepton_spin_analyser_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_leptonic_W_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_low_pt_jet_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_opthadpol_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_opthadpol_from_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_softestdecay_from_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_softestdecay_from_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_tbar_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_tbar_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_tbar_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_tbar_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_tbar_decay_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_top_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_top_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_top_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_top_4vect_NOSYS_fCoordinates_fM);
//    fChain->SetBranchAddress("fCoordinates.fPt", &fCoordinates_fPt, &b_reco_top_decay_4vect_NOSYS_fCoordinates_fPt);
//    fChain->SetBranchAddress("fCoordinates.fEta", &fCoordinates_fEta, &b_reco_top_decay_4vect_NOSYS_fCoordinates_fEta);
//    fChain->SetBranchAddress("fCoordinates.fPhi", &fCoordinates_fPhi, &b_reco_top_decay_4vect_NOSYS_fCoordinates_fPhi);
//    fChain->SetBranchAddress("fCoordinates.fM", &fCoordinates_fM, &b_reco_top_decay_4vect_NOSYS_fCoordinates_fM);
   fChain->SetBranchAddress("ufo_jet_m_NOSYS", &ufo_jet_m_NOSYS, &b_ufo_jet_m_NOSYS);
   fChain->SetBranchAddress("ufo_jet_pt_NOSYS", &ufo_jet_pt_NOSYS, &b_ufo_jet_pt_NOSYS);
   fChain->SetBranchAddress("el_select_tight_NOSYS", &el_select_tight_NOSYS, &b_el_select_tight_NOSYS);
   fChain->SetBranchAddress("el_e_NOSYS", &el_e_NOSYS, &b_el_e_NOSYS);
   fChain->SetBranchAddress("el_pt_NOSYS", &el_pt_NOSYS, &b_el_pt_NOSYS);
   fChain->SetBranchAddress("jet_select_GN2v01_FixedCutBEff_65_NOSYS", &jet_select_GN2v01_FixedCutBEff_65_NOSYS, &b_jet_select_GN2v01_FixedCutBEff_65_NOSYS);
   fChain->SetBranchAddress("jet_select_GN2v01_FixedCutBEff_70_NOSYS", &jet_select_GN2v01_FixedCutBEff_70_NOSYS, &b_jet_select_GN2v01_FixedCutBEff_70_NOSYS);
   fChain->SetBranchAddress("jet_select_GN2v01_FixedCutBEff_77_NOSYS", &jet_select_GN2v01_FixedCutBEff_77_NOSYS, &b_jet_select_GN2v01_FixedCutBEff_77_NOSYS);
   fChain->SetBranchAddress("jet_select_GN2v01_FixedCutBEff_85_NOSYS", &jet_select_GN2v01_FixedCutBEff_85_NOSYS, &b_jet_select_GN2v01_FixedCutBEff_85_NOSYS);
   fChain->SetBranchAddress("jet_select_baselineJvt_NOSYS", &jet_select_baselineJvt_NOSYS, &b_jet_select_baselineJvt_NOSYS);
   fChain->SetBranchAddress("jet_e_NOSYS", &jet_e_NOSYS, &b_jet_e_NOSYS);
   fChain->SetBranchAddress("jet_pt_NOSYS", &jet_pt_NOSYS, &b_jet_pt_NOSYS);
   fChain->SetBranchAddress("mu_select_tight_NOSYS", &mu_select_tight_NOSYS, &b_mu_select_tight_NOSYS);
   fChain->SetBranchAddress("mu_e_NOSYS", &mu_e_NOSYS, &b_mu_e_NOSYS);
   fChain->SetBranchAddress("mu_TTVA_effSF_tight_NOSYS", &mu_TTVA_effSF_tight_NOSYS, &b_mu_TTVA_effSF_tight_NOSYS);
   fChain->SetBranchAddress("mu_isol_effSF_tight_NOSYS", &mu_isol_effSF_tight_NOSYS, &b_mu_isol_effSF_tight_NOSYS);
   fChain->SetBranchAddress("mu_reco_effSF_tight_NOSYS", &mu_reco_effSF_tight_NOSYS, &b_mu_reco_effSF_tight_NOSYS);
   fChain->SetBranchAddress("mu_pt_NOSYS", &mu_pt_NOSYS, &b_mu_pt_NOSYS);
   fChain->SetBranchAddress("rc_jet_select_passed_sel_NOSYS", &rc_jet_select_passed_sel_NOSYS, &b_rc_jet_select_passed_sel_NOSYS);
   fChain->SetBranchAddress("rc_jet_e_NOSYS", &rc_jet_e_NOSYS, &b_rc_jet_e_NOSYS);
   fChain->SetBranchAddress("rc_jet_eta_NOSYS", &rc_jet_eta_NOSYS, &b_rc_jet_eta_NOSYS);
   fChain->SetBranchAddress("rc_jet_m_NOSYS", &rc_jet_m_NOSYS, &b_rc_jet_m_NOSYS);
   fChain->SetBranchAddress("rc_jet_phi_NOSYS", &rc_jet_phi_NOSYS, &b_rc_jet_phi_NOSYS);
   fChain->SetBranchAddress("rc_jet_pt_NOSYS", &rc_jet_pt_NOSYS, &b_rc_jet_pt_NOSYS);
   fChain->SetBranchAddress("rc_jet_small_r_jet_indices_NOSYS", &rc_jet_small_r_jet_indices_NOSYS, &b_rc_jet_small_r_jet_indices_NOSYS);
   fChain->SetBranchAddress("met_met_NOSYS", &met_met_NOSYS, &b_met_met_NOSYS);
   fChain->SetBranchAddress("met_phi_NOSYS", &met_phi_NOSYS, &b_met_phi_NOSYS);
   fChain->SetBranchAddress("met_significance_NOSYS", &met_significance_NOSYS, &b_met_significance_NOSYS);
   fChain->SetBranchAddress("met_sumet_NOSYS", &met_sumet_NOSYS, &b_met_sumet_NOSYS);
   Notify();
}

bool reco::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return true;
}

void reco::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t reco::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef reco_cxx
