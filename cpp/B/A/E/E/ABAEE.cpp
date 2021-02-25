#include "ABAEE.h"
#include "A/ABAEEA.h"
#include "B/ABAEEB.h"
#include "C/ABAEEC.h"
#include "D/ABAEED.h"
#include "E/ABAEEE.h"

namespace ABAEE {

std::string run() {
  std::string out("ABAEE");
  out += std::string(SEPARATOR);
  out += ABAEEA::run();
  out += std::string(SEPARATOR);
  out += ABAEEB::run();
  out += std::string(SEPARATOR);
  out += ABAEEC::run();
  out += std::string(SEPARATOR);
  out += ABAEED::run();
  out += std::string(SEPARATOR);
  out += ABAEEE::run();
  return out;
}

}