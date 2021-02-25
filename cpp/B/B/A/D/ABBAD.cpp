#include "ABBAD.h"
#include "A/ABBADA.h"
#include "B/ABBADB.h"
#include "C/ABBADC.h"
#include "D/ABBADD.h"
#include "E/ABBADE.h"

namespace ABBAD {

std::string run() {
  std::string out("ABBAD");
  out += std::string(SEPARATOR);
  out += ABBADA::run();
  out += std::string(SEPARATOR);
  out += ABBADB::run();
  out += std::string(SEPARATOR);
  out += ABBADC::run();
  out += std::string(SEPARATOR);
  out += ABBADD::run();
  out += std::string(SEPARATOR);
  out += ABBADE::run();
  return out;
}

}