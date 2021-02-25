#include "ACEEC.h"
#include "A/ACEECA.h"
#include "B/ACEECB.h"
#include "C/ACEECC.h"
#include "D/ACEECD.h"
#include "E/ACEECE.h"

namespace ACEEC {

std::string run() {
  std::string out("ACEEC");
  out += std::string(SEPARATOR);
  out += ACEECA::run();
  out += std::string(SEPARATOR);
  out += ACEECB::run();
  out += std::string(SEPARATOR);
  out += ACEECC::run();
  out += std::string(SEPARATOR);
  out += ACEECD::run();
  out += std::string(SEPARATOR);
  out += ACEECE::run();
  return out;
}

}