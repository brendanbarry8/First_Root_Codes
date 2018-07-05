#include "C:\Indstu\Histo.h"

void Histo::Histo_mkr(char& H_name, char& Ht_name, char& H_data, char& Ht_data, int& bins, int& min, int& max, int& i)
{

	/*
	//Creating a Canvas for plotting on (better format)
	auto c1 = new TCanvas("c1", "c1", 900, 500);
	gStyle->SetOptStat(0);
	*/

	cout << "" << endl;
	cout << "--Made it Inside Histo_mkr Function" << endl;
	cout << "" << endl;

	//Creating the Histograms for the data 
	TH1F *H_name = new TH1F(H_name, H_name, bins, min, max);
	TH1F *"" + Ht_name + "" = new TH1F("" + Ht_name + "", "" + Ht_name + "", bins, min, max);

	//Putting data into Hisograms
	llllTree->Draw("" + H_data + " >> " + H_name + "");
	llllTree->Draw("" + Ht_data + " >> " + Ht_name + "");

	//Setting the X and Y axis Lables 
	"" + H_name + ""->SetXTitle("" + H_name + "");
	"" + Ht_name + ""->SetXTitle("" + H_name + "");
	"" + H_name + ""->SetYTitle("Occurrences");
	"" + Ht_name + ""->SetYTitle("Occurrences");

	//Selecting the colors for the Histograms
	"" + H_name + ""->SetLineColor(kRed);
	"" + Ht_name + ""->SetLineColor(kBlue);

	//Drawing the Histograms on the Canvas
	"" + Ht_name + ""->Draw("c1");
	"" + H_name + ""->Draw("SAME");

	//Adding a Legend to the Plot
	auto legend = new TLegend(0.65, 0.7, 0.88, 0.88);
	legend->SetHeader("The Legend Title");
	legend->AddEntry("" + H_name + "", "" + H_name + "", "l");
	legend->AddEntry("" + Ht_name + "", "" + H_name + "", "l");
	legend->Draw();

	//Saving Histogram to Folder
	if (i == 1) {
		c1->Print("C:\\Indstu\\llllTree_Histos\\1_lep\\" + H_name + ".pdf");
	}
	elif(i == 2) {
		c1->Print("C:\\Indstu\\llllTree_Histos\\2_lep" + H_name + ".pdf");
	}
	elif(i == 3) {
		c1->Print("C:\\Indstu\\llllTree_Histos\\3_lep" + H_name + ".pdf");
	}
	elif(i == 4) {
		c1->Print("C:\\Indstu\\llllTree_Histos\\4_lep" + H_name + ".pdf");
	}
	//Example of string "C:"+stringvariable+".pdf" 
}