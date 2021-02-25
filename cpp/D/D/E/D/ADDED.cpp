#include "ADDED.h"
#include "A/ADDEDA.h"
#include "B/ADDEDB.h"
#include "C/ADDEDC.h"
#include "D/ADDEDD.h"
#include "E/ADDEDE.h"

namespace ADDED {

std::string run() {
  std::string out("ADDED");
  out += std::string(SEPARATOR);
  out += ADDEDA::run();
  out += std::string(SEPARATOR);
  out += ADDEDB::run();
  out += std::string(SEPARATOR);
  out += ADDEDC::run();
  out += std::string(SEPARATOR);
  out += ADDEDD::run();
  out += std::string(SEPARATOR);
  out += ADDEDE::run();
  return out;
}

}