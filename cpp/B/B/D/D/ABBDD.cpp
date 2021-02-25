#include "ABBDD.h"
#include "A/ABBDDA.h"
#include "B/ABBDDB.h"
#include "C/ABBDDC.h"
#include "D/ABBDDD.h"
#include "E/ABBDDE.h"

namespace ABBDD {

std::string run() {
  std::string out("ABBDD");
  out += std::string(SEPARATOR);
  out += ABBDDA::run();
  out += std::string(SEPARATOR);
  out += ABBDDB::run();
  out += std::string(SEPARATOR);
  out += ABBDDC::run();
  out += std::string(SEPARATOR);
  out += ABBDDD::run();
  out += std::string(SEPARATOR);
  out += ABBDDE::run();
  return out;
}

}