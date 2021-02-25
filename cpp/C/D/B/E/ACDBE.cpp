#include "ACDBE.h"
#include "A/ACDBEA.h"
#include "B/ACDBEB.h"
#include "C/ACDBEC.h"
#include "D/ACDBED.h"
#include "E/ACDBEE.h"

namespace ACDBE {

std::string run() {
  std::string out("ACDBE");
  out += std::string(SEPARATOR);
  out += ACDBEA::run();
  out += std::string(SEPARATOR);
  out += ACDBEB::run();
  out += std::string(SEPARATOR);
  out += ACDBEC::run();
  out += std::string(SEPARATOR);
  out += ACDBED::run();
  out += std::string(SEPARATOR);
  out += ACDBEE::run();
  return out;
}

}