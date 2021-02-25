#include "ABBAB.h"
#include "A/ABBABA.h"
#include "B/ABBABB.h"
#include "C/ABBABC.h"
#include "D/ABBABD.h"
#include "E/ABBABE.h"

namespace ABBAB {

std::string run() {
  std::string out("ABBAB");
  out += std::string(SEPARATOR);
  out += ABBABA::run();
  out += std::string(SEPARATOR);
  out += ABBABB::run();
  out += std::string(SEPARATOR);
  out += ABBABC::run();
  out += std::string(SEPARATOR);
  out += ABBABD::run();
  out += std::string(SEPARATOR);
  out += ABBABE::run();
  return out;
}

}