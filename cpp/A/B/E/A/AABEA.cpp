#include "AABEA.h"
#include "A/AABEAA.h"
#include "B/AABEAB.h"
#include "C/AABEAC.h"
#include "D/AABEAD.h"
#include "E/AABEAE.h"

namespace AABEA {

std::string run() {
  std::string out("AABEA");
  out += std::string(SEPARATOR);
  out += AABEAA::run();
  out += std::string(SEPARATOR);
  out += AABEAB::run();
  out += std::string(SEPARATOR);
  out += AABEAC::run();
  out += std::string(SEPARATOR);
  out += AABEAD::run();
  out += std::string(SEPARATOR);
  out += AABEAE::run();
  return out;
}

}