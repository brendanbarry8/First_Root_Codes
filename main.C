
#include <iostream>
#include <string>
//TFile *fh = new TFile("C:\\Indstu\\Histo.cpp");
#include "C:\Indstu\Histo.h"
//#include "Histo.cpp"
//using namespace std;

//Getting File and Tree
TFile *f = new TFile("C:\\Indstu\\my.output.0.0.root");
TTree *llllTree = (TTree*)f->Get("Nominal/llllTree");


//Function to Call Function to Make Histograms
int main()
//int main(char& H_name, char& Ht_name, char& H_data, char& Ht_data, int& bins, int& min, int& max, int& i)
{
	Histo H;

	cout << "" << endl;
	cout << "--Made it Inside Main Function" << endl;

	//For One Lepton
	/*
	char H_name = "h_l_eta";
	char Ht_name = "h_l_eta_truth";
	char H_data = "l_tlv_eta";
	char Ht_data = "truth_l_tlv_eta";
	int bins = 200;
	int min = -5;
	int max = 5;
	int i = 1;
	H.Histo_mkr(H_name, Ht_name, H_data, Ht_data, bins, min, max, i);
	*/
	H.Histo_mkr('h_l_eta', 'h_l_eta_truth', 'l_tlv_eta', 'truth_l_tlv_eta', 200, -5, 5, 1);
	/*Histo(h_l_pt, h_l_pt_truth, l_tlv_pt, truth_l_tlv_pt, int 200, int - 5, int 5, int 1);
	Histo(h_l_phi, h_l_phi_truth, l_tlv_phi, truth_l_tlv_phi, int 200, int - 5, int 5, int 1);

	//For Two Leptons
	Histo(h_ll_eta, h_ll_eta_truth, ll_tlv_eta, truth_ll_tlv_eta, int 200, int - 5, int 5, int 2);
	Histo(h_ll_pt, h_ll_pt_truth, ll_tlv_pt, truth_ll_tlv_pt, int 200, int - 5, int 5, int 2);
	Histo(h_ll_phi, h_ll_phi_truth, ll_tlv_phi, truth_ll_tlv_phi, int 200, int - 5, int 5, int 2);
	Histo(h_ll_m, h_ll_m_truth, ll_tlv_m, truth_ll_tlv_m, int 200, int - 5, int 5, int 2);

	//For Three Leptons
	Histo(h_lll_eta, h_lll_eta_truth, lll_tlv_eta, truth_lll_tlv_eta, int 200, int - 5, int 5, int 3);
	Histo(h_lll_pt, h_lll_pt_truth, lll_tlv_pt, truth_lll_tlv_pt, int 200, int - 5, int 5, int 3);
	Histo(h_lll_phi, h_lll_phi_truth, lll_tlv_phi, truth_lll_tlv_phi, int 200, int - 5, int 5, int 3);
	Histo(h_lll_m, h_lll_m_truth, lll_tlv_m, truth_lll_tlv_m, int 200, int - 5, int 5, int 3);

	//For Four Leptons
	Histo(h_llll_eta, h_llll_eta_truth, llll_tlv_eta, truth_llll_tlv_eta, int 200, int - 5, int 5, int 4);
	Histo(h_llll_pt, h_llll_pt_truth, llll_tlv_pt, truth_llll_tlv_pt, int 200, int - 5, int 5, int 4);
	Histo(h_llll_phi, h_llll_phi_truth, llll_tlv_phi, truth_llll_tlv_phi, int 200, int - 5, int 5, int 4);
	Histo(h_llll_m, h_llll_m_truth, llll_tlv_m, truth_llll_tlv_m, int 200, int - 5, int 5, int 4);
	*/
	return 0;
};
