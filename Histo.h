#ifndef HISTO_H_
#define HISTO_H

class Histo
{
public:
	void Histo_mkr(char& H_name, char& Ht_name, char& H_data, char& Ht_data, int& bins, int& min, int& max, int& i);
	/*
	void Histo_mkr();
	char str *H_name;
	char str *Ht_name;
	char str *H_data;
	char str *Ht_data;
	int *bins;
	int *min;
	int *max;
	int *i;
	*/

private:
	//void Histo_mkr(char& H_name, char& Ht_name, char& H_data, char& Ht_data, int& bins, int& min, int& max, int& i);

};

/*
Histo{
public:
	//void Histo_mkr(const string& H_name, const string& Ht_name, const string& H_data, const string& Ht_data, int bins, int min, int max, int i);
	void Histo_mkr(char& "h_l_eta", char& "h_l_eta_truth", char& "l_tlv_eta", char& "truth_l_tlv_eta", int& 200, int& -5, int& 5, int& 1);
	//void Histo_mkr(char& H_name, char& Ht_name, char& H_data, char& Ht_data, int& bins, int& min, int& max, int& i);
	//void Histo_mkr("h_l_eta", "h_l_eta_truth", "l_tlv_eta", "truth_l_tlv_eta", 200, -5, 5, 1);
	//void main();
	//static void Histo();
	//void Histo_main();
	//void Histo();
	// Old ref- const std::string& *Ht_data;
	/*char str *H_name;
	char str *Ht_name;
	char str *H_data;
	char str *Ht_data;
	int *bins;
	int *min;
	int *max;
	int *i;
	
};*/

#endif