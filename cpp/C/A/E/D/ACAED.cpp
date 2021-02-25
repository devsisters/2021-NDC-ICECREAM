#include "ACAED.h"
#include "A/ACAEDA.h"
#include "B/ACAEDB.h"
#include "C/ACAEDC.h"
#include "D/ACAEDD.h"
#include "E/ACAEDE.h"

namespace ACAED {

std::string run() {
  std::string out("ACAED");
  out += std::string(SEPARATOR);
  out += ACAEDA::run();
  out += std::string(SEPARATOR);
  out += ACAEDB::run();
  out += std::string(SEPARATOR);
  out += ACAEDC::run();
  out += std::string(SEPARATOR);
  out += ACAEDD::run();
  out += std::string(SEPARATOR);
  out += ACAEDE::run();
  return out;
}

}