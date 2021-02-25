#include "AACEE.h"
#include "A/AACEEA.h"
#include "B/AACEEB.h"
#include "C/AACEEC.h"
#include "D/AACEED.h"
#include "E/AACEEE.h"

namespace AACEE {

std::string run() {
  std::string out("AACEE");
  out += std::string(SEPARATOR);
  out += AACEEA::run();
  out += std::string(SEPARATOR);
  out += AACEEB::run();
  out += std::string(SEPARATOR);
  out += AACEEC::run();
  out += std::string(SEPARATOR);
  out += AACEED::run();
  out += std::string(SEPARATOR);
  out += AACEEE::run();
  return out;
}

}