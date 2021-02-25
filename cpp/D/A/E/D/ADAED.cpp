#include "ADAED.h"
#include "A/ADAEDA.h"
#include "B/ADAEDB.h"
#include "C/ADAEDC.h"
#include "D/ADAEDD.h"
#include "E/ADAEDE.h"

namespace ADAED {

std::string run() {
  std::string out("ADAED");
  out += std::string(SEPARATOR);
  out += ADAEDA::run();
  out += std::string(SEPARATOR);
  out += ADAEDB::run();
  out += std::string(SEPARATOR);
  out += ADAEDC::run();
  out += std::string(SEPARATOR);
  out += ADAEDD::run();
  out += std::string(SEPARATOR);
  out += ADAEDE::run();
  return out;
}

}