#include "ABA.h"
#include "A/ABAA.h"
#include "B/ABAB.h"
#include "C/ABAC.h"
#include "D/ABAD.h"
#include "E/ABAE.h"

namespace ABA {

std::string run() {
  std::string out("ABA");
  out += std::string(SEPARATOR);
  out += ABAA::run();
  out += std::string(SEPARATOR);
  out += ABAB::run();
  out += std::string(SEPARATOR);
  out += ABAC::run();
  out += std::string(SEPARATOR);
  out += ABAD::run();
  out += std::string(SEPARATOR);
  out += ABAE::run();
  return out;
}

}