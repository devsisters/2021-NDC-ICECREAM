#include "AACCE.h"
#include "A/AACCEA.h"
#include "B/AACCEB.h"
#include "C/AACCEC.h"
#include "D/AACCED.h"
#include "E/AACCEE.h"

namespace AACCE {

std::string run() {
  std::string out("AACCE");
  out += std::string(SEPARATOR);
  out += AACCEA::run();
  out += std::string(SEPARATOR);
  out += AACCEB::run();
  out += std::string(SEPARATOR);
  out += AACCEC::run();
  out += std::string(SEPARATOR);
  out += AACCED::run();
  out += std::string(SEPARATOR);
  out += AACCEE::run();
  return out;
}

}