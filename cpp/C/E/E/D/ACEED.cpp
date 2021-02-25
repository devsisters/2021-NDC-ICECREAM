#include "ACEED.h"
#include "A/ACEEDA.h"
#include "B/ACEEDB.h"
#include "C/ACEEDC.h"
#include "D/ACEEDD.h"
#include "E/ACEEDE.h"

namespace ACEED {

std::string run() {
  std::string out("ACEED");
  out += std::string(SEPARATOR);
  out += ACEEDA::run();
  out += std::string(SEPARATOR);
  out += ACEEDB::run();
  out += std::string(SEPARATOR);
  out += ACEEDC::run();
  out += std::string(SEPARATOR);
  out += ACEEDD::run();
  out += std::string(SEPARATOR);
  out += ACEEDE::run();
  return out;
}

}