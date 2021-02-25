#include "AACCB.h"
#include "A/AACCBA.h"
#include "B/AACCBB.h"
#include "C/AACCBC.h"
#include "D/AACCBD.h"
#include "E/AACCBE.h"

namespace AACCB {

std::string run() {
  std::string out("AACCB");
  out += std::string(SEPARATOR);
  out += AACCBA::run();
  out += std::string(SEPARATOR);
  out += AACCBB::run();
  out += std::string(SEPARATOR);
  out += AACCBC::run();
  out += std::string(SEPARATOR);
  out += AACCBD::run();
  out += std::string(SEPARATOR);
  out += AACCBE::run();
  return out;
}

}