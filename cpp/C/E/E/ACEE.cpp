#include "ACEE.h"
#include "A/ACEEA.h"
#include "B/ACEEB.h"
#include "C/ACEEC.h"
#include "D/ACEED.h"
#include "E/ACEEE.h"

namespace ACEE {

std::string run() {
  std::string out("ACEE");
  out += std::string(SEPARATOR);
  out += ACEEA::run();
  out += std::string(SEPARATOR);
  out += ACEEB::run();
  out += std::string(SEPARATOR);
  out += ACEEC::run();
  out += std::string(SEPARATOR);
  out += ACEED::run();
  out += std::string(SEPARATOR);
  out += ACEEE::run();
  return out;
}

}