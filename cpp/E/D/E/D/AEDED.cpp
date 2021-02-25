#include "AEDED.h"
#include "A/AEDEDA.h"
#include "B/AEDEDB.h"
#include "C/AEDEDC.h"
#include "D/AEDEDD.h"
#include "E/AEDEDE.h"

namespace AEDED {

std::string run() {
  std::string out("AEDED");
  out += std::string(SEPARATOR);
  out += AEDEDA::run();
  out += std::string(SEPARATOR);
  out += AEDEDB::run();
  out += std::string(SEPARATOR);
  out += AEDEDC::run();
  out += std::string(SEPARATOR);
  out += AEDEDD::run();
  out += std::string(SEPARATOR);
  out += AEDEDE::run();
  return out;
}

}