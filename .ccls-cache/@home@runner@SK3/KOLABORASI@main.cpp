#include <iostream>
#include <fstream>
#include "../LIBRARY/input.h"
#include "../LIBRARY/proses.h"
#include "../LIBRARY/output.h"

int main(){
	input input;
	input.cetak();
	input.tofile();
	return 0;

  proses proses;
	proses.getData();
	proses.toFile();
	return 0;
  
  output output;
	output.getData();
	output.cetak();
	return 0;
}