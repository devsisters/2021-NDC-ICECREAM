#include "ADABD.h"
#include "A/ADABDA.h"
#include "B/ADABDB.h"
#include "C/ADABDC.h"
#include "D/ADABDD.h"
#include "E/ADABDE.h"

namespace ADABD {

std::string run() {
  std::string out("ADABD");
  out += std::string(SEPARATOR);
  out += ADABDA::run();
  out += std::string(SEPARATOR);
  out += ADABDB::run();
  out += std::string(SEPARATOR);
  out += ADABDC::run();
  out += std::string(SEPARATOR);
  out += ADABDD::run();
  out += std::string(SEPARATOR);
  out += ADABDE::run();
  return out;
}

}