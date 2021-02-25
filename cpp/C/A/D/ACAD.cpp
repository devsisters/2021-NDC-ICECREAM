#include "ACAD.h"
#include "A/ACADA.h"
#include "B/ACADB.h"
#include "C/ACADC.h"
#include "D/ACADD.h"
#include "E/ACADE.h"

namespace ACAD {

std::string run() {
  std::string out("ACAD");
  out += std::string(SEPARATOR);
  out += ACADA::run();
  out += std::string(SEPARATOR);
  out += ACADB::run();
  out += std::string(SEPARATOR);
  out += ACADC::run();
  out += std::string(SEPARATOR);
  out += ACADD::run();
  out += std::string(SEPARATOR);
  out += ACADE::run();
  return out;
}

}