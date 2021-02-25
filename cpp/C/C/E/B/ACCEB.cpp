#include "ACCEB.h"
#include "A/ACCEBA.h"
#include "B/ACCEBB.h"
#include "C/ACCEBC.h"
#include "D/ACCEBD.h"
#include "E/ACCEBE.h"

namespace ACCEB {

std::string run() {
  std::string out("ACCEB");
  out += std::string(SEPARATOR);
  out += ACCEBA::run();
  out += std::string(SEPARATOR);
  out += ACCEBB::run();
  out += std::string(SEPARATOR);
  out += ACCEBC::run();
  out += std::string(SEPARATOR);
  out += ACCEBD::run();
  out += std::string(SEPARATOR);
  out += ACCEBE::run();
  return out;
}

}