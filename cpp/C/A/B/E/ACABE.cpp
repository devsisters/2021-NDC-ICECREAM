#include "ACABE.h"
#include "A/ACABEA.h"
#include "B/ACABEB.h"
#include "C/ACABEC.h"
#include "D/ACABED.h"
#include "E/ACABEE.h"

namespace ACABE {

std::string run() {
  std::string out("ACABE");
  out += std::string(SEPARATOR);
  out += ACABEA::run();
  out += std::string(SEPARATOR);
  out += ACABEB::run();
  out += std::string(SEPARATOR);
  out += ACABEC::run();
  out += std::string(SEPARATOR);
  out += ACABED::run();
  out += std::string(SEPARATOR);
  out += ACABEE::run();
  return out;
}

}