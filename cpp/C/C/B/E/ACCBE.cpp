#include "ACCBE.h"
#include "A/ACCBEA.h"
#include "B/ACCBEB.h"
#include "C/ACCBEC.h"
#include "D/ACCBED.h"
#include "E/ACCBEE.h"

namespace ACCBE {

std::string run() {
  std::string out("ACCBE");
  out += std::string(SEPARATOR);
  out += ACCBEA::run();
  out += std::string(SEPARATOR);
  out += ACCBEB::run();
  out += std::string(SEPARATOR);
  out += ACCBEC::run();
  out += std::string(SEPARATOR);
  out += ACCBED::run();
  out += std::string(SEPARATOR);
  out += ACCBEE::run();
  return out;
}

}