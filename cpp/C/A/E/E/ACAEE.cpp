#include "ACAEE.h"
#include "A/ACAEEA.h"
#include "B/ACAEEB.h"
#include "C/ACAEEC.h"
#include "D/ACAEED.h"
#include "E/ACAEEE.h"

namespace ACAEE {

std::string run() {
  std::string out("ACAEE");
  out += std::string(SEPARATOR);
  out += ACAEEA::run();
  out += std::string(SEPARATOR);
  out += ACAEEB::run();
  out += std::string(SEPARATOR);
  out += ACAEEC::run();
  out += std::string(SEPARATOR);
  out += ACAEED::run();
  out += std::string(SEPARATOR);
  out += ACAEEE::run();
  return out;
}

}