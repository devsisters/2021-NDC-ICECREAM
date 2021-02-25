#include "ADDBD.h"
#include "A/ADDBDA.h"
#include "B/ADDBDB.h"
#include "C/ADDBDC.h"
#include "D/ADDBDD.h"
#include "E/ADDBDE.h"

namespace ADDBD {

std::string run() {
  std::string out("ADDBD");
  out += std::string(SEPARATOR);
  out += ADDBDA::run();
  out += std::string(SEPARATOR);
  out += ADDBDB::run();
  out += std::string(SEPARATOR);
  out += ADDBDC::run();
  out += std::string(SEPARATOR);
  out += ADDBDD::run();
  out += std::string(SEPARATOR);
  out += ADDBDE::run();
  return out;
}

}