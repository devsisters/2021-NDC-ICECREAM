#include "AADBE.h"
#include "A/AADBEA.h"
#include "B/AADBEB.h"
#include "C/AADBEC.h"
#include "D/AADBED.h"
#include "E/AADBEE.h"

namespace AADBE {

std::string run() {
  std::string out("AADBE");
  out += std::string(SEPARATOR);
  out += AADBEA::run();
  out += std::string(SEPARATOR);
  out += AADBEB::run();
  out += std::string(SEPARATOR);
  out += AADBEC::run();
  out += std::string(SEPARATOR);
  out += AADBED::run();
  out += std::string(SEPARATOR);
  out += AADBEE::run();
  return out;
}

}