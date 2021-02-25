#include "ACEEE.h"
#include "A/ACEEEA.h"
#include "B/ACEEEB.h"
#include "C/ACEEEC.h"
#include "D/ACEEED.h"
#include "E/ACEEEE.h"

namespace ACEEE {

std::string run() {
  std::string out("ACEEE");
  out += std::string(SEPARATOR);
  out += ACEEEA::run();
  out += std::string(SEPARATOR);
  out += ACEEEB::run();
  out += std::string(SEPARATOR);
  out += ACEEEC::run();
  out += std::string(SEPARATOR);
  out += ACEEED::run();
  out += std::string(SEPARATOR);
  out += ACEEEE::run();
  return out;
}

}