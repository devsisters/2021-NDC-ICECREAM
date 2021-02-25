#include "AAABA.h"
#include "A/AAABAA.h"
#include "B/AAABAB.h"
#include "C/AAABAC.h"
#include "D/AAABAD.h"
#include "E/AAABAE.h"

namespace AAABA {

std::string run() {
  std::string out("AAABA");
  out += std::string(SEPARATOR);
  out += AAABAA::run();
  out += std::string(SEPARATOR);
  out += AAABAB::run();
  out += std::string(SEPARATOR);
  out += AAABAC::run();
  out += std::string(SEPARATOR);
  out += AAABAD::run();
  out += std::string(SEPARATOR);
  out += AAABAE::run();
  return out;
}

}