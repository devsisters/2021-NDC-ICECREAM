#include "ABDED.h"
#include "A/ABDEDA.h"
#include "B/ABDEDB.h"
#include "C/ABDEDC.h"
#include "D/ABDEDD.h"
#include "E/ABDEDE.h"

namespace ABDED {

std::string run() {
  std::string out("ABDED");
  out += std::string(SEPARATOR);
  out += ABDEDA::run();
  out += std::string(SEPARATOR);
  out += ABDEDB::run();
  out += std::string(SEPARATOR);
  out += ABDEDC::run();
  out += std::string(SEPARATOR);
  out += ABDEDD::run();
  out += std::string(SEPARATOR);
  out += ABDEDE::run();
  return out;
}

}